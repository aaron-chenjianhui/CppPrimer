#include <iostream>
#include <iterator>
#include <vector>

using namespace std;

typedef int typeT;

int main(int argc, char* argv[]){
    vector<typeT> vec{1, 2, 3, 4, 5, 6, 7};

    // for ostream
    ostream_iterator<typeT> out(cout, " ");

    for (auto iter = vec.end() - 1; ; --iter){
        out = *iter;
        if (iter == vec.begin()){
            break;
        }
    }

    return 0;
}