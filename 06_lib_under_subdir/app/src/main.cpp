#include <iostream>

#include "fibonacci.h"

int main(int argn, const char* argv[]) {
  if (argn == 2) {
    try {
      int n = std::stoi(argv[1]);
      int i = 0;
      while (i < n) {
        int fb = Fibonacci(i);
        std::cout << fb << " ";
        i++;
      }

      std::cout << std::endl;

      return 0;
    } catch (...) {
    }
  }

  std::cout << "usage: $ compute n" << std::endl;
  return 1;
}

