#ifndef COLOR_INCLUDE_COLOR_H_
#define COLOR_INCLUDE_COLOR_H_

#include <string>

namespace color {

std::string GreenString(const std::string& str) {
  return "\033[32m" + str + "\033[0m";
}

}  // namespace color

#endif  // COLOR_INCLUDE_COLOR_H_
