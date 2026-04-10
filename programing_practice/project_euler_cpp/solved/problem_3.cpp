#include<iostream>
#include<list>
 
/*
its an ugly solution 
*/


int main(){
    std::list<long int> prim_list;
    long int n = 600851475143;
    
    for(long int i = 2  ; i <= n ; i++ ){
        if(!prim_list.size()){
            for (auto j : prim_list)
                if( !( n % j ) ){
                    n = n / j;
                }
        }
        
        if ( !( n % i ) ){
            n = n / i;
            std::cout << "i : " << i << std::endl;
            prim_list.push_back(i);

        }
    }

    std::cout << "Greatest prim factor: " << prim_list.back() << std::endl; 

}