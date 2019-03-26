#include <iostream>


int main(int argc, char* argv[]){
    int a = 1;
    int b = 2;

    auto f = [](int a, int b){std::cout << "Sum value is: " << (a + b) << std::endl;};

    f(a, b);

    return 0;
}

// #include <iostream>

// #include <algorithm>
// #include <vector>

// int main(){
//     std::vector<int> vec_int{1, 2, 3, 4, 5, 6, 7, 8};

//     auto vec_type = vec_int.begin();

//     // for_each uses (*iter) to initialize the formal parameters of function object
//     std::for_each(vec_int.begin(), vec_int.end(), [](int val_int){std::cout << val_int << " ";});

//     return 0;
// }