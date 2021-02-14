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
int t ;
cin >> t ;
 while (t--) {
int n ;
cin>>n ;
int a[n];
fl(i,0,n)
cin>>a[i];
bool asd =true ;
int n1 = 0 , n2=0 ;
sort (a , a + n) ;
vc v ;
fl (i,0,n)
{
    v.pb([i]);
    if (a[i]<0)
        n1 ++ ;
    else n2++ ;
}
int j= n-1 ;
int sum = 1;
int k = 0;
int i = 0  ;
while (k >2)
{
    if (v[i]v[i+1] < v[j]*v[j-1])
        sum  = sum * v[j]*v[j-1] ;
    else
        sum = sum * v[i] * v[i+1];
        v.pop_bac
    // i = i+2 ;
    // j = j-2 ;
    // k++ ;
}
cout << sum ;
}
cout<<endl ;
return 0 ;
}