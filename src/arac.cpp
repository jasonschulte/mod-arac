/*
 * Copyright (C) 2016+ AzerothCore <www.azerothcore.org>, released under GNU AGPL v3 license: https://github.com/azerothcore/azerothcore-wotlk/blob/master/LICENSE-AGPL3
 */

#include "ScriptMgr.h"
#include "Player.h"
#include "Config.h"
#include "Chat.h"

// Add player scripts
class ARAC : public PlayerScript
{
public:
    ARAC() : PlayerScript("ARAC") { }

};

// Add all scripts in one
void AddARAC()
{
    new ARAC();
}