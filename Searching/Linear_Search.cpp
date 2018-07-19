#include<iostream>

using namespace std;

int BinarySearch(int arr[], int n, int x)
{
  for (int i=0; i<n; i++)
  {
	if(arr[i] == x)
	{
	  return i;
	}
  }
  return -1;
}

int main()
{
  int n = 5;
  int arr[5] = {1,2,3,4,5};
  int x = 5;
  int j = BinarySearch(arr, n, x);
  cout << j << endl;

}

