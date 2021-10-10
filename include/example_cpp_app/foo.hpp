#ifndef APP_FOO_HPP
#define APP_FOO_HPP

#include <string>

namespace example_cpp_app {

class Foo {
public:
  // Constructor.
  Foo(const std::string& msg);
  // Print message.
  virtual void printMsg();

private:
  // Message to print.
  std::string msg;
};

}

#endif