#include "example_cpp_app/foo.hpp"

#include <iostream>

namespace example_cpp_app {

Foo::Foo(const std::string& msg_) :
    msg{msg_} {

}

void Foo::printMsg() {
  std::cout << msg << std::endl;
}

}
