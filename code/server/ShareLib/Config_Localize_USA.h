#ifdef LC_USA
//Update Remove Authentication on Server by BensseG 
//for more Information contact me on discord! 
//Please remind this my cause unexpected Bugs and/or behavoir please use with care!
//////////////////////////Update 20190820/////////////////////////////////////
//Update Remove X-Trap on Server/Client
//I have removed X-Trap from loading -- Complete Removal coming in a later Update
// Please notify me on any unusual behavoir @BensseG//////
////////////////////////////////////////////////////////////////////////////////////////

//#define JUNO_RENEWAL_MESSAGEBOX					// ���Ͽ�, �ű�ĳ���� �̵� �� ���� ���ٰ� ����ũ�� ����.

#define GIVE_ITEM_IN_CHANGE_JOB		// ������ ������ �����ϱ�

////// ���� �ʵ� ���� //////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////

#ifdef LC_USA
#define ITEM_NAME_FIELD         "a_name_usa"
#define NPC_NAME_FIELD          "a_name_usa"
#define ITEM_PRICE_FIELD        "a_price"
#define EVENT_ENABLE_FIELD      "a_enable_usa"
#define EVENT_EXTRA_FILED       "a_extra_usa"
#endif // LC_USA

////// IP �ڵ� ���� ���� ///////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////

#define IP_BLOCK_AUTO
#if defined (IP_BLOCK_AUTO )
#define IP_BLOCKNOKICK_AUTO     // ������ ����� �϶� ű���� �ʰ� �α׸� ����
#endif // #if defined (IP_BLOCK_AUTO )


#define OX_QUIZ_COUNTRY_CODE    9

#define DROP_MAKE_DOCUMENT
#define DURABILITY
#define PREMIUM_CHAR
#define ENABLE_SUBJOB							// ����

#define RECOMMEND_SERVER_POTION_INDEX   1393
#define RECOMMEND_SERVER_LEVEL          30
#define MAX_UPGRADE_PLUS    25          // ������ ���׷��̵� �ִ� �÷��� ��ġ
#define DISABLE_REFINE_SPECIAL_STONE    // ��� ���ü� ��ȯ �Ұ���

#define PARTY_QUEST_ITEM_BUG_			// ��Ƽ ����Ʈ ������ ������ ���� �ʴ� ����
#define HUNT_QUEST_COMPLETE_FOR_OTHER_PARTYMEMBER	//��Ƽ���� �� ����Ʈ ���ֱ�(�� ����ָ� ī��Ʈ �ǰ� ��. ������ ��Ƽ���� ������ ���� �־�� ���� �Ǿ���)

#define NEW_DOUBLE_GM_AUTO

#define DEFAULT_NAS_PERCENT     50      // ���� ���Ȯ�� ����
#define DEFAULT_NAS_GET_PERCENT 100     // ���� ���淮 ����
#define DEFAULT_EXP_PERCENT     100     // ����ġ ȹ�淮 ����
#define DEFAULT_SP_PERCENT      100     // sp ȹ�淮 ����
#define DEFAULT_PRO_PERCENT     80      // ���� ���� Ȯ�� ����
#define DEFAULT_PRO_GET_NUMBER  1       // ���� ���� ����

#define RAID_NPC_RAGE_SKILL             394     // ���̵� �� �г� ��ų �ε���
#define RAID_NPC_RAGE_SKILL_LEVEL       2       // ���̵� �� �г� ��ų ����
#define RAID_NPC_NOTICE_CELL_EXT        5
#define MAX_RARE_OPTION_SETTING         10      // ���� �ɼǴ� �ɼ� ���� ��
#define MAX_RARE_OPTION_ITEM            10      // �����۴� ���� �ɼ� ��
#define PULSE_MONSTER_RAID_MOVE     (14 * PULSE_REAL_MIN)   // ���� ���̵� �̵� �ð�

//Removed Bill Server Orig /BensseG


#define DOUBLE_PET_EXP
#define DOUBLE_ATTACK

#define EGEHA_ZONE_PAYMENT      500000	// ������ �����

#define KICK_PC_MULTI
#define SILENCE_PC_MULTI

#define DEFAULT_LIMIT_EXP           250


#define PULSE_GUILD_POINT_UPDATE        (5 * 60)    // ��� ��ų�� ����ġ ���� ����

