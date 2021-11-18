#include <iostream>

#include "fibonacci.h"

int main(int argn, const char* argv[]) {
  if (argn == 2) {
    try {
      int n = std::stoi(argv[1]);
      if (n >= 1) {
        int fb = Fibonacci(n - 1);
        std::cout << n << "th Fibonacci number is " << fb << std::endl;
        return 0;
      }
    } catch (...) {
    }
  }

  std::cout << "usage: $ compute n" << std::endl;
  return 1;
}

