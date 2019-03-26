#include <iostream>
#include <iterator>

#include <list>

using namespace std;

typedef int typeT;

int main(int argc, char* argv[]){
    list<typeT> vec_int{1, 2, 3, 4, 5, 6, 7, 8, 9};
    list<typeT> vec_a, vec_b, vec_c;

    // copy to the first vector using inserter
    copy(vec_int.begin(), vec_int.end(), inserter(vec_a, vec_a.begin()));
    // copy to the second vector
    copy(vec_int.begin(), vec_int.end(), front_inserter(vec_b));
    // copy to the third vector
    copy(vec_int.begin(), vec_int.end(), back_inserter(vec_c));

    // Disp the result
    ostream_iterator<typeT> out(cout, " ");
    // vec_a
    copy(vec_a.begin(), vec_a.end(), out);
    cout << endl;
    // vec_b
    copy(vec_b.begin(), vec_b.end(), out);
    cout << endl;
    // vec_c
    copy(vec_c.begin(), vec_c.end(), out);
    cout << endl;

    return 0;
}