#include <iostream>

using namespace std;
void BubbleSort(int arr[], int n)
{
  for(int i=0; i<n; i++)
  {
	for(int j=0; j<=n-1; j++)
	{
	  if(arr[j]>arr[j+1])
	  {
		swap(arr[j],arr[j+1]);
	  }
	}
  }
}
int main()
{
  int n = 5;
  int arr[5] = {1,4,5,3,2};
  BubbleSort(arr,n);
  for(int i=0; i<=5; i++)
  {
	cout << arr[i] << " ,  ";
  }
}


