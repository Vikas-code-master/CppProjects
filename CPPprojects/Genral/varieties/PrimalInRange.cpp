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
int a = 4, b=20 ;
// cin>>a>>b ;
vc v;
// Note : if a > 2 
fl (i,a,b+1)
{
    bool flag = true ;
   fl(j,2,sqrt(i)+1)
   {
       if (i%j==0)
       {
        flag = false ;
        break;
       }
   }
   if (flag==true)
   v.pb(i) ;
}

fl (i,0,v.size())
cout<<v[i]<<" ";
 
cout<<endl ;
return 0 ;
}