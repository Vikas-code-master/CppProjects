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

void swap(int *x,int *y)
{int temp=*x;    *x=*y;    *y=temp;}

int partition(int A[],int l,int h)
{
    int pivot=A[l];
    int i=l,j=h;
do 
   {
       do{i++;}while(A[i]<=pivot);
        do{j--;}while(A[j]>pivot);

        if(i<j)
        swap(&A[i],&A[j]);  
    } while(i<j);

    swap(&A[l],&A[j]);
    return j;
}
        void QuickSort(int A[],int l,int h)
        {
            int j;
            if(l<h)  
          {       
               j=partition(A,l,h);   
                QuickSort(A,l,j); 
                QuickSort(A,j+1,h);   
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
	int arr[] = {10, 17, 8,2 ,9, 11, 5,3}; 
	int n = sizeof(arr) / sizeof(arr[0]); 
	QuickSort(arr, 0 , n); 
	cout << "Sorted array: \n"; 
	printArray(arr, n); 
	return 0; 
} 

// This code is contributed by rathbhupendra 
