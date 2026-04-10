#include<iostream>
#include<list>
bool division_trial(int trialed, std::list<int> primes){
    for(auto prime : primes){
        if(!(trialed % prime)){
          return false;  
        }
    }
    return true;
}

int main(){
    int i = 2;
    int n = 1;
    std::list<int> primes;
    while( n <= 10001 ){
        if (division_trial(i , primes )){
            primes.push_back(i);
            std::cout << n << "th prime:" << primes.back() << std::endl;
            n++;
        }
        i++;
    }
    std::cout << n << "th prime:" << primes.back() << std::endl;
}