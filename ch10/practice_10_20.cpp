#include <iostream>

#include <vector>
#include <string>

#include <algorithm>

using namespace std;

int main(int argc, char* argv[]){
    vector<string> vec_str{"word", "helloboy", "fuck", "hellokitty"};

    string::size_type sz = 6;

    auto num = count_if(vec_str.begin(), vec_str.end(), [sz] (string str) {return str.size() > sz ? true : false;});
    std::cout << num << std::endl;

    return 0;
}