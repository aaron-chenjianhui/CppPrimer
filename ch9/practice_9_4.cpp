#include <vector>
#include <iostream>

using namespace std;

bool FindVal(vector<int>::iterator, vector<int>::iterator, int);

int main(int argc, char* argv[]){
    vector<int> vec_def{1, 2, 3, 4, 5, 6, 7};
     
    vector<int>::iterator front_iter = vec_def.begin();
    vector<int>::iterator end_iter = vec_def.end();

    int val = 10;

    bool re = FindVal(front_iter, end_iter, val);

    if (re){
        cout << "Find val in vector" << endl;
    }
    else{
        cout << "Not find val in vector" << endl;
    }

    return 0;
}

bool FindVal(vector<int>::iterator front_iter, vector<int>::iterator end_iter, int val){
    vector<int>::iterator iter;
    for (iter = front_iter; iter != end_iter; ++iter){
        if (val == *iter){
            return true;
        }
    }

    return false;
}