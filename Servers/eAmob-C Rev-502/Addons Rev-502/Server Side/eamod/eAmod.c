//  __________________________________________________________________________
// /                                                                          \
// |                           _                                              |
// |                          / \                         _                   |
// |                  ___    / _ \   _ __ ___   ____  ___| |                  |
// |                 / _ \  / /_\ \ | '_ ` _ \./  _ \/  _  |                  |
// |                |  __/ /  ___  \| | | | | |  (_) ) (_) |                  |
// |                 \___|/__/   \__\_| |_| |_|\____/\_____/                  |
// |                                                                          |
// |                              eAmod Script                                |
// |                                                                          |
// |--------------------------------------------------------------------------|
// |                       eAmod - eAthena Modifications                      |
// |                           Feature list eAmod-A                           |
// |--------------------------------------------------------------------------|
// | Copyright (c) Athena Dev Teams - Licensed under GNU GPL                  |
// |--------------------------------------------------------------------------|
// | Copyright (c) eAmod Dev Teams - Licensed under GNU GPL                   |
// |--------------------------------------------------------------------------|
// | For more information, see LICENCE in the main folder                     |
// |--------------------------------------------------------------------------|
// | Before you start using your eAmod                                        |
// |--------------------------------------------------------------------------|
// | Declare  your license ID to not be banned from eAmod                     |
// | Services in the field eAmod License, and recompile it                    |
// | 12 Letters + The acronym of your country + Purchase ID +                 |
// | The acronym of your country = Your eAmod License ID                      |
// | You can found this ID in the mail of your purchase                       |
// \__________________________________________________________________________/

#include "../src/common/cbasetypes.h"
#include "../src/common/core.h"
#include "../src/common/db.h"
#include "../src/common/lock.h"
#include "../src/common/malloc.h"
#include "../src/common/mapindex.h"
#include "../src/common/mmo.h"
#include "../src/common/showmsg.h"
#include "../src/common/socket.h"
#include "../src/common/strlib.h"
#include "../src/common/timer.h"
#include "../src/common/utils.h"
#include "../src/common/version.h"
#include "../src/char/inter.h"
#include "../src/char/int_guild.h"
#include "../src/char/int_homun.h"
#include "../src/char/int_pet.h"
#include "../src/char/int_party.h"
#include "../src/char/int_storage.h"
#include "../src/char/int_status.h"
#include "../src/char/char.h"

#include <sys/types.h>
#include <time.h>
#include <signal.h>
#include <string.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

// Example:
// #define eAmod_License: AAAAAAAAAAAAKR52-KR
// You can found this License ID in the mail of your purchase

#define eAmod_License: 

// Example:
// #define eAmod_License: 4141414141414141414141414B5235322D4B52	
// You can found this License ID in the mail of your purchase

#define eAmod_Hash: 