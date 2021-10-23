#include <iostream>

#include "example_cpp_lib1/foo.hpp"
#include "example_cpp_app/githash.hpp"

namespace example_cpp_app {

int main() {
  example_cpp_lib1::Foo foo{"example-cpp-app@" + gitHash};
  (&foo)->printMsg();

  return 0;
}

}

int main() {
  example_cpp_app::main();
}

