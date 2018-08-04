#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int> V = {2,5,3,2,1,6,9,6,7,1};
  sort(V.begin(), V.end());
  for(int i=0; i<=V.size(); i++)
  {
	cout << V[i] << endl;
  }
  return 0;
}
