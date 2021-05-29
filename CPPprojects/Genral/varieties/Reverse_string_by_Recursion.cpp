#include <iostream>

using namespace std;
 int n ;
string st = "";
void fun (string s)
{
    
    if (n<1)
    return ;
    st += s[n-1];
    n--;
    fun(s);
}

int main()
{
    string s = "vikaskumar" ;
    n = s.length() ;
    fun(s) ;
    cout<<st ;
    return 0;
}
