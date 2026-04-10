#include<iostream>
#include<vector>
#include"miller-rabin.h"


int main(){
    long int sum = 0;
    int max_length = 0;
    int max_length_prime = 0; 

    std::vector<int> primes;
    primes.push_back(2);
    for(int i = 3 ; i < 1000000 ; i += 2 ){  
        if(isprime(i)){
            primes.push_back(i);
        }
    }
    int i = 0 ;
    int j = 0 ;
    long int tmp_length;
    while(true){
        if(sum + primes.at(i) < 1000000){
            sum += primes.at(i);
            i++;
            tmp_length++;
        }
        if(sum + primes.at(i) >= 1000000){
            sum -= primes.at(j);
            j++;
            tmp_length--;
        }
        if(sum == 0 ){
            break;
        }

        if(isprime(sum)){
            if(max_length < tmp_length){
                max_length = tmp_length;
                max_length_prime = sum;

            }
        }


    }
    std::cout << "Prime, below one-million, that can be written as the sum of the most consecutive primes: " << max_length_prime <<std::endl; 
}