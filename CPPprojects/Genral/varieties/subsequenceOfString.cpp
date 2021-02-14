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
set <string> s ;
string temp = "" ;
void fun (string str ,int pos)
{
    // cout<<temp<<endl ;
    s.insert(temp) ;
    for (int i= pos ; i <str.length() ; i++)
    {
        temp.push_back (str[i]) ;
        fun (str , i + 1 ) ;
        temp.pop_back() ;
    }
return ;
}
int main()
{
    string str = "abb" ;
    int pos = 0 ;
    fun (str , pos) ;
    for (auto i : s)
      cout << i <<endl ;
return 0 ;
}