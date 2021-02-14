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

double myPow(double x, int n) {
        double ans = 1;
        bool negative = ( n < 0 );
        if( n < 0 ) 
            n = abs(n);
        
        while( n > 0 ){
            if( n % 2 != 0 )
                ans *= x;
            x*= x;
            n /= 2;
        }
        return ( !negative ? ans : double(1 / ans) );
    }
int main()
{ 
    int x , n ; 
    cin >> x>>n ;
    cout <<"power of " <<x<<"^"<<n <<" = "<< myPow (x , n) ;
cout <<endl ;
return 0 ;
}