/**
 * @file /sbw/include/sbw/agent_plugin_base.hpp
 */
/*****************************************************************************
** Ifdefs
*****************************************************************************/

#ifndef sbw_AGENT_PLUGIN_BASE_HPP_
#define sbw_AGENT_PLUGIN_BASE_HPP_

/*****************************************************************************
** Includes
*****************************************************************************/

/*****************************************************************************
** Namespaces
*****************************************************************************/

namespace sbw {

/*****************************************************************************
** Interfaces
*****************************************************************************/

class AgentPluginBase {
public:
  AgentPluginBase();
  virtual ~AgentPluginBase();
  virtual void init() = 0;
  virtual void update() = 0;

private:
};

/*****************************************************************************
** Trailers
*****************************************************************************/

} // namespace sbw

#endif /* sbw_AGENT_PLUGIN_BASE_HPP_ */