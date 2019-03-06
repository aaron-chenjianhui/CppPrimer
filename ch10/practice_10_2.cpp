#include <iostream>

#include <string>
#include <list>
#include <algorithm>

using namespace std;

int main(int argc, char* argv[]){
    list<string> list_str = {"word", "peace", "word", "hopeful", "red"};

    auto re = count(list_str.begin(), list_str.end(), "word");

    cout << "There are " << re << " same thing in the list." << endl;

    return 0;
}