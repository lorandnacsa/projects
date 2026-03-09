# Kill existing xwinwrap processes (in case of restart)
pkill -f xwinwrap
# Clear pywal cache
wal -c

WALLPAPER_DIR="$HOME/downloads/backgrounds"

# Check if directory exists
if [ ! -d "$WALLPAPER_DIR" ]; then
    echo "Wallpaper directory not found!"
    exit 1
fi

# Get random file
FILE=$(ls "$WALLPAPER_DIR" 2>/dev/null | shuf -n 1)

if [ -z "$FILE" ]; then
    echo "No wallpapers found!"
    exit 1
fi

WALLPAPER_PATH="$WALLPAPER_DIR/$FILE"

# Set wallpaper based on file type
if [[ $FILE == *.png ]] || [[ $FILE == *.jpg ]] || [[ $FILE == *.jpeg ]]; then
    xwinwrap -ni -b -fs -ov -- feh --bg-fill "$WALLPAPER_PATH" &
elif [[ $FILE == *.mp4 ]] || [[ $FILE == *.gif ]] || [[ $FILE == *.webm ]]; then
    xwinwrap -ni -b -fs -ov -- mpv \
        -wid WID \
        --loop \
        --no-audio \
        --speed=1.0 \
        --no-osc \
        --no-osd-bar \
        --vo=gpu \
        --hwdec=auto \
        "$WALLPAPER_PATH" &
fi

# Generate colors
wal --saturate 1.0 -i "$WALLPAPER_PATH" -n

# Update Xresources and dwm
if command -v xrdb &> /dev/null; then
    xrdb -merge ~/.Xresources
fi

