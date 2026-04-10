#include<iostream>

bool collatz_sequence(auto& n){
    
    if(n == 1){
        
        return false;
    }

    if( (n % 2)  ){
        n = 3 * n + 1;
    }else{
        n = n / 2;
    }
    return true;
}

int main(){
    long long n;
    long long length;
    long long max_length = 0;
    int max_chain_i = 0;
    for(int i = 1; i < 1000000; i++ ){
        length = 0;
        n = i;
        while(collatz_sequence(n)){
            length++; 
        }
        max_chain_i =(length > max_length) ? i : max_chain_i;
        max_length = (length > max_length) ? length : max_length;
       
        
    }
    std::cout << "Max length:" << max_length << std::endl; 
    std::cout << "Starting point of max chain:" << max_chain_i << std::endl; 
}