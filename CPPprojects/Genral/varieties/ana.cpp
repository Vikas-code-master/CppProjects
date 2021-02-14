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
void Anagrams (string s , string p )
{
    vector <int> shash (26,0);
    vector<int> phash(26,0) ;
    vector<int> ans ;
    int len = s.size();
    int win = p.size();
    int l=0 , r=0 ;
    if (win>len)
    return;
    for ( r=0 ; r<win ; r++)
    {
        phash [p[r]-'a'] +=1 ;
        shash [s[r]-'a'] +=1 ;
        
    }
//    cout<< r;
    r--;
    while (r < len)
    {
        if (phash == shash)
           ans.pb (l) ;
           r++ ;
        if (r!=len)
        shash[s[r]-'a'] += 1 ;
        shash[s[l]-'a'] -= 1 ;
        l++ ;
    }
    fl(i,0,ans.size())
    cout<<ans[i]<<" ";

}

int main()
{
string s = "cabcdebcabfbacd";
string p = "abcc" ;
Anagrams (s,p) ;
cout<<endl ;
return 0 ;
}