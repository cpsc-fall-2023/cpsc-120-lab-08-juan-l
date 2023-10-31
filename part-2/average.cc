// Juan Linares
// juanlinares821@csu.fullerton.edu
// @jlinares
// Partners: @jlinares

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  if (arguments.size() < 2) {
    std::cout << "error: you must supply at least one number\n";
    return 1;
  }

  int amount_num{0};
  bool first{true};
  double sum{0.0};
  for (std::string const& arguments : arguments) {
    if (first) {
      first = false;
      continue;
    }
    amount_num++;
    sum += std::stod(arguments);
  }

  double average{0.0};
  average = sum / amount_num;
  std::cout << "average = " << average << "\n";
  return 0;
}