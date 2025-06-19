/*
 * Copyright (C) 2016+ AzerothCore <www.azerothcore.org>, released under GNU AGPL v3 license: https://github.com/azerothcore/azerothcore-wotlk/blob/master/LICENSE-AGPL3
 */

#include <iostream>
#include "NoRdf.h"
#include "ScriptMgr.h"
#include "Player.h"
#include "Config.h"

bool NoRdf::OnPlayerCanJoinLfg(Player* player, uint8 roles, std::set<uint32>& dungeons, const std::string& comment)
{
    bool enabled = sConfigMgr->GetOption<bool>("NoRdf.Enable", false);

    if (enabled) {
        player->GetSession()->SendAreaTriggerMessage(35410);
        return false;
    }
    else {
        return true;
    }
}

// Add all scripts in one
void AddNoRdfScripts()
{
    new NoRdf();
}
