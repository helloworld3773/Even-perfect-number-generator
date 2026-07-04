#include <iostream>
#include <cmath>
using namespace std;

int main () {
  unsigned long long x = 1;
  while (true) {
  if (x == 1 || (x % 2 == 0 && x != 2)) {
      cout << "the number " << x << " is not a prime number" << "\n";
  }
  else if (x == 2) {
      cout << "the number " << x << " is a prime number" << "\n";
  }
  else {
      bool p = 1;
for (unsigned long long y = 3; y <= sqrt(x); y = y + 2) {
    if (x % y == 0) {
cout << "the number " << x << " is not a prime number" << "\n";
p = 0;
break;
    }
}
if (p == 1) {
cout << "the number " << x << " is a prime number" << "\n";
}
}
x++;
}
}
