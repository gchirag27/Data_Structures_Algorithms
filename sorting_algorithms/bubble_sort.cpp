/*
Bubble sort is the simplest technique in which we compare every element with its adjacent element
and swap the elements if they are not in order. 
This way at the end of every iteration(called a pass),the heaviest element gets bubbled up at the end of the array.
Time Complexity:
Best        Average     Worst    
Ω(n)        θ(n^2)      O(n^2)
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n,temp;
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
   for(int i=0;i<n;i++) 
   {
      for(int j=i+1;j<n;j++)
      {
         if(a[j]<a[i]) 
         {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
         }
      }
   }
   cout<<"Sorted array:\n";
   for(int i = 0; i<5; i++) 
   {
      cout<<a[i]<<" ";
   }
   return 0;
}