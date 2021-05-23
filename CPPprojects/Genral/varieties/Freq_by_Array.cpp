#include <iostream>

using namespace std;

int main()
{
    int a[] = {1,1,2,2,3,3,3,4,4,5,6,6};
    int n = 12 ;
    int arr[100] = {0};
    for (int i=0 ; i<n ; i++)
    {
        if (arr[a[i]]==0)
        {
            arr[a[i]] = 1;
        }
        else arr[a[i]]+= 1 ;
    }
  for (int i=0 ; i<20 ; i++)
  {
      if (arr[i]!=0)
        cout<< i<<"freq is "<<arr[i]<<endl;
  }
    return 0;
}
