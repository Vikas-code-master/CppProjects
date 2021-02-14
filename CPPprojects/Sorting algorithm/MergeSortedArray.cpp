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

void merging (int a[] ,int b[] ,int n, int m)
{
    int c [m+n] ;
    int i = 0,j= 0 ,k= 0;
    while (i<n && j<m)
    {
        if (a[i]<b[j])
        {
            c[k] = a[i] ;
            i++ ; k++ ;
        }
        else
        {
            c[k]=b[j];
            k++ ; j++ ;
        }
    }
    while (i<n)
    {
         c[k] = a[i] ;
            i++ ; k++ ;
    }
    while (j<m)
    {
         c[k] = b[j] ;
         j++ ; k++ ;
    }
    fl (i,0,n+m)
      cout <<c[i]<<" " ;
}

int main()
{

int a[] = {1,3,5,7,9} ;
int b[] = {2,4,6,8,10};
int n = sizeof(a)/sizeof(a[0]) ;
int m = sizeof(b)/sizeof(b[0]) ;
merging (a,b,n,m) ;

cout<<endl ;
return 0 ;
}