#include<list>
#include<iostream>
#include"miller-rabin.h"

bool division_trial(int trialed, std::list<int>& primes){
    for(auto prime : primes){
        if(!(trialed % prime)){
          return false;  
        }
    }
    return true;
}

int main(){
    long int sum = 2;
    std::list<int> primes;
    primes.push_back(2);
    for(int i = 3 ; i < 2000000 ; i += 2 ){  
        if(isprime(i)){
            sum += i ;
        }
    }
    std::cout << "Sum of primes below 2000000: " << sum <<std::endl; 
}