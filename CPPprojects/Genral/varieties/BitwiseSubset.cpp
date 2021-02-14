#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(i,a,b) for(ll i=a;i<b;i++)
#define vc vector<int> 
#define pb push_back
#define mp make_pair
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define time srand(chrono::high_resolution_clock::now().time_since_epoch().count());
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)

int main()
{
  char a[] = {'a','b','c'} ;
  int n = sizeof(a)/sizeof (a[0]) ;
//   cout<<n;
  unsigned int pow_set_size;
  pow_set_size = 1 << n;
//   cout<<pow_set_size ;
  fl (i,0,pow_set_size)
  {
      fl (j,0,n)
      {
         if ((i & (1 << j) )!= 0 )
         {
             cout <<a[j] <<" " ;
         }
      }
      cout<<endl ;
  }
return 0 ;
}