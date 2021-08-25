/*
Selection Sort repeatedly searches for the smallest element from the unsorted part of the array and places it at the 
end of sorted part of the array. Selection sort first finds the smallest element in the unsorted array and swaps it with 
the first element. Then it finds the second smallest element in the unsorted array and swaps it with the second 
element, and the algorithm keeps doing this until the entire array is sorted.
Time Complexity:
Best        Average     Worst    
Ω(n^2)      θ(n^2)      O(n^2)
*/
#include <bits/stdc++.h>
using namespace std;

int findSmallest(int a[],int i,int n)
{
   int small,position;
   small=a[i];
   position=i;
   for(int j=i+1;j<n;j++)
   {
      if(a[j]<small)
      {
         small=a[j];
         position=j;
      }
   }
   return position;
}

int main ()
{
   int n,pos,temp;
   cout<<"Enter number of elements in array: \n";
   cin>>n;
   int a[n];
   cout<<"Enter "<<n<<" elements: \n";
   for(int i=0;i<n;i++)
   {
      cin>>a[i];
   }
   cout<<"\nInput array\n";
   for(int i=0;i<n;i++)
   {
      cout<<a[i]<<endl;
   }
   for(int i=0;i<n;i++)
   {
      pos=findSmallest(a,i,n);
      temp=a[i];
      a[i]=a[pos];
      a[pos]=temp;
   }
   cout<<"\n Sorted array:\n";
   for(int i=0;i<n;i++)
   {
      cout<<a[i]<<" ";;
   }
   return 0;
}
