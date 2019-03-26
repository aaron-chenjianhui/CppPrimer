#include <iostream>


int main(int argc, char* argv[]){
    int int_outer = 10;

    auto f = [int_outer](int int_inner)
             {std::cout << "The sum is: " << (int_outer + int_inner) << std::endl;};
    
    return 0;
}