#include <iostream>
#include <string>

using namespace std;

int main()
{
  string s;
  cout << "Enter Your Name" << endl;
  getline(cin, s);
  sort(s.rbegin(), s.rend());
  cout << "Your New Name Sorted by Wizard" << endl;
  cout << s << endl;
}
