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

void merging (int a[] ,int l ,int mid, int h)
{
    int c[h] ;
    int i = l,j= mid+1 ,k= l;
    while (i<=mid && j<h)
    {
        if (a[i]<a[j])
        {
            c[k] = a[i] ;
            i++ ; k++ ;
        }
        else
        {
            c[k]= a[j];
            k++ ; j++ ;
        }
    }
    while (i<=mid)
    {
         c[k] = a[i] ;
            i++ ; k++ ;
    }
    while (j<h)
    {
         c[k] = a[j] ;
         j++ ; k++ ;
    }
    fl (i,0,h)
      cout <<c[i]<<" " ;
}
int main()
{

int a[] = {21,22,23,13,14,15} ;
// int b[] = {2,4,6,8,10};
int n = sizeof(a)/sizeof(a[0]) ;
// int m = sizeof(b)/sizeof(b[0]) ;
merging (a , 0  , ceil(n/2)-1 , n) ;

cout<<endl ;
return 0 ;
}