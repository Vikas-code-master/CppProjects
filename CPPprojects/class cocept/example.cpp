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
class enemy 
{
    int d , g ;
    public :
    virtual void attack () = 0 ;

};
class ninja : public enemy
{
    public:
    void attack ()
    {
        cout << "it's ninja attack" ;
    }
};
class monster : public enemy
{
    public:
    void attack ()
    {
        cout << "it's monster attack" ;
    }
};
class car 
{

    int c = 7  ;
    public:
    int a=5 , b ;
   public:
   car()
   {} 
    car (int size)
    {
        a = size ;
    }
   void price();
    friend void profit (car);
    void brand ()
    {
        cout <<"my car is ford" <<a<<"\n";
    }
};
void car::price()
{
    cout << "price is 20k" ;
}
void profit (car t)
{
    int y = t.c ;

    cout <<"my profit is "<< y ;
}

int main()
{
// car obj(6) ;
// obj.brand();
// obj.price();
// // car obj1 ;
// profit (obj) ;
// cout << obj.a ;
ninja n ;
monster m ;
// n.attack();
enemy *e1 = & n ;
enemy *e2 = & m ;
e2-> attack () ;
cout<<endl ;
return 0 ;
}