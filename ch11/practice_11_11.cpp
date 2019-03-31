#include <string>
#include <map>

using namespace std;

bool compareIsbn(const string& lhs, const string& rhs);

int main(int argc, char* argv[]){
    // the type of function includes return type and input type.
    using compareIsbnType = bool (*)(const string&, const string&);
    multimap<string, compareIsbnType> my_string(compareIsbnType);

    return 0;
}


bool compareIsbn(const string& lhs, const string &rhs){
    return lhs < rhs;
}