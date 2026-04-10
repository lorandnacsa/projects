#include<iostream>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

/*
Sum ofthe first n number
*/
int n_th_triangular_number(int n){
    return n * (n+1) / 2;
}
void find_divisors(int n, vector<int>& divisors ) {
     // Note that this loop runs till square root
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            
            // If divisors are equal, print only one
            if (n / i == i) {
                divisors.push_back(i) ;
            }
            // Otherwise print both 
            else {
                divisors.push_back(i) ;
                divisors.push_back(n/i) ;
            }
        }
    }
}

int main() {
    int n = 0;
    vector<int> divisors;
    while(divisors.size() < 500){
        divisors.clear();
        n++;
        find_divisors(n_th_triangular_number(n), divisors);
        
    }

    cout <<  "The first triangular number over 500 divisors: " << n_th_triangular_number(n) << endl;
    return 0;
}