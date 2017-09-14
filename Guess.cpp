#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
int main ()
{
srand(time(NULL));
int x,y;
x = rand();
x = x % 100;
x = x + 1;

do {
cout << "Guess a number between 0-100 " << '\n';
cin >> y;
  if (x<y) cout << "The number is lower than the one you guessed" << '\n';
  else if (x>y) cout << "The number is bigger than the one you guessed" << '\n';
}
while (x!=y);
cout << "You guessed right!" << '\n';
return 0;
}
