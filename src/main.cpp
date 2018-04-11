
// testso.cpp

/*****************************************************************************
 * Includes
 ****************************************************************************/

#include <iostream>

#include "../include/sbw/agent_plugin.hpp"
#include "../include/sbw/plugin_manager.hpp"

#include "../include/sbw/third_party.hpp"

/*****************************************************************************
 * Main
 ****************************************************************************/

int main(int argc, char **argv) {
  // in real usage, you'd have an external mechanism feed strings
  // to the loading program (e.g. command line arguments, ...) so
  // that you don't have to recompile the loading program
  const std::string plugin_name = "libagents.so";

  std::vector<std::string> paths = third_party::getPaths();
  std::cerr << "Paths at start:" << std::endl;
  for (auto& path : paths) {
    std::cerr << "    path: " << path << std::endl;
  }

  third_party::addPath("hello");
  paths = third_party::getPaths();
  std::cerr << "Paths after add one:" << std::endl;
  for (auto& path : paths) {
    std::cerr << "    path: " << path << std::endl;
  }

  sbw::PluginManager<sbw::AgentPlugin> plugin_manager;
  sbw::AgentPlugin* agent_plugin = plugin_manager.findPlugin(plugin_name);
  std::cerr << "Agent Plugin has this to say: " << agent_plugin->getSayHelloString() << std::endl;

  return 0;
}
