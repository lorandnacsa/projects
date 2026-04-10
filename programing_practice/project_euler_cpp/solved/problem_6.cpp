#include<iostream>

int sum_of_first_n_number(int n){
    return n * ( n + 1 ) / 2;
}

int sum_of_squares_of_first_n_number(int n){
    return n * ( n + 1 ) * ( 2 * n + 1 ) / 6;
}

int main(){
    std::cout << "Difference between the sum of the squares of the first one hundred natural numbers and the square of the sum: "
    << sum_of_first_n_number(100) * sum_of_first_n_number(100) - sum_of_squares_of_first_n_number(100) 
    << std::endl;

}