#include <iostream>
#include <vector>
#include <string>
#include <iterator>

#include <algorithm>

using namespace std;

typedef string typeT;

void elimDups(vector<string> &);

int main(int argc, char* argv[]){
    vector<typeT> vec_str{"the", "quick", "red", "fox", "jumps", "over", "the", "slow",
                            "red", "turtle"};

    elimDups(vec_str);

    ostream_iterator<typeT> out(cout, " ");
    copy(vec_str.begin(), vec_str.end(), out);

    return 0;
}

void elimDups(vector<string> &vec_str){
    sort(vec_str.begin(), vec_str.end());

    auto vec_end = unique(vec_str.begin(), vec_str.end());

    vec_str.erase(vec_end, vec_str.end());
}