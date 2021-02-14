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
void frequency (string s)
{
    int n = s.length() ;
    map <char,int> m ;
    vc v ;
    fl (i,0,n)
    {
        if (m.find(s[i])== m.end())
        {
             m[s[i]] = 1 ;
             v.pb(s[i]);
        }
        else 
        {
            m[s[i]] += 1 ;
        }
     }
      string st = "";
     fl (i,0,v.size())
     {
        //  cout <<m[v[i]];
         string p(1,v[i]);
         st = st + to_string(m[v[i]]) + p ;
     }
     cout << st;
}
int main()
{
    string str = "aaaabbbbcccccdddee" ;
    frequency(str) ;
cout<<endl ;
return 0 ;
}