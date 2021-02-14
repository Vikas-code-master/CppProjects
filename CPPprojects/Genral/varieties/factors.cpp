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
    
 int t = 128;
vector<vector<int>> v1 ;

for (int i=2 ; i< sqrt(t)+1; i++)
 {
    //  cout<<"xxx";
     vc v;
     if (t % i == 0)
     {
        v.pb(i);
        // cout << i;
        int k = t / i ;
        v.pb (k);
        v1.pb(v);
     }

 }
    for (int i=0 ;i<v1.size();i++)
     {
      for (int j=0 ; j<v1[i].size();j++)
        {
          cout<< v1[i][j]<<" ";
        }
         cout<<endl ;
     }


return 0 ;
}