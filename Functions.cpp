#include <iostream>
using namespace std;

int sum (int x, int y)
{
  int g;
  g = x+y;
  return g;
}

int resta (int x, int y)
{
  int j;
  j = x-y;
  return j;
}

int multip (int x, int y)
{
  int v;
  v = x*y;
  return v;
}

int divi (int x, int y)
{
  int z;
  z = x/y;
  return z;
}

int resid (int x,int y)
{
  int k;
  k = x%y;
  return k;
}

int main()
{
int x,y;
cout << " Enter a number " << endl;
cin >> x;
cout << " Enter another number " << endl;
cin >> y;
cout << " The sum of the numbers is " << sum(x,y) << endl;
cout << " The difference between the numbers is " << resta(x,y) << endl;
cout << " The product of the numbers is " << multip(x,y) << endl;
cout << " The integer based division between the 2 numbers is " << divi(x,y) << endl;
cout << " The remainder of the division between the numbers is " << resid(x,y) << endl;

return 0;
}
