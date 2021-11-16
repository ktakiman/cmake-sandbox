#include <iostream>

int main(int argn, const char* argv[]) {
  auto name = argn == 2 ? argv[1] : "unknown";
  std::cout << "Hello " << name << std::endl;
  return 0;
}
