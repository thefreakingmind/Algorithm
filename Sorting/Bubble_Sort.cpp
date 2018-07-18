//Bubble Sort
//
//Pseudo Code 
//
//Array[] = {2,3,4,1,5}
//


#include <bits/stdc++.h>

using namespace std;

int BubbleSort(int A[], int n)
{
  for(int k=0; k<n-1; k++)
  {
	for(int i; i<n-k-1; i++)
	{
	  if(A[i]>A[i+1])
	  {
		swap(A[i],A[i+1]);
	  }
	}
  }
}
		  

int main()
{
  int A[5] = {1,3,4,2,5};
  BubbleSort(A,5);
  for(int i=0; i<5; i++)
  {
	cout << A[i] << " ";
  }
}

