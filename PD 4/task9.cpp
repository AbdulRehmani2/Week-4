#include <iostream>

using namespace std;

void invert(string);

main()
{
  string str;
  cout << "Enter : ";
  cin >> str;
  invert(str);
}

void invert(string str)
{
  if(str == "true")
  {
    cout << "false";
  }
  if(str == "false")
  {
    cout << "true";
  }
}