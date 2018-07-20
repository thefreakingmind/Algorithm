#include <iostream>

using namespace std;

int Fib(int x)
{
  if(x==0)
  {
	return 0;
  }
  if (x==1)
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
  for (int i=0; i<=5; i++)
  {
	cout << Fib(i) << endl;
  }
  return 0;
}

