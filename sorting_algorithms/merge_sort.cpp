/*
Merge Sort is one of the best examples of divide & conquer algorithm. In Merge sort, we divide the array recursively 
in two halves, until each sub-array contains a single element, and then we merge the sub-array in a way that it 
results into a sorted array. merge() function merges two sorted sub-arrays into one, wherein it assumes that 
array[l..n] and arr[n+1..r] are sorted.
Time Complexity:
Best        Average     Worst    
Ω(n log(n))	θ(n log(n))	O(n log(n))
*/
#include <bits/stdc++.h>
using namespace std;

// Merge two subarrays L and M into arr
void merge(int a[], int p, int q, int r) 
{
	// Create L ← A[p..q] and M ← A[q+1..r]
	int n1=q-p+1;
	int n2=r-q;
	int L[n1],M[n2];
	for (int i=0;i<n1;i++)
	{
		L[i]=a[p+i];
	}
	for (int j=0;j<n2;j++)
	{
		M[j] = a[q+1+j];
	}

	// Maintain current index of sub-arrays and main array
	int i, j, k;
	i = 0;
	j = 0;
	k = p;

	// Until we reach either end of either L or M, pick larger among
	// elements L and M and place them in the correct position at A[p..r]
	while (i<n1 && j<n2) 
	{
		if(L[i]<=M[j]) 
		{
		  a[k]=L[i];
		  i++;
		} 
		else 
		{
		  a[k]=M[j];
		  j++;
		}
		k++;
	}

	// When we run out of elements in either L or M,
	// pick up the remaining elements and put in A[p..r]
	while(i<n1)
	{
		a[k]=L[i];
		i++;
		k++;
	}

	while(j<n2) 
	{
		a[k]=M[j];
		j++;
		k++;
	}
}

// Divide the array into two subarrays, sort them and merge them
void mergeSort(int a[], int l, int r) 
{
	if (l<r) 
	{
		// m is the point where the array is divided into two subarrays
		int m=l+(r-l)/2;

		mergeSort(a,l,m);
		mergeSort(a,m+1,r);

		// Merge the sorted subarrays
		merge(a, l, m, r);
	}
}

int main() 
{
	int n;
	cout<<"Enter number of elements in array:\n";
	cin>>n;
	int a[n];
	cout<<"Enter "<<n<<" elements:\n";
	for(int i=0;i<n;i++)
	{
	  cin>>a[i];
	}
	cout<<"\nInput array:\n";
   	for(int i=0;i<n;i++)
   	{	
    	cout<<a[i]<<" ";
   	}
	mergeSort(a,0,n-1);
	cout<<"Sorted array:\n";
	for(int i = 0; i<n; i++) 
   	{
   	   cout<<a[i]<<" ";
  	}
	return 0;
}