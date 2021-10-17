#include <iostream>

#include "example_cpp_lib1/foo.hpp"

int main() {
  example_cpp_lib1::Foo foo{"example-cpp-app"};
  (&foo)->printMsg();

  return 0;
}

