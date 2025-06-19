#ifndef MODULE_NO_RDF_H
#define MODULE_NO_RDF_H

#include "ScriptMgr.h"

class NoRdf : public PlayerScript
{
public:
    NoRdf() : PlayerScript("NoRdf", { PLAYERHOOK_CAN_JOIN_LFG }) {}
    bool OnPlayerCanJoinLfg(Player* /*player*/, uint8 /*roles*/, std::set<uint32>& /*dungeons*/, const std::string& /*comment*/);
};

#endif
