#include <iostream>
#include <list>
#include <string>

#include <algorithm>

using namespace std;
typedef string typeT;


int main(int argc, char* argv[]){
    list<typeT> lst{"the", "quick", "red", "fox", "jumps", "over", "the", "slow"
                            "red", "turtle"};

    // use sort and unique to eliminate duplicate words
    lst.sort();
    lst.unique();

    cout << "The size of list is: " << lst.size() << endl;

    return 0;
}
