#include <iostream>
#include <string>
#include <vector>
#include <memory>

#include <initializer_list>

using namespace std;

class StrBlob;

int main(int argc, char* argv[]){
    // initializer_list<string> il = {"fuck", "your", "hello"};

    // shared_ptr<vector<string>> vec_ptr(make_shared<vector<string>>(il));

    return 0;
}

// class
class StrBlob{
public:
    typedef vector<string>::size_type size_type;

    StrBlob(): data(make_shared<vector<string>>()){}
    StrBlob(initializer_list<string> il): data(make_shared<vector<string>>(il)){}

    void push_back(const string& str){
        data->push_back(str);
    }

    void pop_back(){
        check(0, "pop_back out of range");
        data->pop_back();
    }

    // whether the vector is empty
    bool empty() const {
        return data->empty();
    }

    // return vector size
    size_type size() const {
        return data->size();
    }

    string& front(){
        check(0, "front on empty StrBlob");
        return data->front();
    }

    // why should I use const string&
    const string& front() const{
        check(0, "front on empty StrBlob");
        return data->front();
    }

    string& back(){
        check(0, "back on empty StrBlob");
        return data->back();
    }

    // why should I use const string&
    const string& back() const {
        check(0, "back on empty StrBlob");
        return data->back();
    }

private:
    shared_ptr<vector<string>> data;

    void check(size_type i, const string &msg) const {
        if (i >= data->size()){
            throw out_of_range(msg);
        }
    }

};