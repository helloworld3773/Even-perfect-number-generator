#include <iostream>
#include <cmath>
using namespace std;

int main () {
  double x = 1.000;
double y = 1.000;
if (fmod(x,y) != 0) {
y = y + 1;
  }
else {
cout << "the number " << x << " is not a prime number";
  }
}
