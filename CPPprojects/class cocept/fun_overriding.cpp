#include <bits/stdc++.h>
using namespace std;

class Base 
{
    public:
    void fun1 ()
    {
        cout <<"this is fun1 class" <<endl;
    }
   virtual void display()  // when we remove virtual keyword then display function will be call from base class
   // sue to static or early binding .
    {
        cout <<"this is base class" <<endl;
    }
};
class Derived : public Base 
{
    public:
    void display ()
    {
        cout << "this is derived class" <<"\n" ;
    }
};
int main()
{
     Derived d;
    Base *obj = & d;
    obj->display();
    cout<<endl ;
    return 0 ;
}