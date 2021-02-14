#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long int
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
int t ;
cin >> t ;
 while (t--) {
 ull a , b ;
 cin>>a>>b ;
if (a%b != 0 )
{
    cout << a <<endl ;
    break ;
}
else
{
    a = a/2 ;
    while (a%b==0)
    {
        a-- ;
    }
}
}
cout<<endl ;
return 0 ;
}