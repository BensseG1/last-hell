#include "StdH.h"
#include "UIWindowDeclare.h"

#include <Common/Packet/ptype_inventory.h>
#include <Engine/Entities/Skill.h>

#include <Engine/Interface/UIInternalClasses.h>
#include <Engine/Interface/UIFactory.h>

#include <Engine/Interface/UIQuickSlot.h>

#include <Engine/Contents/Base/UIAuctionNew.h>
#include <Engine/Contents/Base/UICalendar.h>
#include <Engine/Contents/Base/UICalendarEventInfo.h>
#include <Engine/Contents/Base/UICharacterInfoNew.h>
#include <Engine/Contents/Base/UIDurability.h>
#include <Engine/Contents/Base/UIExpressSystem.h>
#include <Engine/Contents/Base/UIExpedition.h>
#include <Engine/Contents/Base/UIMsgBoxNumeric_only.h>
#include <Engine/Contents/Base/UIMysteriousBead.h>
#include <Engine/Contents/Base/UIMySyndicateInfo.h>
#include <Engine/Contents/Base/UINoticeNew.h>
#include <Engine/Contents/Base/UIPetStash.h>
#include <Engine/Contents/Base/UIPetStashSelectEffect.h>
#include <Engine/Contents/Base/UIQuestNew.h>
#include <Engine/Contents/Base/UIQuestAccept.h>
#include <Engine/Contents/Base/UIQuestBookNew.h>
#include <Engine/Contents/Base/UIQuestComplete.h>
#include <Engine/Contents/Base/UIQuestRestore.h>
#include <Engine/Contents/Base/UIQuestView.h>
#include <Engine/Contents/Base/UIRankingSystem.h>
#include <Engine/Contents/Base/UISkillNew.h>
#include <Engine/Contents/Base/UITrade.h>
#include <Engine/Contents/Base/ChattingUI.h>

#include <Engine/Contents/function/ItemCollectionUI.h>
#include <Engine/Contents/function/SimplePlayerInfoUI.h>
#include <Engine/Contents/function/SSkillLearnUI.h>

#include <Engine/Contents/Login/UICharacterCreateNew.h>
#include <Engine/Contents/Login/UICharacterSelect.h>
#include <Engine/Contents/Login/UIHardCoreWarning.h>
#include <Engine/Contents/Login/UILoginNew.h>
#include <Engine/Contents/Login/UIServerSelect.h>

#include <Engine/Contents/function/UIGps.h>
#include <Engine/Contents/function/SimplePlayerMenuUI.h>

#include <Engine/Contents/function/AffinityUI.h>
#include <Engine/Contents/function/AffinityInfoUI.h>
#include <Engine/Contents/function/BingoBoxUI.h>
#include <Engine/Interface/UICashShopEX.h>
#include <Engine/Contents/Base/UIChangeWeaponNew.h>
#include <Engine/Contents/Base/UIChangeEquipment.h>
#include <Engine/Interface/UIChildQuickSlot.h>
#include <Engine/Contents/function/InsectCollectUI.h>
#include <Engine/Contents/function/CompoundUI.h>
#include <Engine/Contents/function/ExChangeUI.h>
#include <Engine/Interface/UIFlowerTree.h>
#include <Engine/Interface/UIFortune.h>
#include <Engine/Interface/UIGamble.h>
#include <Engine/Interface/UIGuild.h>
#include <Engine/Interface/UIGuildBattle.h>
#include <Engine/Interface/UIGuildMark.h>
#include <Engine/Interface/UIGuildNotice.h>
#include <Engine/Contents/function/GuildStashUI.h>
#include <Engine/Interface/UIGuildWarPortal.h>
#include <Engine/Contents/function/GuildWarMixUI.h>
#include <Engine/Interface/UIHelp.h>
#include <Engine/Contents/function/HelperUI.h>
#include <Engine/Interface/UIHelpIcon.h>
#include <Engine/Interface/UIInitJob.h>
#include <Engine/Interface/UIInvenCashBagBox.h>
#include <Engine/Contents/function/ItemProductUI.h>
#include <Engine/Contents/function/ItemComposeUI.h>
#include <Engine/Interface/UIMap.h>
#include <Engine/Interface/UIMessenger.h>
#include <Engine/Interface/UIMinigame.h>
#include <Engine/Contents/function/TreasureMapUI.h>
#include <Engine/Interface/UIMix.h>
#include <Engine/Interface/UIMixNew.h>
#include <Engine/Interface/UIMonsterCombo.h>
#include <Engine/Interface/UIMonsterMercenary.h>
#include <Engine/Interface/UINickName.h>
#include <Engine/Interface/UINpcHelp.h>
#include <Engine/Interface/UINpcScroll.h>
#include <Engine/Interface/UIOption.h>
#include <Engine/Interface/UIOXQuizEvent.h>
#include <Engine/Contents/Base/UIPartyNew.h>
#include <Engine/Interface/UIPartyAuto.h>
#include <Engine/Contents/Base/PartyAutoUIReg.h>
#include <Engine/Contents/Base/PartyAutoUIRegBoss.h>
#include <Engine/Contents/Base/PartyAutoUIInviteList.h>
#include <Engine/Contents/Base/PartyAutoUIPartyList.h>
#include <Engine/Contents/function/PetFreeUI.h>
#include <Engine/Interface/UIPetInfo.h>
#include <Engine/Contents/function/PetItemMixUI.h>
#include <Engine/Contents/function/PetTargetUI.h>
#include <Engine/Contents/function/PetTrainingUI.h>
#include <Engine/Interface/UIPlayerInfo.h>
#include <Engine/Contents/function/UIPortalNew.h>
#include <Engine/Interface/UIProcessNPC.h>
#include <Engine/Interface/UIProduct.h>
#include <Engine/Contents/function/PremiumCharUI.h>
#include <Engine/Interface/UIRadar.h>
#include <Engine/Interface/UIRanking.h>
#include <Engine/Interface/UIRefine.h>
#include <Engine/Interface/UIReformSystem.h>
#include <Engine/Interface/UIResurrection.h>
#include <Engine/Interface/UISecurity.h>
#include <Engine/Interface/UISelectList.h>
#include <Engine/Interface/UISelectResource.h>
#include <Engine/Interface/UISelectWord.h>
#include <Engine/Interface/UIShop.h>
#include <Engine/Contents/function/ShopUI.h>
#include <Engine/Interface/UISiegeWarfare.h>
#include <Engine/Interface/UISiegeWarfareNew.h>
#include <Engine/Interface/UISimplePop.h>
#include <Engine/Contents/function/SingleBattleUI.h>
#include <Engine/Interface/UISocketSystem.h>
#include <Engine/Contents/function/SocketRemoveAllUI.h>
#include <Engine/Contents/function/SocketRemoveSingleUI.h>
#include <Engine/Contents/function/SocketCreateUI.h>
#include <Engine/Contents/function/SocketCombineUI.h>
#include <Engine/Contents/function/JewelComposUI.h>
#include <Engine/Contents/function/SummonUI.h>
#include <engine/Contents/function/SystemMenuUI.h>
#include <Engine/Contents/function/TalkUI.h>
#include <Engine/Contents/function/TargetInfoNewUI.h>
#include <Engine/Contents/function/TatooUI.h>
#include <Engine/Contents/function/TeleportUI.h>
#include <Engine/Contents/function/TargetInfoNewUI.h>
#include <Engine/Contents/function/WareHouseUI.h>
#include <Engine/Contents/function/WildPetInfoUI.h>
#include <Engine/Contents/function/NewsUI.h>
#include <Engine/Contents/function/News_Web_UI.h>
#include <Engine/Contents/function/HelpWebUI.h>
#include <Engine/Contents/function/CustomTitleUI.h>
#include <Engine/Contents/Base/PersonalshopUI.h>
#include <Engine/Contents/function/WildPetTargetUI.h>
#include <Engine/Contents/function/CubeRankingUI.h>
#include <Engine/Contents/function/ProductNPCUI.h>
#include <Engine/Contents/function/GuildStashUseRecord.h>
#include <Engine/Contents/function/Product2UI.h>
#include <Engine/Contents/function/Helper_GuardianInfoUI.h>
#include <Engine/Contents/function/Helper_Student.h>
#include <Engine/Contents/function/RoyalrumbleUI.h>
#include <Engine/Contents/Base/UIMapOption.h>
#include <Engine/Contents/function/GuildBattleMatchUI.h>
#include <Engine/Contents/function/GuildBattleMatchRegUI.h>
#include <Engine/Contents/function/GuildBattleMatchChallengeUI.h>

