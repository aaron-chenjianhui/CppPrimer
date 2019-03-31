#include <iostream>
#include <list>
#include <algorithm>
#include <iterator>

using namespace std;
typedef int typeT;

int main(int argc, char* argv[]){
    list<typeT> lst{1, 2, 0, 3, 6, 0, 7};

    auto iter = find(lst.crbegin(), lst.crend(), 0);

    // TODO(CJH): There is a error.
    cout << distance(iter.base(), lst.end()) << endl;

    return 0;
}