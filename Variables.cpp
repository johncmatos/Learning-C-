#include <iostream>

using namespace std;

int main()
{
  int house1 = 960;
  int house2 = 500;
  int housetot;
  int compound = 2; 
  char ch;
  ch = 'y';
  housetot = house1 + house2; /* 1460 */
  housetot += 100;            /* 1560 */
  housetot++;                 /* 1561 */
  cout << housetot << endl;
  --housetot;                 /* 1560 */
  cout << housetot << endl;
  cout << housetot * compound << endl; /* 3120  */
  cout << housetot / 2 << endl; /* 780 */
  cout << ch + compound<< endl;
  housetot = '\0'; /* sets variable to null or empty */
  cout << housetot << endl;
  return 0;
}