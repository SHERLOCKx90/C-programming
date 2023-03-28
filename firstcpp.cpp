#include<iostream>
using namespace std;
class A
{
    public:
    A(){
        cout << "constructor called";
    }
    ~A(){
        cout << "destructor called";
    }
};
int main(){
    A obj1;
}