#define CHAT_BLOCK_USA
#define CHAT_BLOCK_USA_NEXT_TIME	5	// ���� ��ĥ�� �ִ� �ð�
#define CHAT_BLOCK_USA_LEVEL		1 // ��ġ�� ������ ����

#define MONSTER_AI                      // ���� A.I
#define NO_CHATTING                     // ä�� ����
#define EXTREME_CUBE                    // �ͽ�Ʈ�� ť��



#define HANARO_EVENT                    // �ϳ��� �̺�Ʈ 2009   - 3ä�η� �����ؾ� ��  ...�̱��� �ణ ����


#define PET_TURNTO_NPC_ITEM

////////////////////  Ȯ����  ////////////////////
////////////////////  Ȯ����  ////////////////////
#define NO_PERIOD_COMPOSITE				// ���վ����� �� �Ⱓ�� ���� ������ �߰�
#define DISCONNECT_HACK_CHARACTER		// �� ���α׷� ���� ����
#define _BATTLEGROUP_QUEST_BUG_PIX		// [2010-05-19] ������ ����Ʈ ���� ����(�ֿ���) : ������ �� ��Ÿ ģ ĳ���͸� ����Ʈ�� ������ ī��Ʈ �Ǵ� ���� ����.
#define LACARETTE_SYSTEM				// ��ī�� �ý��� (������2)
#define DUNGEON_TIME_SAVEFILE	".dungeontime"	// ����Ÿ�� ���� ���� ����.
#define DEV_SYSTEM_SKILL_EXTEND_2ND			// ĳ���� ��ų Ȯ�� 2��
#define CONTINENT_PARTY_RECALL				// ����� ��Ƽ���� ������ �߰�


#define RAIDBOX_DROP_COUNT_MODIFY		// ����� ���� ��� ��Ģ ����

// ---------------- Update 1104 -----------------------
#ifdef EXTREME_CUBE
#define EXTREME_CUBE_VER2									// ť��2
#endif // EXTREME_CUBE
#define SYSTEM_MONSTER_MERCENARY_CARD_EX
#define SYSTEM_MONSTER_MERCENARY_CARD_LOW_LEVEL_SUPPORT


// --------------- BugFix -------------------
#define BUGFIX_USE_SKILL_TO_NPC

#define BUGFIX_GUILD_SKILL_COOLTIME		// ��彺ų ��Ÿ�� ���ҿɼ� ����ȵǰ� ����
#define BUGFIX_WARCASTLE_REGEN									// ��Ȱ���� �����ð� ����

#define SYSTEM_TREASURE_MAP										// ���� ã�� �ý���
#define SYSTEM_TREASURE_MAP_GAMIGO
#define GM_TREASURE_MAP_SAVE_FILE		 ".treasuremapsave"
#define SYSTEM_TREASURE_MAP_LINKZONE_DROP						// ���� ���� ���� ���

// test server : [110621], live server : [110622]
#define BUGFIX_ITEMSELL_HACKUSER

#define REFORM_PK_PENALTY_201108

#define DEV_GUILD_MARK		// ��� ��ũ
#define DEV_GUILD_STASH		// ��� â��

#define NOTICE_SYSTEM           // ���� �ý���

#define GUILD_REMOTE_INVITE		// ��� ���� ���� �ý���

//#define BCRYPT_USA // �̱� BCRPYT ����
//////// UPDATE 121Q-1 (12�� 4�� 26�� ) ////////
#define EX_ROGUE	// EX �α� ĳ����
#define ASSIST_DECREASE_SKILL_MP
#define ASSIST_REDUCE_SKILL
#define SKILL_TYPE_NO_COOL_TIME

#define PASSWORD_ENCRYPT_SHA256

#define EX_MAGE
////// ��� ���� ���� ////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////

