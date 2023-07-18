#include "hello.h"

#include "color.h"

namespace cpp_project_template {

void hello(const std::string& name) {
  std::string green_name = color::GreenString(name);
  std::cout << "Hello, " << green_name << "!" << std::endl;
}

}  // namespace cpp_project_template
