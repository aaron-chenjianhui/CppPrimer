#include <vector>
#include <string>

#include <algorithm>

using namespace std;

void elimDups(vector<string> &);

int main(int argc, char* argv[]){
    vector<string> vec_str{"the", "quick", "red", "fox", "jumps", "over", "the", "slow"
                            "red", "turtle"};

    elimDups(vec_str);

    return 0;
}

void elimDups(vector<string> &vec_str){
    sort(vec_str.begin(), vec_str.end());

    auto vec_end = unique(vec_str.begin(), vec_str.end());

    vec_str.erase(vec_end, vec_str.end());
}