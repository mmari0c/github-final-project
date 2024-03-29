#include <iostream>

using namespace std;

int main () {

  int p;
  int i;
  int t;

  cout << "Enter the principlal: ";
  cin >> p;

  cout << "Enter the rate of interest per year: ";
  cin >> i;

  cout << "Enter the time period in years: ";
  cin >> t;

  cout << "The simple interest is: " << (p * i * t) / 100 << endl;

  retrun 0;

}
