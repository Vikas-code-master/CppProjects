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

   vector<int> findAnagrams(string s, string p) {
        // ios_base::sync_with_stdio(false);
        // cin.tie(NULL);
        
        vector<int> ans;
        vector<int> hash(26,0);
        vector<int> phash(26,0);
        int window = p.size();
        int len = s.size();
        if(len<window)
            return ans;
        int left = 0,right = 0;
        while(right<window)
        {
            phash[p[right]-'a'] +=1;
            hash[s[right++]-'a'] +=1;
            // right++ ;
        }
        right -=1;
        while(right<len)
        {
            if(phash == hash)
                ans.push_back(left);
            right+=1;
            if(right!=len)
                hash[s[right]-'a'] +=1;
            hash[s[left]-'a'] -=1;
            left+=1;
        }
      fl (i,0,ans.size())
      cout<<ans[i]<<" ";
      return ans ;
   
    }
int main()
{
string s = "bcadeabcbcabbcdbbac" ;
string p = "acb" ;
findAnagrams (s,p) ;
cout<<endl ;
return 0 ;
}