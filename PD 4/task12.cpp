#include <iostream>

using namespace std;

main()
{
  int noRRose;
  int noWRose;
  int noTulip;
  float pRRose = 2;
  float pWrose = 4.1;
  float pTulip = 2.5;
  float total;
  cout << "Enter the number of red roses : ";
  cin >> noRRose;
  cout << "Enter the number of white roses : ";
  cin >> noWRose;
  cout << "Enter the number of tulip : ";
  cin >> noTulip;
  total = noRRose*pRRose + noWRose*pWrose + noTulip*pTulip;
  if(total > 200)
  {
    cout << "The original price is : " << total << endl;
    total = total - total*0.2;
    cout << "The total price is : " << total;
  }
  if(total <= 200)
  {
    cout << "The total price is : " << total;
  }
}

