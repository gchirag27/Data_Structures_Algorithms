/*
Heapsort is a technique in which heap data structure (min-heap or max-heap) is used to sort the list.
We first construct a heap from the unsorted list and also use the heap to sort the array.
Time Complexity:
Best        Average     Worst    
Ω(n log(n)) θ(n log(n)) O(n log(n))  

*/
#include <bits/stdc++.h>
using namespace std;

void heapify(int a[], int n, int i) 
{
  // Find largest among root, left child and right child
  int largest=i;
  int left=2*i+1;
  int right=2*i+2;

  if(left<n && a[left]>a[largest])
  {
    largest=left;
  }
  if(right<n && a[right]>a[largest])
  {
    largest=right;
  }
  // Swap and continue heapifying if root is not largest
  if(largest!=i) 
  {
    swap(a[i],a[largest]);
    heapify(a,n,largest);
  }
}

void heapSort(int a[], int n) 
{
  // Build max heap
  for(int i = n / 2 - 1; i >= 0; i--)
  {
    heapify(a, n, i);
  }

  // Heap sort
  for(int i=n-1;i>=0;i--) 
  {
    swap(a[0],a[i]);
    // Heapify root element to get highest element at root again
    heapify(a,i,0);
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
  heapSort(a,n);
  cout<<"Sorted array:\n";
  for(int i = 0; i<n; i++) 
    {
       cout<<a[i]<<" ";
    }
  return 0;
}