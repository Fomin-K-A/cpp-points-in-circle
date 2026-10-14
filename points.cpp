#include <iostream>
using namespace std;

int main() {
  unsigned long long R;
  cin >> R;

  unsigned long long RR = R * R;
  unsigned long long x = R - 1;
  unsigned long long count = 0;

  for (unsigned long long y = 1; y < R; ++y) {
    unsigned long long YY = y * y;

    while (x * x + YY > RR) {
      --x;
    }

    count += x;
  }

  cout << count * 4 + R * 4 + 1 << '\n';
}