//Basic Fibonacci Numbers using Recurrsions
//Naive Approach
//Not a Good Solution

#include <iostream>

using namespace std;

int Fib(int x)
{
  if(x==0)
  {
	return 0;
  }
  if(x==1)
  {
	return 1;
  }
  else 
  {
	return Fib(x-1)+Fib(x-2);
  }
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int i;
  for(i=0; i<=10; i++)
  {
	cout << Fib(i) << "\n";
  }
}
