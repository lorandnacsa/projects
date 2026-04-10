#include<vector>
#include<iostream>



std::vector<int> generate_d_fewer_then_n(int n){

    std::vector<int> d;
    int j = 2;
    int square = 4;
    for(int i = 2; i <= n; i++){
        if( i != square ){
            d.push_back(i);

        }else{
            j++;
            square = j*j; 
        }
    }
    return d;
}
    
int main(){

    std::vector<int> D = generate_d_fewer_then_n(1000);
    
    for(auto d: D){
        std::cout << d << " ";
    }
    std::cout << std::endl;
 }

