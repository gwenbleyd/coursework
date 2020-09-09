#include "header.h"

int main(){
    Array <int> x(10);

    for (int i = 0; i < x.size(); ++i) {
        x[i] = i + 1;
    }

    for(int & i : x){
        std::cout << i << " ";
    }

    std::cout<<std::endl;

    Array <int> y {7, 6, 5, 4, 3, 2, 1 };

    for(int & i : y){
        std::cout << i << " ";
    }

    std::cout<<std::endl;
}