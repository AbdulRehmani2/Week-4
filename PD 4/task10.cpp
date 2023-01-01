#include <iostream>

using namespace std;

void discount(float, string);

main()
{
  string country;
  float ticket;
  while(true)
  {
    cout << "Enter the country name : ";
    cin >> country;
    cout << "Enter the ticket price : ";
    cin >> ticket;
    discount(ticket, country);
  }
}

void discount(float ticket, string country)
{
  if(country == "Pakistan")
  {
    ticket = ticket - ticket*0.05;
    cout << "The total price is : " << ticket << endl;
  }
  if(country == "Ireland")
  {
    ticket = ticket - ticket*0.1;
    cout << "The total price is : " << ticket << endl;
  }
  if(country == "India")
  {
    ticket = ticket - ticket*0.2;
    cout << "The total price is : " << ticket << endl;
  }
  if(country == "England")
  {
    ticket = ticket - ticket*0.3;
    cout << "The total price is : " << ticket << endl;
  }
  if(country == "Canada")
  {
    ticket = ticket - ticket*0.45;
    cout << "The total price is : " << ticket << endl;
  }
}
