/**
 * @file /sbw/src/lib/agent_foo.cpp
 */
/*****************************************************************************
** Includes
*****************************************************************************/

#include <iostream>

#include "../../include/sbw/agent_foo.hpp"

#include "../../include/sbw/third_party.hpp"

/*****************************************************************************
** Namespaces
*****************************************************************************/

namespace sbw {

/*****************************************************************************
** Implementation
*****************************************************************************/

FooAgentPlugin::FooAgentPlugin() : AgentPlugin("Foo") {}
FooAgentPlugin::~FooAgentPlugin() {}

const char* FooAgentPlugin::getSayHelloString() const
{
  std::vector<std::string> paths = third_party::getPaths();
  std::cerr << "Paths in getSayHelloString:" << std::endl;
  for (auto& path : paths) {
    std::cerr << "    path: " << path << std::endl;
  }

  return "Hello, World from Foo!";
}

/*****************************************************************************
 ** Trailers
 *****************************************************************************/

} // namespace sbw
