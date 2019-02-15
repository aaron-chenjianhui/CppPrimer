#include <vector>
#include <iostream>

// initialize a string type frome vector<char>

int main (int argc, char* argv[])
{
    // std::vector<char> ch_vec("This is a vector of char");
    std::vector<char> ch_vec = {'h', 'e', 'l', 'l', 'o'};

    std::string str(ch_vec.begin(), ch_vec.end());

    std::cout << str << std::endl;

    return 0;
}