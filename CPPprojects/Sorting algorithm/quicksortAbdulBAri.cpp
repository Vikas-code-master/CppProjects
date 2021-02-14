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

void swap(int* a, int* b) 
{ 
	int t = *a; 
	*a = *b; 
	*b = t; 
} 

int partition (int a[] , int l , int h)
{
    int pivot , i , j;
    pivot = a[l] ;
    i = l , j= h ;
    while (i<j)
    {
        do 
        {
            i++ ;
        } while (a[i]<= pivot) ;
        do
        {
            j-- ;
        } while (a[j]>pivot);
        if (i<j)
        swap (&a[i] , &a[j]) ;
    }  
    
     swap (&a[l],&a[j]) ;
    return j ;   
}
void quickSort (int a[] , int l , int h)
{
    int j ;
    if (l<h)
    {
        int j = partition (a, l, h) ;
        quickSort (a,l, j) ;
        quickSort (a,j+1 , h) ;
    }
}
void printArray(int arr[], int size) 
{ 
	int i; 
	for (i = 0; i < size; i++) 
		cout << arr[i] << " "; 
	cout << endl; 
} 

// Driver Code 
int main() 
{ 
	int arr[] = { 8,2 ,9 ,1}; 
	int n = sizeof(arr) / sizeof(arr[0]); 
	quickSort(arr, 0 , n); 
	cout << "Sorted array: \n"; 
	printArray(arr, n); 
	return 0; 
} 
