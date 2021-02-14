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
   int j ,k;
   int n = 1 ;
    for (int i =5 ; i>=0 ; i--)
    {
         j = 5;
        int k = i-1 ;
        while (k>=0)
        {
            cout <<" ";
            k-- ;
        }
        for (int m =1 ; m<=n ;m++)
             cout <<"*" ;
        n = n+2 ;   

        cout <<endl ;
    }

cout<<endl ;
return 0 ;
}