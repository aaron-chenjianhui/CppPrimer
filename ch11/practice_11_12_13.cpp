#include <string>
#include <utility>
#include <vector>

using namespace std;


int main(int argc, char* argv[]){
    pair<string, int> my_pair;
    vector<pair<string, int>> vec_pair;

    // use make_pair to initialize pair
    my_pair = make_pair("a", 1);
    vec_pair.push_back(my_pair);

    // using explicit construct
    my_pair = pair<string, int>("b", 2);
    vec_pair.push_back(my_pair);

    // using braced initializer
    my_pair = {"c", 3};
    vec_pair.push_back(my_pair);

    return 0;
}