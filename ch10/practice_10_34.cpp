#include <iostream>
#include <iterator>
#include <vector>

using namespace std;

typedef int typeT;

int main(int argc, char* argv[]){
    vector<typeT> vec{1, 2, 3, 4, 5, 6, 7};

    ostream_iterator<typeT> out(cout, " ");
    copy(vec.rbegin(), vec.rend(), out);

    return 0;
}