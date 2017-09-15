#include <iostream>
using namespace std;
int main ()
{
int x;
cout << "Enter an integer value";
cin >> x;
int y;
cout << "Enter another value";
cin >> y;
cout << "The sum of these 2 numbers is " << x+y << "\n";
cout << "The difference is " << x-y << "\n";
cout << "The product is " << x*y << "\n";
cout << "The division is " << x/y << "\n";
cout << "The reciprocal is " << x%y << "\n";
return 0;
}
