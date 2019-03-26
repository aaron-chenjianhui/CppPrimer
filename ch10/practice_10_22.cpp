#include <iostream>

#include <vector>
#include <string>

#include <algorithm>
#include <functional>

using namespace std;
using namespace std::placeholders;

bool isLarger(string str, string::size_type sz);

int main(int argc, char* argv[]){
    vector<string> vec_str{"word", "helloboy", "fuck"};

    string::size_type sz = 6;

    auto num = count_if(vec_str.begin(), vec_str.end(), bind(isLarger, _1, sz));
    std::cout << num << std::endl;

    return 0;
}


bool isLarger(string str, string::size_type sz){
    return str.size() > sz ? true : false;
}