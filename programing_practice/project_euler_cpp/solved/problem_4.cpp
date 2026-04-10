#include<iostream>
#include<list>
#include<string>

/*
Palindromic numbers {10000 .... 998001}
*/

/*
void generate_palindroms(int min , int max ,  std::list<int> palindroms){
    int from = std::to_string(min).length();
    int to = std::to_string(max).length();
    
    for (int i = from; i <= to; i++){}
    
}

void recursive_palindrom(int level, int length, std::list<string>& palindroms){
    if(length / level <=  2 ){
        for(int i = 0; i <= 9; i++){
            if(level != 1 || i != 0  ){
                if(!palindroms.empty()){
                     for(auto palindrom : palindroms);
                        palindrom += std::to_string(i);
                } else{
                    std::string palindrom += std::to_string(i);
                    palindroms.push_back(palindrom);
                }
                recursive_palindrom(level + 1 , length, palindroms ); 

                


            }
        }
    }
}

*/



bool palindrom_check(auto palindrom){
    auto palindrom_str = std::to_string(palindrom);
    for (size_t i = 0; i <= palindrom_str.length()/2 ; i++ ){
        if(palindrom_str.at( 0 + i ) != palindrom_str.at( palindrom_str.length() -1 - i )  ){
            return false;
        }
    }
    return true;
}

int main(){
    int max_palindrom = 0;
    for(int i = 100; i <= 999; i++){
        for(int j = 100; j <= 999; j++){
            auto palindrom = i * j;
            if(palindrom_check(palindrom)){
                if(palindrom > max_palindrom){
                    max_palindrom = palindrom;
                }
            }
        }
    }

    std::cout << "Largest palindrom:" << max_palindrom << std::endl;
}