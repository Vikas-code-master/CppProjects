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
int max (int a, int b)
{
    int c = a > b ? a: b ;
    return c ;
}
int main()
{
int t ;
cin >> t ;
 while (t--) {
     int n,m ;
     cin>>n>>m ;
     int a[n][m] ;
     int y = 0 , z=0 , p = 0 ;
     fl (i,0,n)
     {
         fl (j,0,m)
         {
             cin >> a[i][j] ;
         }
     }
    fl (i,0,n)
     {
         fl (j,0,m)
         {
            if (a[i][j] < 0)
            {
                if (a[i-1][j]< 0 && a[i+1][j]<0)
                {
                    y = max (a[i-1][j]< 0 , a[i+1][j]<0) ;
                }
                if (a[i][j-1]< 0 && a[i][j+1]<0)
                {
                    z = max (a[i][j-1]< 0 , a[i][j+1]<0) ;
                }
                int k = max (y,z);


            }
         }
     }
}
cout<<endl ;
return 0 ;
}