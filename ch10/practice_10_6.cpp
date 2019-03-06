#include <iostream>

#include <algorithm>
#include <vector>


int main(int argc, char* argv[]){
    std::vector<int> vec_int{1, 2, 3, 4, 5, 6, 7};

    // std::cout << "Raw vector data is: " << vec_int << std::endl;

    std::fill_n(vec_int.begin(), vec_int.size(), 0);

    // std::cout << "Changed vector data is: " << vec_int << std::endl;

    std::vector<int> vec;
    vec.reserve(10);
    fill_n(vec.begin(), 10, 0);

    return 0;
}