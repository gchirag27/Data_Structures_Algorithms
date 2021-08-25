/*
Step 1 − If the element is the first one, it is already sorted.
Step 2 – Move to next element
Step 3 − Compare the current element with all elements in the sorted array
Step 4 – If the element in the sorted array is smaller than the current element, iterate to the next element. 
Otherwise, shift all the greater elements in the array by one position towards right
Step 5 − Insert the value at the correct position
Step 6 − Repeat until the complete array is sorted
Time Complexity:
Best        Average     Worst    
Ω(n)	    θ(n^2)	    O(n^2)	 
*/
#include <bits/stdc++.h>
using namespace std;

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
	for(int j=1;j<n;j++)
	{
		int temp=a[j];
		int k=j-1;
		while(k>=0 && temp<=a[k])
		{
			a[k+1]=a[k];
			k-=1;
		}
		a[k+1]=temp;
	}
	cout<<"\nSorted array:\n";
	for(int i=0;i<n;i++)
	{
		cout <<a[i]<<" ";
	}
}