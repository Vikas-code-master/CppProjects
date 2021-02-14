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
ll int n ;
cin>>n ;
ll res = 1 ;
int a = 1378 ;
int p = 10 ;
while (n>0)
{
    if (n%2)
    {
        res = ( res * a ) % p ;
        n-- ;
    }   
    else 
    {
        a = (a*a) % p ;
        n = n/2 ;
    }
}
cout<< res ;
cout<<endl;
return 0 ;
}