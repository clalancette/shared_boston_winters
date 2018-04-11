// This is a "third-party" library that will be linked both against the main
// program (the loader) and the shared object (agent).  Importantly, this
// library has some static initializers in it to tickle that code.

#include <string>
#include <vector>

std::vector<std::string> paths;

namespace third_party {

std::vector<std::string> getPaths()
{
  return paths;
}

void addPath(const std::string& newpath)
{
  paths.push_back(newpath);
}
}
