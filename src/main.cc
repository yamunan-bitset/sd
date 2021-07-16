#include <iostream>
#include <vector>

int main(int argc, char** argv)
{
  std::vector<std::string> files(argv+1,argc+argv);
  for (const auto& file: files) std::cout << file << std::endl;
  return 0;
}
