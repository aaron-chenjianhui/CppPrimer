#include <iostream>

#include <algorithm>
#include <vector>

using namespace std;

int main(int argc, char* argv[]){
    vector<int> vec_int = {1, 2, 3, 4, 5, 6, 6, 7};    

    auto re = count(vec_int.begin(), vec_int.end(), 6);
    cout << "There is " << re << " in the vec_int" << endl;

    return 0;
}