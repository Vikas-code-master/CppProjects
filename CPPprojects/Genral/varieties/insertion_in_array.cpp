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
 	int arr[] = {2,3,4,6,8,9}; 
	int n = sizeof(arr)/sizeof(arr[0]);
    // cout << arr[n];
    int a = 50 ;
    int j=-1 ;
    for (int i=n-1 ;i>=0 ; i--)
    {
         
        if (arr[i]< a )
        {
            j= i ;
             break ;

        }
        arr[i+1] = arr[i] ;
    }
    arr[j+1] = a ;
    fl (i,0,n+1)
        cout <<arr[i] ;
cout<<endl ;
return 0 ;
}