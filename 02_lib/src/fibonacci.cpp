#include "fibonacci.h"

int Fibonacci(int i) {
  if (i == 0) {
    return 0;
  }
  int prev = 0;
  int cur = 1;
  i--;
  while (i > 0) {
    int tmp = prev + cur;
    prev = cur;
    cur = tmp;
    i--;
  }

  return cur;
}
