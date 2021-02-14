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
    int a [] = {-2, -3, 4, -1, -2, 1, 5, -3} ;
    int n = sizeof(a)/sizeof (a[0]) ;
    // int k = 4 ;
    int sum = 0 ;
    int max = INT_MIN ;
    fl (k ,1,n+1)
      {
        fl (i,0,n-k+1)
         {
           fl (j,i,i+ k)
            {
              // cout <<a[j]<<" ";
                sum = sum + a[j] ;
                if (max < sum)
                max = sum ;
            }
                sum = 0 ;
        // cout<<endl ;
        }
    }
    cout<<max ;
cout<<endl ;
return 0 ;
}