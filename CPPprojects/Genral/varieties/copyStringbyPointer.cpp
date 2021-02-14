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

char* copy_string (char s1[])
{
  char *s2 , *p1 , *p2 ;
  s2 = new char[20] ;
  p1 = s1 ;
  p2 = s2 ;
  while (*p1 !=0)
  {
    *p2 = *p1 ;
    p1++ ;
    p2++ ;
  }
*p2 = '\0' ;
return s2 ;

}
int main()
{
char s1[20] = "vikas kumar gupta" ;
char*s2 ;
s2 = copy_string(s1) ;
cout << s2 ;

cout<<endl ;
return 0 ;
}