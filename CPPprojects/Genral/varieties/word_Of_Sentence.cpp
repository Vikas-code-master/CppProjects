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
    string str = "my name is vikas" ;
    vector <string> v ;
    string st ;
    int n = str.length () ;
    // cout <<n ;
    fl (i,0,n)
    {

        if (str[i] == ' ')
        {
            // cout <<st ;
            v.pb (st) ;
            st = "" ;
            i++ ;
        }
        st = st  + str[i] ;
        if (i == n-1)
          v.pb(st) ;
    }
    reverse (v.begin() , v.end());
    fl (i,0,v.size())
    {
        cout <<v[i] ;
    }
    // cout <<v[1] ;
cout<<endl ;
return 0 ;
}