void CUIWindowDeclare::initUI()
{
	// Chatting
// 	m_apUIs[UI_CHATTING] = new CUIChatting;
// 	m_apUIs[UI_CHATTING]->Create( NULL, 0, 588, CHATTING_WIDTH, CHATTING_HEIGHT );

	// Player information
	m_apUIs[UI_PLAYERINFO] = new CUIPlayerInfo;
	m_apUIs[UI_PLAYERINFO]->Create( NULL, 0, 0, PLAYERINFO_WIDTH, PLAYERINFO_HEIGHT );

	// [12/6/2012 박훈] UIQuickslot 개편 
	m_apUIs[UI_QUICKSLOT2] = new CUIChildQuickSlot(UI_QUICKSLOT2);
	m_apUIs[UI_QUICKSLOT2]->Create( NULL,0 , 0, CHILD_QUICKSLOT_WIDTH, CHILD_QUICKSLOT_HEIGHT );

	m_apUIs[UI_QUICKSLOT3] = new CUIChildQuickSlot(UI_QUICKSLOT3);
	m_apUIs[UI_QUICKSLOT3]->Create( NULL,0 , 0, CHILD_QUICKSLOT_WIDTH, CHILD_QUICKSLOT_HEIGHT );

	// Quick slot
	m_apUIs[UI_QUICKSLOT] = new CUIQuickSlot;
	m_apUIs[UI_QUICKSLOT]->Create( NULL, 619, 724, QUICKSLOT_WIDTH, QUICKSLOT_HEIGHT );

	m_apUIs[UI_MAP_OPTION] = new CUIMapOption;
	LoadXML("UIMap_Option.xml", m_apUIs[UI_MAP_OPTION]);

	// Radar
	m_apUIs[UI_RADAR] = new CUIRadar;
	LoadXML("Radar.xml", m_apUIs[UI_RADAR]);

	// Target information
	m_apUIs[UI_TARGETINFO] = new CTargetInfoUI;
	LoadXML( "TargetInfo.xml", m_apUIs[UI_TARGETINFO]);

#ifdef USE_UIAD
	// Advertisement 060201	
	m_apUIs[UI_AD] = new CUIAD;
	m_apUIs[UI_AD]->Create( NULL, 0, 0, AD_WIDTH, AD_HEIGHT );
#endif

	// wooss 070330 -------------------------------------------------------------------->>
	// Help ICON
	m_apUIs[UI_HELP_ICON] = new CUIHelpIcon;
	m_apUIs[UI_HELP_ICON]->Create( NULL, 0, 0, HELPICON_WIDTH, HELPICON_HEIGHT );
	// ---------------------------------------------------------------------------------<<
	

	// Character information
	m_apUIs[UI_CHARACTERINFO] = new CUICharacterInfo;
	LoadXML( "CharecterInfoNew.xml", m_apUIs[UI_CHARACTERINFO] );

	m_apUIs[UI_MYSYNDICATE_INFO] = new CUIMySyndicateInfo;
	LoadXML( "MySyndicateInfo.xml", m_apUIs[UI_MYSYNDICATE_INFO] );
	//m_apUIs[UI_CHARACTERINFO]->Create( NULL, 0, 0, CHARINFO_WIDTH, CHARINFO_HEIGHT );

#ifdef	DURABILITY
	m_apUIs[UI_DURABILITY] = new CUIDurability;
	LoadXML( "Durability.xml", m_apUIs[UI_DURABILITY] );
#endif	//	DURABILITY

	// Exchange
	m_apUIs[UI_EXCHANGE] = new CExchangeUI;
	LoadXML("exchange.xml", m_apUIs[UI_EXCHANGE]);

	// Portal
	m_apUIs[UI_PORTAL] = new CUIPortal;
	LoadXML( "portal.xml", m_apUIs[UI_PORTAL] );

	// Shop
	m_apUIs[UI_SHOP] = new CUIShop;
	m_apUIs[UI_SHOP]->Create( NULL, 0, 0, SHOP_MAIN_WIDTH, SHOP_MAIN_HEIGHT );

	m_apUIs[UI_SHOP_UI] = new CShopUI;
	LoadXML( "Shop.xml", m_apUIs[UI_SHOP_UI] );

	// Pet Training
	m_apUIs[UI_PET_TRAINING] = new CPetTrainingUI;
	LoadXML( "PetTraining.xml", m_apUIs[UI_PET_TRAINING] );

	// Pet Info
	m_apUIs[UI_PETINFO] = new CUIPetInfo;
	m_apUIs[UI_PETINFO]->Create( NULL, 0, 0, PETINFO_WIDTH, PETINFO_HEIGHT );

	// Gamble
	m_apUIs[UI_GAMBLE] = new CUIGamble;
	m_apUIs[UI_GAMBLE]->Create( NULL, 0, 0, GAMBLE_MAIN_WIDTH, GAMBLE_MAIN_HEIGHT );

	// Personal Shop
	m_apUIs[UI_PERSONALSHOP] = new CUIPersonalshopNew;
	LoadXML("Personal shop.xml", m_apUIs[UI_PERSONALSHOP]);

	// Guild
	m_apUIs[UI_GUILD] = new CUIGuild;
	m_apUIs[UI_GUILD]->Create( NULL, 0, 0, GUILD_WIDTH, GUILD_HEIGHT );

	// Ranking
	m_apUIs[UI_RANKING] = new CUIRanking;
	m_apUIs[UI_RANKING]->Create( NULL, 0, 0, RANKING_WIDTH, RANKING_HEIGHT );

	// Pet Target Info
	m_apUIs[UI_PET_TARGETINFO] = new CPetTargetUI;
	LoadXML("PetTargetInfo.xml", m_apUIs[UI_PET_TARGETINFO]);

	// WildPet Target Info
	m_apUIs[UI_WILDPET_TARGETINFO] = new CWildPetTargetUI;
	LoadXML("WildpetTargetInfo.xml", m_apUIs[UI_WILDPET_TARGETINFO]);
	
	// Pet Tatoo
	m_apUIs[UI_TATOO] = new CTatooUI;
	LoadXML("Tatoo.xml", m_apUIs[UI_TATOO]);

	// Process NPC
	m_apUIs[UI_PROCESSNPC] = new CUIProcessNPC;
	LoadXML("ProcessNPC.xml", m_apUIs[UI_PROCESSNPC]);

	// Select Resource
	m_apUIs[UI_SELECTRESOURCE] = new CUISelectResource;
	m_apUIs[UI_SELECTRESOURCE]->Create( NULL, 200, 200, SELECTRESOURCE_WIDTH, SELECTRESOURCE_HEIGHT );

	// Single Battle
	m_apUIs[UI_SINGLE_BATTLE] = new CSingleBattleUI;
	LoadXML("SingleBattle.xml", m_apUIs[UI_SINGLE_BATTLE]);

	// Help
	m_apUIs[UI_HELP] = new CUIHelp;
	m_apUIs[UI_HELP]->Create( NULL, 0, 0, HELP_WIDTH, HELP_HEIGHT );

	// Help3
	m_apUIs[UI_HELP3] = new CUIHelp3;
	m_apUIs[UI_HELP3]->Create( NULL, 0, 0, HELP3_WIDTH, HELP3_HEIGHT );

	// Guild Battle // Date : 2005-03-17,   By Lee Ki-hwan
	m_apUIs[UI_GUILD_BATTLE] = new CUIGuildBattle;
	m_apUIs[UI_GUILD_BATTLE]->Create( NULL, 0, 0, GB_WIDTH, GB_HEIGHT );

	// WareHouse
	m_apUIs[UI_WARE_HOUSE] = new CWareHouseUI;
	LoadXML( "WareHouse.xml", m_apUIs[UI_WARE_HOUSE] );

	// SECURITY
	m_apUIs[UI_SECURITY] = new CUISecurity;
	m_apUIs[UI_SECURITY]->Create( NULL, 0, 0, SECURITY_CHANGEPW_WIDTH, SECURITY_CHANGEPW_HEIGHT );

	// System menu
	m_apUIs[UI_SYSTEMMENU] = new CSystemMenuUI;
	LoadXML( "SystemMenu.xml", m_apUIs[UI_SYSTEMMENU] );

	// GuildWar Portal
	m_apUIs[UI_GUILDWARPORTAL] = new CUIGuildWarPortal;
	m_apUIs[UI_GUILDWARPORTAL]->Create( NULL, 0, 0, GUILDWARPORTAL_WIDTH, GUILDWARPORTAL_HEIGHT );

	// Party
	m_apUIs[UI_PARTY] = new CUIParty;
	LoadXML( "partyInfo.xml", m_apUIs[UI_PARTY] );

	m_apUIs[UI_EXPEDITION] = new CUIExpManage;
	LoadXML( "expedition.xml", m_apUIs[UI_EXPEDITION] );

	m_apUIs[UI_EXPEDITION_VIEW] = new CUIViewDetail;
	LoadXML( "expeditionView.xml", m_apUIs[UI_EXPEDITION_VIEW] );

	// party auto matching
	m_apUIs[UI_PARTYAUTO] = new CUIPartyAuto;
	m_apUIs[UI_PARTYAUTO]->Create( NULL, 0, 0, P_AUTO_WIDTH, P_AUTO_HEIGHT );

	m_apUIs[UI_PARTYAUTO_REG] = new CUIPartyAutoReg;
	LoadXML("PartyAuto_Sign up.xml", m_apUIs[UI_PARTYAUTO_REG]);

	m_apUIs[UI_PARTYAUTO_REG_PB] = new CUIPartyAutoRegBoss;
	LoadXML("automatching.xml", m_apUIs[UI_PARTYAUTO_REG_PB]);

	m_apUIs[UI_PARTYAUTO_INVITE_LIST] = new CUIPartyAutoInviteList;
	LoadXML("Partyauto_Can invite list.xml", m_apUIs[UI_PARTYAUTO_INVITE_LIST]);

	m_apUIs[UI_PARTYAUTO_PARTY_LIST] = new CUIPartyAutoPartyList;
	LoadXML("Partyauto_partylist.xml", m_apUIs[UI_PARTYAUTO_PARTY_LIST]);

	// Map
	m_apUIs[UI_MAP] = new CUIMap;
	m_apUIs[UI_MAP]->Create( NULL, 0, 0, MAP_FRAME_WIDTH, MAP_FRAME_HEIGHT );

	// Option
	m_apUIs[UI_OPTION] = new CUIOption;
	LoadXML("Option_Game.xml", m_apUIs[UI_OPTION]);

	// Refine
	m_apUIs[UI_REFINE] = new CUIRefine;
	m_apUIs[UI_REFINE]->Create( NULL, 0, 0, REFINE_WIDTH, REFINE_HEIGHT );

	// Process
	m_apUIs[UI_PROCESS] = new CUIProcess;
	LoadXML("Process.xml", m_apUIs[UI_PROCESS]);

	// process 와 디자인 공유
	m_apUIs[UI_PRODUCT] = new CUIProduct;
	LoadXML("Process.xml", m_apUIs[UI_PRODUCT]);

	// Mix :  이기환 (12.7)
	m_apUIs[UI_MIX] = new CUIMix;
	m_apUIs[UI_MIX]->Create( NULL, 0, 0, MIX_WIDTH, MIX_HEIGHT );

	// wooss 060523 mix new
	m_apUIs[UI_MIXNEW] = new CUIMixNew;
	m_apUIs[UI_MIXNEW]->Create( NULL, 0, 0, MIXNEW_WIDTH, MIXNEW_HEIGHT );

	// UI_COMPOUND // Date : 2005-01-12,   By Lee Ki-hwan
	m_apUIs[UI_COMPOUND] = new CCompoundUI;
	LoadXML("Compound.xml", m_apUIs[UI_COMPOUND]);

	m_apUIs[UI_QUEST] = new CUIQuest;
	m_apUIs[UI_QUEST]->Create( NULL, 0, 0, QUEST_WIDTH, QUEST_HEIGHT );

	m_apUIs[UI_SELECTWORD] = new CUISelectWord;
	m_apUIs[UI_SELECTWORD]->Create( NULL, 0, 0, SELECTREWORD_WIDTH, SELECTREWORD_HEIGHT );

	// 친구 찾기 이벤트 060126
	m_apUIs[UI_SELECTLIST] = new CUISelectList;
	m_apUIs[UI_SELECTLIST]->Create( NULL, 0, 0, SELECTLIST_WIDTH, SELECTLIST_HEIGHT );

	// 펫 아이템 조합( 유니크 아이템 제작 )
	m_apUIs[UI_PET_ITEM_MIX] = new CPetItemMixUI;
	LoadXML( "PetItemMix.xml", m_apUIs[UI_PET_ITEM_MIX] );

	m_apUIs[UI_PETFREE] = new CPetFreeUI;
	LoadXML( "PetFree.xml", m_apUIs[UI_PETFREE] );

	m_apUIs[UI_QUIZEVENT] = new CUIOXQuizEvent;
	m_apUIs[UI_QUIZEVENT]->Create( NULL, 0, 0, UI_OX_WIDTH, UI_OX_HEIGHT );

	m_apUIs[UI_INSECTCOLLECT] = new CInsectCollectUI;
	LoadXML("InsectCollectBox.xml", m_apUIs[UI_INSECTCOLLECT]);

	m_apUIs[UI_BINGOBOX] = new CBingoBoxUI;
	LoadXML( "bingobox.xml", m_apUIs[UI_BINGOBOX] );
	// NPC 안내 시스템
	m_apUIs[UI_NPCHELP]	= new CUINpcHelp;
	m_apUIs[UI_NPCHELP]->Create( NULL, 0, 0, UI_NPCHELP_WIDTH, UI_NPCHELP_HEIGHT );

	// connie [2009/9/9] - NPC 찾기
	m_apUIs[UI_NPC_SCROLL] = new CUINpcScroll;
	LoadXML( "NPCScroll.xml", m_apUIs[UI_NPC_SCROLL] );

	//[12/9/2009 kiny] 호칭
	m_apUIs[UI_NICKNAME] = new CUINickName;
	m_apUIs[UI_NICKNAME]->Create( NULL, 0, 0, NICKNAME_WIDTH, NICKNAME_HEIGHT );

	m_apUIs[UI_SOCKETSYSTEM] = new CUISocketSystem;
	m_apUIs[UI_SOCKETSYSTEM]->Create( NULL, 0, 0, 0, 0);

	m_apUIs[UI_SOCKET_REMOVE_ALL] = new CSocketRemoveAllUI;
	LoadXML( "Socket system_Batch remove.xml", m_apUIs[UI_SOCKET_REMOVE_ALL] );

	m_apUIs[UI_SOCKET_REMOVE_SINGLE] = new CSocketRemoveSingleUI;
	LoadXML( "Socket system_Individual removal1.xml", m_apUIs[UI_SOCKET_REMOVE_SINGLE] );

	m_apUIs[UI_SOCKET_CREATE] = new CSocketCreateUI;
	LoadXML( "Socket system_Create.xml", m_apUIs[UI_SOCKET_CREATE] );

	m_apUIs[UI_SOCKET_COMBINE] = new CSocketCombineUI;
	LoadXML( "Socket system_Combine.xml", m_apUIs[UI_SOCKET_COMBINE] );

	m_apUIs[UI_JEWEL_COMPOS] = new CJewelComposUI;
	LoadXML( "Socket system_Compos.xml", m_apUIs[UI_JEWEL_COMPOS] );

	// 퀘스트 목록
	m_apUIs[UI_QUESTBOOK_LIST] = new CUIQuestBook;
	LoadXML( "questBook.xml", m_apUIs[UI_QUESTBOOK_LIST] );

	// 퀘스트 완료
	m_apUIs[UI_QUESTBOOK_COMPLETE] = new CUIQuestComplete;
	LoadXML( "questComplete.xml", m_apUIs[UI_QUESTBOOK_COMPLETE] );

	// 신규 퀘스트
	m_apUIs[UI_QUEST_ACCEPT] = new CUIQuestAccept;
	LoadXML( "questAccept.xml", m_apUIs[UI_QUEST_ACCEPT] );

	// 퀘스트 복구
	m_apUIs[UI_QUEST_RESTORE] = new CUIQuestRestore;
	LoadXML( "questRestore.xml", m_apUIs[UI_QUEST_RESTORE] );

	// 퀘스트 미리보기
	m_apUIs[UI_QUEST_VIEW] = new CUIQuestView;
	LoadXML( "questView.xml", m_apUIs[UI_QUEST_VIEW] );

	// 소환수 컨트롤...
	m_apUIs[UI_SUMMON_FIRST] = new CSummonUI(UI_SUMMON_FIRST);
	LoadXML( "Summon.xml", m_apUIs[UI_SUMMON_FIRST]);

	m_apUIs[UI_SUMMON_SECOND] = new CSummonUI(UI_SUMMON_SECOND);
	LoadXML( "Summon.xml", m_apUIs[UI_SUMMON_SECOND]);

	// SkillLearn
	m_apUIs[UI_SKILLLEARN] = new CUISkillLearn;
	m_apUIs[UI_SKILLLEARN]->Create( NULL, 0, 0, 0, 0 );

	// SSkillLearn
	m_apUIs[UI_SSKILLLEARN] = new CSSkillLearnUI;
	LoadXML( "SSkillLearn.xml", m_apUIs[UI_SSKILLLEARN]);

	// 노멀 아이템 교환 29 ~ 72 Lv
	m_apUIs[UI_CHANGEWEAPON] = new CUIChangeWeapon;
	LoadXML( "ChangeWeapon.xml", m_apUIs[UI_CHANGEWEAPON]);
	// 레어 아이템 교환
	m_apUIs[UI_CHANGE_EQUIPMENT] = new CUIChangeEquipment;
	LoadXML( "ChangeEquipment.xml", m_apUIs[UI_CHANGE_EQUIPMENT]);
	
	// Init Job
	m_apUIs[UI_INITJOB]	= new CUIInitJob;
	m_apUIs[UI_INITJOB]->Create( NULL, 0, 0, INITJOB_WIDTH, INITJOB_HEIGHT );

	// Init Job
	m_apUIs[UI_HELPER]	= new CHelperUI;
	LoadXML("helper.xml", m_apUIs[UI_HELPER]);

	// Teleport
	m_apUIs[UI_TELEPORT] = new CTeleportUI;
	LoadXML( "Teleport.xml", m_apUIs[UI_TELEPORT]);

	// Messenger
	m_apUIs[UI_MESSENGER] = new CUIMessenger;
	m_apUIs[UI_MESSENGER]->Create( NULL, 0, 0, MESSENGER_WIDTH, MESSENGER_HEIGHT );

	// Web board
	m_apUIs[UI_WEBBOARD] = new CUIWebBoard;
	m_apUIs[UI_WEBBOARD]->Create( NULL, 0, 0, WBOARD_WIDTH, WBOARD_HEIGHT );

	// SiegeWarfare(공성전)
	m_apUIs[UI_SIEGE_WARFARE] = new CUISiegeWarfare;
	m_apUIs[UI_SIEGE_WARFARE]->Create( NULL, 0, 0, 0, 0 );

	// WSS_DRATAN_SIEGEWARFARE
	// SiegeWarfareNew(신공성전) -DRATAN
	m_apUIs[UI_SIEGE_WARFARE_NEW] = new CUISiegeWarfareNew;
	m_apUIs[UI_SIEGE_WARFARE_NEW]->Create( NULL, 0, 0, 0, 0 );

	m_apUIs[UI_GW_MIX] = new CGuildWarMixUI;
	LoadXML("gwmix.xml", m_apUIs[UI_GW_MIX]);

	// Notice
	m_apUIs[UI_NOTICE] = new CUINoticeNew;
	LoadXML( "NoticeNew.xml", m_apUIs[UI_NOTICE] );
	//m_apUIs[UI_NOTICE]->Create( NULL, 0, 0, NOTICE_WIDTH, NOTICE_HEIGHT );

	m_apUIs[UI_GUILDSTASH] = new CGuildStashUI;
	LoadXML("guildstash_02.xml", m_apUIs[UI_GUILDSTASH]);

	// new guild stash system. [6/17/2011 rumist]
//	m_apUIs[UI_NEWGUILDSTASH]	= new CUINewGuildStash;
//	m_apUIs[UI_NEWGUILDSTASH]->Create( NULL, 0, 0, 0, 0 );

	m_apUIs[UI_AUCTION] = new CUIAuctionNew;
	LoadXML( "auction.xml", m_apUIs[UI_AUCTION] );
	
	m_apUIs[UI_WILDPET_INFO] = new CWildPetInfoUI;
	LoadXML( "WildPetInfo.xml", m_apUIs[UI_WILDPET_INFO] );

	m_apUIs[UI_CUBERANK] = new CCubeRankingUI;
	LoadXML( "cuberank.xml", m_apUIs[UI_CUBERANK]);

	// [2010/10/20 : Sora] 몬스터 용병 카드
	m_apUIs[UI_MONSTER_MERCENARY] = new CUIMonsterMercenary;
	m_apUIs[UI_MONSTER_MERCENARY]->Create( NULL, 0, 0, UI_MONSTER_MERCENARY_WIDTH, UI_MONSTER_MERCENARY_HEIGHT);

	// [2010/11/01 : Sora] 공성 개편
	m_apUIs[UI_SIEGE_WARFARE_INFO] = new CUISiegeWarfareInfo;
	m_apUIs[UI_SIEGE_WARFARE_INFO]->Create( NULL, 0, 0, 400, 350 );

	// 보물지도
	m_apUIs[UI_TREASURE_MAP] = new CTreasureMapUI;
	LoadXML( "TreasureMap.xml", m_apUIs[UI_TREASURE_MAP]);

	// Messenger talk box
	int		iUI;
	for( iUI = UI_MESSENGER_TALK_START; iUI < UI_MESSENGER_TALK_END; iUI++ )
	{
		m_apUIs[iUI] = new CTalkUI;
		LoadXML( "Talk.xml", m_apUIs[iUI]);

		if (m_apUIs[iUI] != NULL)
			((CTalkUI*)m_apUIs[iUI])->SetUIIndex(iUI);
	}

	// Message box
	for( iUI = UI_MESSAGEBOX_START; iUI < UI_MESSAGEBOX_END; iUI++ )
	{
		m_apUIs[iUI] = new CUIMessageBox;
		m_apUIs[iUI]->Create( NULL, 0, 0, MSGBOX_WIDTH, MSGBOX_HEIGHT );
		((CUIMessageBox *)m_apUIs[iUI])->SetUIIndex( iUI );
	}

	// Message box Large
	for( iUI = UI_MESSAGEBOXL_START; iUI < UI_MESSAGEBOXL_END; ++iUI )
	{
		m_apUIs[iUI] = new CUIMessageBoxL;
		m_apUIs[iUI]->Create( NULL, 0, 0, MSGBOXL_WIDTH, MSGBOXL_HEIGHT );
		((CUIMessageBoxL *)m_apUIs[iUI])->SetUIIndex( iUI );
	}

	m_apUIs[UI_LOGIN] = new CUILoginNew;
	LoadXML( "Login.xml", m_apUIs[UI_LOGIN] );

#ifdef CKBANG_UI_TWITTER
	CTString strXMLPath = _fnmApplicationPath + "Data\\Interface\\Twitter\\twitter.xml";
	m_apUIs[UI_TWITTER] = new CUITwitter(strXMLPath);
	m_apUIs[UI_TWITTER]->Create( NULL, 0, 0, UITWITTER_WIDTH, UITWITTER_HEIGHT );
#endif

	// Create lacaball [1/25/2011 rumist]
	m_apUIs[UI_LACABALL] = new CUILacaball;
	m_apUIs[UI_LACABALL]->Create( NULL, 0, 0, CUILacaball::LACABALL_UI_WIDTH, CUILacaball::LACABALL_UI_HEIGHT );

	m_apUIs[UI_CREATE_CHAR] = new CUICharacterCreateNew;
	LoadXML( "Character_create.xml", m_apUIs[UI_CREATE_CHAR] );

	// [KH_070420]	추가
	m_apUIs[UI_SIMPLE_POP] = new CUISimplePop;
	m_apUIs[UI_SIMPLE_POP]->Create(NULL, 0, 0, 0, 0);

	// WSS_MINIGAME 070418 --------------------------------------------->>
	// UI MINIGAME
	m_apUIs[UI_MINIGAME] = new CUIMinigame;//CASHSHOP_WIDTH,CASHSHOP_HEIGHT
	m_apUIs[UI_MINIGAME]->Create(NULL, 0, 0, MINIGAME_WIDTH,MINIGAME_HEIGHT);
	// -----------------------------------------------------------------<<

	// UI FlowerTree
	m_apUIs[UI_FLOWERTREE] = new CUIFlowerTree;
	m_apUIs[UI_FLOWERTREE]->Create(NULL, 0, 0, FLOWERTREE_WIDTH, FLOWERTREE_HEIGHT);

	// WSS_NEW_GUILD_SYSTEM --------------------------------------------------->>
	// UI Guild Notice 
	m_apUIs[UI_GUILD_NOTICE] = new CUIGuildNotice;
	m_apUIs[UI_GUILD_NOTICE]->Create(NULL, 0, 0, GUILD_NOTICE_WIDTH, GUILD_NOTICE_HEIGHT);
	// ------------------------------------------------------------------------<<
	// ttos_080116 : 몬스터 콤보
	m_apUIs[UI_MONSTER_COMBO] = new CUIMonsterCombo;
	m_apUIs[UI_MONSTER_COMBO]->Create(NULL, 0, 0, UI_MONSTERCOMBO_WIDTH, UI_MONSTERCOMBO_HEIGHT);
	// ------------------------------------------------------------------------<<
	m_apUIs[UI_PRODUCT2] = new CUIProduct2;
	LoadXML("Product_02.xml", m_apUIs[UI_PRODUCT2]);

	m_apUIs[UI_PRODUCTNPC] = new CUIProductNPC;
	LoadXML("ProductNPC.xml", m_apUIs[UI_PRODUCTNPC]);

	// NPC Affinity System ---------------------------------------------------->>
	// [6/2/2009 rumist]  친화도.
	m_apUIs[UI_NPC_AFFINITYINFO] = new CAffinityInfoUI;
	LoadXML("affinity_info.xml", m_apUIs[UI_NPC_AFFINITYINFO]);

	// ---------------------------------------------------->>
	// 친화도 UI에서 제작 UI 분리 [2/25/2013 Ranma]
	m_apUIs[UI_ITEMPRODUCT] = new CItemProductUI;
	LoadXML("itemproduct.xml", m_apUIs[UI_ITEMPRODUCT]);

	// ------------------------------------------------------------------------<<
	// NPC Affinity System ---------------------------------------------------->>
	// [6/2/2009 rumist]  친화도 기부.
	m_apUIs[UI_NPC_AFFINITY] = new CAffinityUI;
	LoadXML("affinity.xml", m_apUIs[UI_NPC_AFFINITY]);
	// ------------------------------------------------------------------------<<

	// Resurrection System ---------------------------------------------------->>
	// resurrection ui [11/2/2009 rumist]
	m_apUIs[UI_RESURRECTION] = new CUIResurrectionMsgBox;
	m_apUIs[UI_RESURRECTION]->Create( NULL, 0, 0, 226, 200 );
	// ------------------------------------------------------------------------<<

	m_apUIs[UI_CHAT_FILTER] = new CChatBlockListUI;
	LoadXML("ChatblockList.xml", m_apUIs[UI_CHAT_FILTER]);

	m_apUIs[UI_CASHSHOP_EX] = new CUICashShopEX();
	m_apUIs[UI_CASHSHOP_EX]->Create(NULL,0,0,0,0);

	m_apUIs[UI_ROYALRUMBLE_ICON] = new CUIRoyalRumbleIcon;
	LoadXML("RoyalRumble.xml", m_apUIs[UI_ROYALRUMBLE_ICON]);

	// [sora] GUILD_MARK
	m_apUIs[UI_GUILD_MARK] = new CUIGuildMark;
	m_apUIs[UI_GUILD_MARK]->Create( NULL, 0, 0, 0, 0 );

	// reform system [8/28/2012 박훈]
	m_apUIs[UI_REFORM_SYSTEM] = new CUIReformSystem;
	m_apUIs[UI_REFORM_SYSTEM]->Create(NULL, 0, 0, 0, 0);

	// [2013/02/13] sykim70 Fortune System
	m_apUIs[UI_FORTUNE] = new CUIFortune;
	m_apUIs[UI_FORTUNE]->Create(NULL, 0, 0, CUIFortune::FORTUNE_WIDTH, CUIFortune::FORTUNE_HEIGHT);

	// 라스트 카오스 익스프레스 시스템
	m_apUIs[UI_LCE_SYSTEM] = new CUIExpressSystem;
	m_apUIs[UI_LCE_SYSTEM]->Create(NULL, 0, 0, LCE_UI_INFO_WIDTH, LCE_UI_INFO_HEIGHT);

	m_apUIs[UI_CALENDAR] = new CUICalendar;
	LoadXML( "calendar.xml", m_apUIs[UI_CALENDAR]);

	m_apUIs[UI_CALENDAR_EVENT_INFO] = new CUICalendarEventInfo;
	LoadXML( "calendar_evt_info.xml", m_apUIs[UI_CALENDAR_EVENT_INFO]);

	m_apUIs[UI_MYSTERYOUSBEAD] = new CUIMysteriousBead;
	LoadXML( "UIMysteriousBead.xml", m_apUIs[UI_MYSTERYOUSBEAD]);

	m_apUIs[UI_PET_STASH] = new CUIPetStash;
	LoadXML( "PetStash.xml", m_apUIs[UI_PET_STASH]);

	m_apUIs[UI_PET_STASH_SELECT_EFFECT] = new CUIPetStashSelectEffect;
	LoadXML( "PetStashSelectEffect.xml", m_apUIs[UI_PET_STASH_SELECT_EFFECT]);

	m_apUIs[UI_INVEN_CASH_BAG_BOX] = new CUIInvenCashBagBox;
	LoadXML( "cashbag_box.xml", m_apUIs[UI_INVEN_CASH_BAG_BOX]);

	m_apUIs[UI_SKILL_NEW] = new CUISkillNew;
	LoadXML( "skill_new.xml", m_apUIs[UI_SKILL_NEW] );

	m_apUIs[UI_SERVER_SELECT] = new CUIServerSelect;
	LoadXML( "server_select.xml", m_apUIs[UI_SERVER_SELECT] );

	m_apUIs[UI_CHARACTER_SELECT] = new CUICharacterSelect;
	LoadXML( "character_select.xml", m_apUIs[UI_CHARACTER_SELECT] );

	m_apUIs[UI_HARDCORE_WARNING] = new CUIHardCoreWarning;

	m_apUIs[UI_TRADE]	= new CUITrade;
	LoadXML( "UITrade.xml", m_apUIs[UI_TRADE] );

	m_apUIs[UI_GPS] = new CUIGPS;
	LoadXML("gps.xml", m_apUIs[UI_GPS]);

	m_apUIs[UI_COMPASS] = new CUICompass;
	LoadXML("compass.xml", m_apUIs[UI_COMPASS]);

	m_apUIs[UI_MSGBOX_NUMERIC_ONLY]	= new CUIMsgBoxNumericOnly;
	LoadXML( "UIMsgBox_NumericOnly.xml", m_apUIs[UI_MSGBOX_NUMERIC_ONLY]);

	m_apUIs[UI_ITEMCOLLECTION] = new CItemCollectionUI;
	LoadXML( "UIItemCollection.xml", m_apUIs[UI_ITEMCOLLECTION]);

	m_apUIs[UI_PREMIUM_CHAR] = new CPremiumCharUI;
#ifdef PREMIUM_CHAR
	LoadXML( "PremiumChar.xml", m_apUIs[UI_PREMIUM_CHAR]);
#endif	//	PREMIUM_CHAR

	m_apUIs[UI_SIMPLE_PLAYER_INFO] = new CSimplePlayerInfoUI;
	LoadXML( "SimplePlayerInfoUI.xml", m_apUIs[UI_SIMPLE_PLAYER_INFO]);

	m_apUIs[UI_SIMPLE_PLAYER_MENU] = new CSimplePlayerMenuUI;
	LoadXML( "SimplePlayerMenuUI.xml", m_apUIs[UI_SIMPLE_PLAYER_MENU]);

	m_apUIs[UI_NEWS]	= new CNewsUI;
	LoadXML("NewsUI.xml", m_apUIs[UI_NEWS]);

	m_apUIs[UI_NEWS_WEB]	= new CNewsWebUI;
	LoadXML("News_Web_UI.xml", m_apUIs[UI_NEWS_WEB]);

	m_apUIs[UI_CHATTING_NEW] = new CChattingUI;
	LoadXML( "ChattingUI.xml", m_apUIs[UI_CHATTING_NEW]);

	m_apUIs[UI_ITEM_COMPOSE] = new CItemComposeUI;
	LoadXML( "composeUI.xml", m_apUIs[UI_ITEM_COMPOSE]);

	m_apUIs[UI_HELP_WEB]	= new CHelpWebUI;
	LoadXML("News_Web_UI.xml", m_apUIs[UI_HELP_WEB]);

	m_apUIs[UI_CUSTOM_TITLE]	= new CCustomTitleUI;
	LoadXML("customTitle.xml", m_apUIs[UI_CUSTOM_TITLE]);

	m_apUIs[UI_GS_USE_RECORD]	= new CGuildStashUseRecordUI;
	LoadXML("GuildStashUseRecord.xml", m_apUIs[UI_GS_USE_RECORD]);

	m_apUIs[UI_HELPER_GUARDIAN_INFO]	= new CHelper_GuardianInfoUI;
	LoadXML("helper_guardian_info.xml", m_apUIs[UI_HELPER_GUARDIAN_INFO]);

	m_apUIs[UI_HELPER_STUDENT]	= new CHelper_StudentUI;
	LoadXML("helper_student.xml", m_apUIs[UI_HELPER_STUDENT]);

	m_apUIs[UI_GUILD_BATTLE_MATCH] = new GuildBattleMatchUI;
	LoadXML("GuildBattle.xml", m_apUIs[UI_GUILD_BATTLE_MATCH]);

	m_apUIs[UI_GUILD_BATTLE_MATCH_REG] = new GuildBattleMatchRegUI;
	LoadXML("GuildBattleReg.xml", m_apUIs[UI_GUILD_BATTLE_MATCH_REG]);

	m_apUIs[UI_GUILD_BATTLE_MATCH_CHALLENGE] = new GuildBattleMatchChallengeUI;
	LoadXML("GuildBattleChallenge.xml", m_apUIs[UI_GUILD_BATTLE_MATCH_CHALLENGE]);
}

