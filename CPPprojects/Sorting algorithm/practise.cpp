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

void fun (int a[] , int n)
{
    map<int,int> m ;
    map<int,vector<int>> m1 ;
    vc v ;
    vc v1 ;
    vc v2;
    vc v ;
    fl (i,0,n)
    {
        if (m.find(a[i]) == m.end())
           {
               v.pb(a[i]) ;
                m[a[i]] = 1 ;
           }
        else 
            m[a[i]] += 1 ;
    }
    fl (i,0,v.size())
    {
        v1.pb(m[v[i]]) ;
    }
    fl (i,0,v.size())
    {
        vc v3 ;
        if (m1.find(v1[i]) == m1.end())
        m1[v1[i]] = v3 ;
        else
        {
            m1[v1[i]] = v
        }
        
    }

}
int main()
{
int arr[] = {10, 17, 8,2 ,9, 11, 5,3}; 
	int n = sizeof(arr) / sizeof(arr[0]); 
    cout <<arr[n+1];
cout<<endl ;
return 0 ;
}