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
 
void merging (int arr[] ,int l,int m, int r)
{
    int n1 = m+1-l ;
    int n2 = r-m ;
    int a[n1] , b[n2] ;
    fl (i,0,n1)
       a[i] = arr[l+i] ;
    fl (i,0 , n2)
       b[i] = arr[m+1+i] ;
    
    int i = 0,j= 0 ,k= l;
    while (i<n1 && j<n2)
    {
        if (a[i]<b[j])
        {
            arr[k] = a[i] ;
            i++ ; k++ ;
        }
        else
        {
            arr[k]=b[j];
            k++ ; j++ ;
        }
    }
    while (i<n1)
    {
         arr[k] = a[i] ;
            i++ ; k++ ;
    }
    while (j<n2)
    {
         arr[k] = b[j] ;
         j++ ; k++ ;
    }
    // fl (i,0,n+m)
    //   cout <<arr[i]<<" " ;
}
void merge_sort (int arr[] , int l , int r)
{
    if (l<r)
    {
        int m = (l+r-1)/2 ;
        merge_sort(arr, l, m);
        merge_sort(arr , m+1 , r);
        merging (arr , l ,m , r);
    }
    else return;
}
void printArray(int arr[], int size) 
{ 
	for (int i = 0; i < size; i++) 
		cout << arr[i] << " "; 
	cout << endl; 
} 
int main() 
{ 
	int arr[] = {10, 7, 8,0, 9, 1, 5 ,2,18,1}; 
	int n = sizeof(arr) / sizeof(arr[0]); 
	merge_sort (arr, 0, n - 1); 
	cout << "Sorted array: \n"; 
	printArray(arr, n); 
	return 0; 
} 