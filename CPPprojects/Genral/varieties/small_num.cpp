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
    int  num = 14301620 ;
    int k= 4 ;
    int n=0 ;
    int nu = num ;
    vc v ;
    vc v1 ;
    vc v2;
    while (nu > 0)
    {
        int rem = nu%10 ;
        v.pb(rem);
        nu = nu/10;
    }
    reverse (v.begin(), v.end()) ;
    stack<int>s ;
    // s.push(v[0]) ;
    fl (i,0,v.size())
    {
        // cout << v[i];
        s.push(v[i]) ;
       if (k>0)
        {
            // cout<< k;
           if (v[i+1]<s.top())
           {
            //    cout<<s.top() ;
           s.pop();
           k-- ;
           }
        }
         
    }
    while (k>0)
      {
          s.pop() ;
          k-- ;
      }
    // fl(i,0,v.size())
    // cout << v[i];
  while(!s.empty())
    {
        // cout<<"x" ;
        // cout<<s.size();
        v2.pb(s.top());
        s.pop() ;

    }
    reverse (v2.begin(), v2.end()) ;
  fl(i,0,v2.size())
    cout << v2[i];

    cout<<endl ;
return 0 ;
}