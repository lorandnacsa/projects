#include<iostream>
/*
smallest number wich is evenly divisible from 1 to 20
*/
int main(){
    int multiple =  1   *               // 1 
                    2   *               // 1,2 
                    3   *               // 1,2,3,6
                    2   *               // 1,2,3,4,6,12
                    5   *               // 1,2,3,4,5,6,10,12,15,20
                    7   *               // 1,2,3,4,5,6,7,10,12,14,15
                    2   *
                    3   *
                    11  *
                    13  *
                    2   *
                    17  *
                    19 ;
    std::cout << "Smallest number wich is evenly divisible from 1 to 20: " << multiple << std::endl;
}