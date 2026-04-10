#include<iostream>

int main(){
    for(int i = 1 ; i < 333; i++){
        int a_square = i * i;
        for(int j = i+1; j < 500; j++){
            int b_square = j * j; 
            for(int k = j+1; k < 1000  ; k++){
                int c_square = k * k;
                if(c_square > (a_square + b_square)){
                    break;
                }
                if( (a_square + b_square) == c_square){

                    if( i + j + k == 1000 ){
                        std::cout << "a*b*c: " << i*j*k << std::endl; 
                        break;
                    }
                }
            }
        }
    }
}