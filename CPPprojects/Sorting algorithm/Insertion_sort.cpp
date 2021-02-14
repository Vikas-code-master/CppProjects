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

void insertion_sort (int a[] , int n)
{
    for (int i = 1 ; i<n ; i++)
    {
        int j = i-1 ;
        int x = a[i] ;
        while (j>-1 && x < a[j])
        {
            a[j+1] = a[j] ;
            j-- ;
        }
        a[j+1] = x ;
    }
}
void printArray(int arr[], int size) 
{ 
	int i; 
	for (i=0; i < size; i++) 
		cout << arr[i] << " "; 
	cout << endl; 
} 

// Driver program to test above functions 
int main() 
{ 
	int arr[] = {7,3,6,22,81,11,9,1}; 
	int n = sizeof(arr)/sizeof(arr[0]); 
	insertion_sort(arr, n); 
	cout << "Sorted array: \n"; 
	printArray(arr, n); 
	return 0; 
} 