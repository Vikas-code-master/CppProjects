#include <bits/stdc++.h>
using namespace std;

class Base 
{
    public:
    void fun1 ()
    {
        cout <<"this is fun1 class" <<endl;
    }
    virtual void display() = 0 ;
};
class Derived : public Base 
{
    public:
    void display()
    {
        cout << "this is derived class" <<"\n" ;
    }
};
int main()
{
    Base *d = new Derived;
    d->display() ;
cout<<endl ;
return 0 ;
}