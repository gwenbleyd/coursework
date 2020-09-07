#include "header.h"

int main(){
    Array <int> x(10);

    for (int i = 0; i < x.size(); ++i) {
        x[i] = i + 1;
    }

    for(Array<int>::iterator i = x.begin(); i != x.end(); i++)
    {
        std::cout << *i << " ";
    }

    std::cout<<std::endl;

}