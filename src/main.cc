#include <iostream>
#include <vector>

extern void cstyle_list(); // cstyle.c

int main(int argc, char** argv)
{
  if (argc == 1) cstyle_list();
  std::vector<std::string> files(argv + 1, argc + argv);
  for (const auto& file: files) std::cout << file << std::endl;
  return 0;
}
