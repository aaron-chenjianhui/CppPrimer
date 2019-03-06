#include <iostream>

#include <vector>
#include <string>
#include <algorithm>
#include <iterator>

bool StrNumber(const std::string& str);

typedef std::string typeT;

int main(int argc, char* argv[]){
    std::vector<typeT> vec_str{"the", "quick", "red", "fox", "jumps", "over", "the", "slow",
                            "red", "turtle"};

    auto part_iter = std::partition(vec_str.begin(), vec_str.end(), StrNumber);

    vec_str.erase(part_iter, vec_str.end());

    copy(vec_str.begin(), vec_str.end(), std::ostream_iterator<typeT>(std::cout, " "));

    return 0;
}


bool StrNumber(const std::string& str){
    return (str.size() >= 5);
}