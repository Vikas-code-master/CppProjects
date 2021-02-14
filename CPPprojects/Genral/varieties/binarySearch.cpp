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
    int a[] = {1,3,5,7,9,10} ;
    int n = sizeof (a)/sizeof (a[0]) ;
    int k = 5;
    
    int mid  , sum = 0 , l = 0 , r = n ;
    bool asd = true ;
    fl (i,0,n)
    {
        mid = (l+r) / 2 ;
        if (a[mid] == k)
        {
         cout<< "yes" ;
         asd = false ;
         break;
        }   
        if (a[mid]>k)
            r = mid ;
        else
            l = mid ;
    }
    if (asd == true )
     cout<< "No";
    cout<<endl ;
    return 0 ;
}