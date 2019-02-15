#include <string>

using namespace std;

void ChangeStr(string s, string oldval, string newval);

int main(int argc, char* argv[]){
    string s("I go though an old anvenue");
    string oldval("ough");
    string newval("rough");

    ChangeStr(s, oldval, newval);

    return 0;
}


void ChangeStr(string s, string oldval, string newval){
    
}