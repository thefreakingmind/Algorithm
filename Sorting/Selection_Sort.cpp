//Selection_Sort
//Psudo_Code
//
//
//Logic
//
//
//SelectionSort(A,n)
//	for i=0 -> n-2
//{
//	iMin = i
//	for j = i+1 to n-1
//	{
//		if (A[j] < A[iMin]
//			iMin <- j
//			}
//		int Temp  <- A[i]
//		A[i] <- A[iMin]
//		A[iMin] <- temp
//		}

#include <bits/stdc++.h>

using namespace std;

int SelectionSort(int A[], int n)
{
  for(int i=0; i<n-1; i++)
  {
	int Minimum = i;
	{
	  for (int j=i+1; j<=n; j++)
	  {
		if(A[j]<A[Minimum])
		{
		  Minimum = j;
		}
	  }
	}
	swap(A[Minimum],A[i]);
  }
}

//Driver Program
int main()
{
  int A[5] = {1,3,4,5,2};
  SelectionSort(A,5);
  for (int i=0; i<=5; i++)
  {
	cout << A[i] << " ";
  }
  
}

