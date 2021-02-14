#include <bits/stdc++.h>
using namespace std;

class Base 
{
    int a = 1 ;
    public:
    static int count ;  // important it,s necessary to initialize static variable oustide class
    Base ()
    {
        count++ ;
    }
    void display()
    {
        cout <<"this is base class" <<endl;
    }
    static void myClass ()   // static class generally needed when static data is private to acces it
    {
        // a ++ ;    a non static member cannot be acces in static method
        cout << count  + 5;
    }
};
int Base :: count = 1 ;
int main()
{
    Base b ;
    Base c ;
    Base :: myClass() ;
    cout<<endl ;
    cout << Base :: count ; // can be access by class name & scope resolution opeartor also ;
    cout<<endl ;
    cout << b.count ; // we can access by object of class also  
cout<<endl ;
return 0 ;
}