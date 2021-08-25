/*
QuickSort is a divide & conquer algorithm. QuickSort algorithm partitions the complete array around the pivot element. 
Then the array is divided in two parts from the pivot element (elements less than pivot & elements greater than pivot) and
both the arrays are recursively sorted using Quicksort algorithm.
Time Complexity:
Best        Average     Worst    
Ω(n log(n))	θ(n log(n))	O(n^2)
*/
#include <bits/stdc++.h>
using namespace std;

void swap(int* a,int* b)
{
	int temp=*a;
   	*a=*b;
   	*b=temp;
}
// partition the array using last element as pivot
int partition(int a[], int low, int high)
{
   	int i=low-1,pivot=a[high];
   	for(int j=low;j<=high-1;j++)
  	{
      	//if current element is smaller than pivot, increment the low element, swap elements at i and j
      	if (a[j]<=pivot)
      	{
        	i++;
        	swap(&a[i],&a[j]);
      	}
    }
	swap(&a[i + 1],&a[high]);
	return (i+1);
}
// partition the array using last element as pivot

//quicksort algorithm
void quickSort(int a[], int low, int high)
{
	int pivot;
	if (low<high)
    {
	    //partition the array 
	    int pivot=partition(a,low,high);
	    //sort the sub arrays independently
	    quickSort(a,low,pivot-1);
	    quickSort(a,pivot+1,high);
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
	quickSort(a,0,n-1);
	cout<<"Sorted array:\n";
	for(int i = 0; i<n; i++) 
   	{
   	   cout<<a[i]<<" ";
  	}
	return 0;
}