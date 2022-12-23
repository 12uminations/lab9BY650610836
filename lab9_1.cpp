#include <iostream>
#include <string>
using namespace std;

int main()
{
  string s = "You have received Super Ultra Rare Unit!!!";
  string a="You have received 5 gems.";
  string b="You have received 1 gems.";
  string c="You have received 2000 coins.";
  string d= "You have received very KAK items.";
  char rank;
  cout << "Input your rank: ";
  cin >> rank;
  if(rank=='S')
    cout << s <<"\n"<< a <<"\n"<<  b <<"\n"<<  c <<"\n"<<  d <<"\n";
  else if(rank=='A')
    cout << a <<"\n"<<  b <<"\n"<<  c <<"\n"<<  d <<"\n";
  else if(rank=='B')
    cout <<  b <<"\n"<< c <<"\n"<<  d <<"\n";
  else if(rank=='C')
    cout <<  c <<"\n"<<  d <<"\n";
  else if(rank=='D')
    cout <<  d <<"\n";
  return 0;
}
