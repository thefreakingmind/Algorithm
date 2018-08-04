#include <iostream>

using namespace std;

int GCD(int a, int b)
{
  if(b==0) return a;
  return GCD(b, a%b);
}

int main()
{
  int a=10;
  int b=20;
  int m = GCD(a,b);
  cout << m << endl;
  return 0;
}