#define     GM_LEVEL_ECHO               1
#define     GM_LEVEL_GO_ZONE            3
#define     GM_LEVEL_GOTO               3
#define     GM_LEVEL_ITEMDROP           10
#define     GM_LEVEL_COUNT_PC           10
#define     GM_LEVEL_LOOPCOUNT          10
#define     GM_LEVEL_IMMORTAL           3
#define     GM_LEVEL_SHUTDOWN           10
#define     GM_LEVEL_REBOOT             10
#define     GM_LEVEL_COUNT_NPC          9
#define     GM_LEVEL_VISIBLE            3
#define     GM_LEVEL_GO_PC              3
#define     GM_LEVEL_GO_NPC             3
#define     GM_LEVEL_LEVELUP            8
#define     GM_LEVEL_KICK               5
#define     GM_LEVEL_COMON              8
#define     GM_LEVEL_SUMMON             9
#define     GM_LEVEL_SILENCE            5
#define     GM_LEVEL_WHERE_AM_I         3
#define     GM_LEVEL_QUEST_COMPLETE     7
#define     GM_LEVEL_STATPOINT          7
#define     GM_LEVEL_SKILLPOINT         7
#define     GM_LEVEL_SET_REGENSEC       8
#define     GM_LEVEL_NPC_REGEN          8
#define     GM_LEVEL_KILL_NPC           3
#define     GM_LEVEL_EXPUP              8
#define     GM_LEVEL_BLOODPOINT         8
#define     GM_LEVEL_ENDGAME            10
#define     GM_LEVEL_OBSERVE            9
#define     GM_LEVEL_CHATMONITOR        5
#define     GM_LEVEL_DOUBLE_EVENT       9
#define     GM_LEVEL_LATTO_EVENT        9
#define     GM_LEVEL_DOUBLE_EXP_EVENT   9
#define     GM_LEVEL_NEWYEAR_EVENT      9
#define     GM_LEVEL_VALENTINE_EVENT    9
#define     GM_LEVEL_WHITEDAY_EVENT     9
#define     GM_LEVEL_LETTER_EVENT       9
#define     GM_LEVEL_RELOAD_GMIP        10
#define     GM_LEVEL_SPEEDUP            3
#define     GM_LEVEL_FAMEUP             9
#define     GM_LEVEL_EVENT              9
#define     GM_LEVEL_PD4                9
#define     GM_LEVEL_KICK_ID            5
#define     GM_LEVEL_RESURRECTION       9
#define     GM_LEVEL_RECOMMEND          9
#define     GM_LEVEL_SETLIMIT           9
#define     GM_LEVEL_DISGUISE           9
#define     GM_LEVEL_LOGINSERVER        9
#define     GM_LEVEL_CALTIME            10
#define     GM_LEVEL_KICK_CHAR_INDEX    5
#define     GM_LEVEL_EVENTSHOW          5
#define     GM_LEVEL_EVENTSETTING       10
#define     GM_LEVEL_CHANCE_EVENT       9
#define     GM_LEVEL_GMCHATMONITOR      10
#define     GM_LEVEL_DOUBLE_ITEM_EVENT  9
#define     GM_LEVEL_DOUBLE_PET_EXP_EVENT   9
#define     GM_LEVEL_DOUBLE_ATTACK_EVENT    9
#define     GM_LEVEL_EVENT_DROPITEM     10
#define     GM_LEVEL_KICK_PC_MULRI      8
#define     GM_LEVEL_SILENCE_PC_MULTI   8
#define     GM_LEVEL_SET_EXPLIMIT       10
#define     GM_LEVEL_DOUBLE_EVENT_AUTO  10
#define     GM_LEVEL_UPGRADE_EVENT      10
#define     GM_LEVEL_KICK_GUILDMEMBER   10
#define     GM_LEVEL_APPLY_SKILL        10
#define		GM_LEVEL_STATE_FLAG			10
#define		GM_LEVEL_DATE				1
#define		GM_LEVEL_PLAY_TRIGGER		10
#define		GM_LEVEL_BATTLE_START		10
#define		GM_LEVEL_BATTLE_STOP		10
#define		GM_LEVEL_RESET_RAID			10
#define		GM_LEVEL_SET_SEAL_EXP		10
#define		GM_LEVEL_END_SUBHELPER		10
#define		GM_LEVEL_LCBALL_RESET		10
#define		GM_LEVEL_ECHONPC			9
#define		GM_LEVEL_DT_EXPSET			10
#define     GM_LEVEL_ITEMGET			10
#define		GM_LEVEL_ITEMGETRANGE		10
#define		GM_LEVEL_JOBRESET			10
#define		GM_LEVEL_JOBCHANGE			10

#endif // LC_USA