void CUIWindowDeclare::InitRankSystem()
{	
	m_apUIs[UI_RANKINGVIEW_RENEWAL]	= new CUIRankingSystem;
	LoadXML( "RankingEx.xml", m_apUIs[UI_RANKINGVIEW_RENEWAL] );
}

bool CUIWindowDeclare::LoadXML( const char* strPath, CUIBase* parent )
{
	CTString FileName = _fnmApplicationPath.FileDir();
	FileName += "Data\\Interface\\xml\\";
	FileName += strPath;

	// 파일 유효성 검사
	if( FileExists( FileName ) == FALSE )
		return false;

	if (parent == NULL)
		return false;

	UIFactory* pFactory = UIFactory::getSingleton();

	if( pFactory == NULL )
		return false;

	bool bRet = pFactory->loadXML( parent, FileName );
	parent->initialize();

	parent->postInit();

	return bRet;
}

bool CUIWindowDeclare::LoadXML( const char* strPath )
{
	// 파일 유효성 검사
	if( FileExists( strPath ) == FALSE )
		return false;

	UIFactory* pFactory = UIFactory::getSingleton();

	if( pFactory == NULL )
		return false;

	CUIWindow* pUIWnd = new CUIWindow;
	bool bRet = pFactory->loadXML( pUIWnd, strPath );
	pUIWnd->initialize();

	if( bRet )
	{
		addChild( pUIWnd );
	}

	pUIWnd->postInit();

	return bRet;
}
