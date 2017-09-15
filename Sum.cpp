#include <iostream>
using namespace std;
int main ()
{
int x;
int y;
cout << "Enter 2 integers of whom you would like to get the sum of al the numbers in between" << "\n";
cout << "Enter the first integer" << "\n";
cin >> x;
cout <<"Enter the second integer" << "\n";
cin >> y;
int sum;
if (x<y) {
  sum=((((y*(y+1))/2)-((x*(x+1))/2))+x);
cout << "The sum for the 2 numbers is " << sum << "\n";}
else if (x>y) {
  sum=(((((x)*(x+1))/2)-(((y)*(y+1))/2))+y);
cout << "The sum for the 2 numbers is " << sum << "\n";

}

return 0;
}
