#include <iostream>  
using namespace std;  
int main()  
{  
int a[5]={1,9,3,4,5};  
int *ptr;  
ptr = a;
// int b = & a[1] ; 
for (int i=0 ; i<5 ; i++) 
{
cout<<"Value of *ptr is : "<<*ptr<<"\n";  
cout <<endl;
ptr++ ;
// cout<<"Value of *ptr++ : "<< ptr++ ;  
}
cout <<endl;
return 0;  
}  