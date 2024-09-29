/*
 * This file is generated by Entity Class Compiler, (c) CroTeam 1997-98
 */

#ifndef _Global_INCLUDED
#define _Global_INCLUDED 1
#define EVENTCODE_EStop 0x00000000
class DECL_DLL EStop : public CEntityEvent {
public:
	EStop();
	CEntityEvent *MakeCopy(void);
	BOOL CheckIDs(void);
	SLONG GetSizeOf(void);
};
DECL_DLL inline void ClearToDefault(EStop &e) { e = EStop(); } ;
#define EVENTCODE_EStart 0x00000001
class DECL_DLL EStart : public CEntityEvent {
public:
	EStart();
	CEntityEvent *MakeCopy(void);
	BOOL CheckIDs(void);
	SLONG GetSizeOf(void);
	CEntityPointer penCaused;
};
DECL_DLL inline void ClearToDefault(EStart &e) { e = EStart(); } ;
#define EVENTCODE_EActivate 0x00000002
class DECL_DLL EActivate : public CEntityEvent {
public:
	EActivate();
	CEntityEvent *MakeCopy(void);
	BOOL CheckIDs(void);
	SLONG GetSizeOf(void);
};
DECL_DLL inline void ClearToDefault(EActivate &e) { e = EActivate(); } ;
#define EVENTCODE_EDeactivate 0x00000003
class DECL_DLL EDeactivate : public CEntityEvent {
public:
	EDeactivate();
	CEntityEvent *MakeCopy(void);
	BOOL CheckIDs(void);
	SLONG GetSizeOf(void);
};
DECL_DLL inline void ClearToDefault(EDeactivate &e) { e = EDeactivate(); } ;
#define EVENTCODE_EEnvironmentStart 0x00000004
class DECL_DLL EEnvironmentStart : public CEntityEvent {
public:
	EEnvironmentStart();
	CEntityEvent *MakeCopy(void);
	BOOL CheckIDs(void);
	SLONG GetSizeOf(void);
};
DECL_DLL inline void ClearToDefault(EEnvironmentStart &e) { e = EEnvironmentStart(); } ;
#define EVENTCODE_EEnvironmentStop 0x00000005
class DECL_DLL EEnvironmentStop : public CEntityEvent {
public:
	EEnvironmentStop();
	CEntityEvent *MakeCopy(void);
	BOOL CheckIDs(void);
	SLONG GetSizeOf(void);
};
DECL_DLL inline void ClearToDefault(EEnvironmentStop &e) { e = EEnvironmentStop(); } ;
#define EVENTCODE_EEnd 0x00000006
class DECL_DLL EEnd : public CEntityEvent {
public:
	EEnd();
	CEntityEvent *MakeCopy(void);
	BOOL CheckIDs(void);
	SLONG GetSizeOf(void);
};
DECL_DLL inline void ClearToDefault(EEnd &e) { e = EEnd(); } ;
#define EVENTCODE_ETrigger 0x00000007
class DECL_DLL ETrigger : public CEntityEvent {
public:
	ETrigger();
	CEntityEvent *MakeCopy(void);
	BOOL CheckIDs(void);
	SLONG GetSizeOf(void);
	CEntityPointer penCaused;
};
DECL_DLL inline void ClearToDefault(ETrigger &e) { e = ETrigger(); } ;
#define EVENTCODE_ETeleportMovingBrush 0x00000008
class DECL_DLL ETeleportMovingBrush : public CEntityEvent {
public:
	ETeleportMovingBrush();
	CEntityEvent *MakeCopy(void);
	BOOL CheckIDs(void);
	SLONG GetSizeOf(void);
};
DECL_DLL inline void ClearToDefault(ETeleportMovingBrush &e) { e = ETeleportMovingBrush(); } ;
#define EVENTCODE_EReminder 0x00000009
class DECL_DLL EReminder : public CEntityEvent {
public:
	EReminder();
	CEntityEvent *MakeCopy(void);
	BOOL CheckIDs(void);
	SLONG GetSizeOf(void);
	INDEX iValue;
};
DECL_DLL inline void ClearToDefault(EReminder &e) { e = EReminder(); } ;
#define EVENTCODE_EStartAttack 0x0000000a
class DECL_DLL EStartAttack : public CEntityEvent {
public:
	EStartAttack();
	CEntityEvent *MakeCopy(void);
	BOOL CheckIDs(void);
	SLONG GetSizeOf(void);
};
DECL_DLL inline void ClearToDefault(EStartAttack &e) { e = EStartAttack(); } ;
#define EVENTCODE_EStopAttack 0x0000000b
class DECL_DLL EStopAttack : public CEntityEvent {
public:
	EStopAttack();
	CEntityEvent *MakeCopy(void);
	BOOL CheckIDs(void);
	SLONG GetSizeOf(void);
};
DECL_DLL inline void ClearToDefault(EStopAttack &e) { e = EStopAttack(); } ;
#define EVENTCODE_EStopBlindness 0x0000000c
class DECL_DLL EStopBlindness : public CEntityEvent {
public:
	EStopBlindness();
	CEntityEvent *MakeCopy(void);
	BOOL CheckIDs(void);
	SLONG GetSizeOf(void);
};
DECL_DLL inline void ClearToDefault(EStopBlindness &e) { e = EStopBlindness(); } ;
#define EVENTCODE_EStopDeafness 0x0000000d
class DECL_DLL EStopDeafness : public CEntityEvent {
public:
	EStopDeafness();
	CEntityEvent *MakeCopy(void);
	BOOL CheckIDs(void);
	SLONG GetSizeOf(void);
};
DECL_DLL inline void ClearToDefault(EStopDeafness &e) { e = EStopDeafness(); } ;
#define EVENTCODE_EAddHostile 0x0000000e
class DECL_DLL EAddHostile : public CEntityEvent {
public:
	EAddHostile();
	CEntityEvent *MakeCopy(void);
	BOOL CheckIDs(void);
	SLONG GetSizeOf(void);
};
DECL_DLL inline void ClearToDefault(EAddHostile &e) { e = EAddHostile(); } ;
#define EVENTCODE_EDoorControll 0x0000000f
class DECL_DLL EDoorControll : public CEntityEvent {
public:
	EDoorControll();
	CEntityEvent *MakeCopy(void);
	BOOL CheckIDs(void);
	SLONG GetSizeOf(void);
	BOOL bOpen;
};
DECL_DLL inline void ClearToDefault(EDoorControll &e) { e = EDoorControll(); } ;
extern DECL_DLL CEntityPropertyEnumType CauseOfDeath_enum;
enum CauseOfDeath {
	COD_OTHER = 0,
	COD_KNIFE = 1,
	COD_CHAINSAW = 2,
	COD_BOMB = 3,
	COD_CANNON = 4,
};
DECL_DLL inline void ClearToDefault(CauseOfDeath &e) { e = (CauseOfDeath)0; } ;
extern DECL_DLL CEntityPropertyEnumType KillType_enum;
enum KillType {
	KT_PLAYER = 0,
	KT_ENEMY = 1,
	KT_OTHER = 2,
	KT_MPVICTIM = 3,
};
DECL_DLL inline void ClearToDefault(KillType &e) { e = (KillType)0; } ;
#define EVENTCODE_EKilledEnemy 0x00000010
class DECL_DLL EKilledEnemy : public CEntityEvent {
public:
	EKilledEnemy();
	CEntityEvent *MakeCopy(void);
	BOOL CheckIDs(void);
	SLONG GetSizeOf(void);
	CEntityPointer penEnemy;
	INDEX iScore;
	enum CauseOfDeath eCauseOfDeath;
	enum KillType eKillType;
};
DECL_DLL inline void ClearToDefault(EKilledEnemy &e) { e = EKilledEnemy(); } ;
extern DECL_DLL CEntityPropertyEnumType BoolEType_enum;
enum BoolEType {
	BET_TRUE = 0,
	BET_FALSE = 1,
	BET_IGNORE = 2,
};
DECL_DLL inline void ClearToDefault(BoolEType &e) { e = (BoolEType)0; } ;
extern DECL_DLL CEntityPropertyEnumType EventEType_enum;
enum EventEType {
	EET_START = 0,
	EET_STOP = 1,
	EET_TRIGGER = 2,
	EET_IGNORE = 3,
	EET_ACTIVATE = 4,
	EET_DEACTIVATE = 5,
	EET_ENVIRONMENTSTART = 6,
	EET_ENVIRONMENTSTOP = 7,
	EET_STARTATTACK = 8,
	EET_STOPATTACK = 9,
	EET_STOPBLINDNESS = 10,
	EET_STOPDEAFNESS = 11,
	EET_TELEPORTMOVINGBRUSH = 12,
	EET_ADDHOSTILE = 13,
	EET_DOORCONTROLL = 14,
};
DECL_DLL inline void ClearToDefault(EventEType &e) { e = (EventEType)0; } ;
extern DECL_DLL CEntityPropertyEnumType EntityInfoBodyType_enum;
enum EntityInfoBodyType {
	EIBT_FLESH = 1,
	EIBT_WATER = 2,
	EIBT_ROCK = 3,
	EIBT_FIRE = 4,
	EIBT_AIR = 5,
	EIBT_BONES = 6,
	EIBT_WOOD = 7,
	EIBT_METAL = 8,
	EIBT_ROBOT = 9,
	EIBT_ICE = 10,
};
DECL_DLL inline void ClearToDefault(EntityInfoBodyType &e) { e = (EntityInfoBodyType)0; } ;
extern DECL_DLL CEntityPropertyEnumType MessageSound_enum;
enum MessageSound {
	MSS_NONE = 0,
	MSS_INFO = 1,
};
DECL_DLL inline void ClearToDefault(MessageSound &e) { e = (MessageSound)0; } ;
extern DECL_DLL CEntityPropertyEnumType ParticleTexture_enum;
enum ParticleTexture {
	PT_STAR01 = 1,
	PT_STAR02 = 2,
	PT_STAR03 = 3,
	PT_STAR04 = 4,
	PT_STAR05 = 5,
	PT_STAR06 = 6,
	PT_STAR07 = 7,
	PT_STAR08 = 8,
	PT_BOUBBLE01 = 9,
	PT_BOUBBLE02 = 10,
	PT_WATER01 = 11,
	PT_WATER02 = 12,
	PT_SANDFLOW = 13,
	PT_WATERFLOW = 14,
	PT_LAVAFLOW = 15,
};
DECL_DLL inline void ClearToDefault(ParticleTexture &e) { e = (ParticleTexture)0; } ;
extern DECL_DLL CEntityPropertyEnumType SoundType_enum;
enum SoundType {
	SNDT_NONE = 0,
	SNDT_SHOUT = 1,
	SNDT_YELL = 2,
	SNDT_EXPLOSION = 3,
	SNDT_PLAYER = 4,
};
DECL_DLL inline void ClearToDefault(SoundType &e) { e = (SoundType)0; } ;
extern DECL_DLL CEntityPropertyEnumType BulletHitType_enum;
enum BulletHitType {
	BHT_NONE = 0,
	BHT_FLESH = 1,
	BHT_BRUSH_STONE = 2,
	BHT_BRUSH_SAND = 3,
	BHT_BRUSH_WATER = 4,
	BHT_BRUSH_UNDER_WATER = 5,
	BHT_ACID = 6,
	BHT_BRUSH_RED_SAND = 7,
	BHT_BRUSH_GRASS = 8,
	BHT_BRUSH_WOOD = 9,
	BHT_BRUSH_SNOW = 10,
};
DECL_DLL inline void ClearToDefault(BulletHitType &e) { e = (BulletHitType)0; } ;
extern DECL_DLL CEntityPropertyEnumType EffectParticlesType_enum;
enum EffectParticlesType {
	EPT_NONE = 0,
	EPT_BULLET_STONE = 1,
	EPT_BULLET_SAND = 2,
	EPT_BULLET_WATER = 3,
	EPT_BULLET_UNDER_WATER = 4,
	EPT_BULLET_RED_SAND = 5,
	EPT_BULLET_GRASS = 6,
	EPT_BULLET_WOOD = 7,
	EPT_BULLET_SNOW = 8,
};
DECL_DLL inline void ClearToDefault(EffectParticlesType &e) { e = (EffectParticlesType)0; } ;
extern DECL_DLL CEntityPropertyEnumType SprayParticlesType_enum;
enum SprayParticlesType {
	SPT_NONE = 0,
	SPT_BLOOD = 1,
	SPT_BONES = 2,
	SPT_FEATHER = 3,
	SPT_STONES = 4,
	SPT_WOOD = 5,
	SPT_SLIME = 6,
	SPT_LAVA_STONES = 7,
	SPT_ELECTRICITY_SPARKS = 8,
	SPT_BEAST_PROJECTILE_SPRAY = 9,
	SPT_SMALL_LAVA_STONES = 10,
	SPT_AIRSPOUTS = 11,
	SPT_ELECTRICITY_SPARKS_NO_BLOOD = 12,
	SPT_PLASMA = 13,
	SPT_GOO = 14,
	SPT_TREE01 = 15,
	SPT_COLOREDSTONE = 16,
};
DECL_DLL inline void ClearToDefault(SprayParticlesType &e) { e = (SprayParticlesType)0; } ;
extern DECL_DLL CEntityPropertyEnumType WeaponBits_enum;
enum WeaponBits {
	WB_00 = 0,
	WB_09 = 9,
	WB_10 = 10,
	WB_14 = 14,
	WB_15 = 15,
	WB_16 = 16,
	WB_17 = 17,
	WB_18 = 18,
	WB_19 = 19,
	WB_20 = 20,
	WB_21 = 21,
	WB_22 = 22,
	WB_23 = 23,
	WB_24 = 24,
	WB_25 = 25,
	WB_26 = 26,
	WB_27 = 27,
	WB_28 = 28,
	WB_29 = 29,
	WB_30 = 30,
	WB_31 = 31,
};
DECL_DLL inline void ClearToDefault(WeaponBits &e) { e = (WeaponBits)0; } ;
extern DECL_DLL CEntityPropertyEnumType ClasificationBits_enum;
enum ClasificationBits {
	CB_00 = 16,
	CB_01 = 17,
	CB_02 = 18,
	CB_03 = 19,
	CB_04 = 20,
	CB_05 = 21,
	CB_06 = 22,
	CB_07 = 23,
	CB_08 = 24,
	CB_09 = 25,
	CB_10 = 26,
	CB_11 = 27,
	CB_12 = 28,
	CB_13 = 29,
	CB_14 = 30,
	CB_15 = 31,
};
DECL_DLL inline void ClearToDefault(ClasificationBits &e) { e = (ClasificationBits)0; } ;
extern DECL_DLL CEntityPropertyEnumType VisibilityBits_enum;
enum VisibilityBits {
	VB_00 = 0,
	VB_01 = 1,
	VB_02 = 2,
	VB_03 = 3,
	VB_04 = 4,
	VB_05 = 5,
	VB_06 = 6,
	VB_07 = 7,
	VB_08 = 8,
	VB_09 = 9,
	VB_10 = 10,
	VB_11 = 11,
	VB_12 = 12,
	VB_13 = 13,
	VB_14 = 14,
	VB_15 = 15,
};
DECL_DLL inline void ClearToDefault(VisibilityBits &e) { e = (VisibilityBits)0; } ;
extern DECL_DLL CEntityPropertyEnumType ZoneBits_enum;
enum ZoneBits {
	ZONE_00 = 0,
	ZONE_01 = 1,
	ZONE_02 = 2,
	ZONE_03 = 3,
	ZONE_04 = 4,
	ZONE_05 = 5,
	ZONE_06 = 6,
	ZONE_07 = 7,
	ZONE_08 = 8,
	ZONE_09 = 9,
	ZONE_10 = 10,
	ZONE_11 = 11,
	ZONE_12 = 12,
	ZONE_13 = 13,
	ZONE_14 = 14,
	ZONE_15 = 15,
	ZONE_16 = 16,
	ZONE_17 = 17,
	ZONE_18 = 18,
	ZONE_19 = 19,
	ZONE_20 = 20,
	ZONE_21 = 21,
	ZONE_22 = 22,
	ZONE_23 = 23,
	ZONE_24 = 24,
	ZONE_25 = 25,
	ZONE_26 = 26,
	ZONE_27 = 27,
	ZONE_28 = 28,
	ZONE_29 = 29,
	ZONE_30 = 30,
	ZONE_31 = 31,
};
DECL_DLL inline void ClearToDefault(ZoneBits &e) { e = (ZoneBits)0; } ;
extern DECL_DLL CEntityPropertyEnumType ExtraBits_enum;
enum ExtraBits {
	Extra_00 = 0,
	Extra_01 = 1,
	Extra_02 = 2,
	Extra_03 = 3,
	Extra_04 = 4,
	Extra_05 = 5,
	Extra_06 = 6,
	Extra_07 = 7,
	Extra_08 = 8,
	Extra_09 = 9,
	Extra_10 = 10,
	Extra_11 = 11,
	Extra_12 = 12,
	Extra_13 = 13,
	Extra_14 = 14,
	Extra_15 = 15,
	Extra_16 = 16,
	Extra_17 = 17,
	Extra_18 = 18,
	Extra_19 = 19,
	Extra_20 = 20,
	Extra_21 = 21,
	Extra_22 = 22,
	Extra_23 = 23,
	Extra_24 = 24,
	Extra_25 = 25,
	Extra_26 = 26,
	Extra_27 = 27,
	Extra_28 = 28,
	Extra_29 = 29,
	Extra_30 = 30,
	Extra_31 = 31,
};
DECL_DLL inline void ClearToDefault(ExtraBits &e) { e = (ExtraBits)0; } ;
#define EVENTCODE_ESound 0x00000011
class DECL_DLL ESound : public CEntityEvent {
public:
	ESound();
	CEntityEvent *MakeCopy(void);
	BOOL CheckIDs(void);
	SLONG GetSizeOf(void);
	enum SoundType EsndtSound;
	CEntityPointer penTarget;
};
DECL_DLL inline void ClearToDefault(ESound &e) { e = ESound(); } ;
#define EVENTCODE_EScroll 0x00000012
class DECL_DLL EScroll : public CEntityEvent {
public:
	EScroll();
	CEntityEvent *MakeCopy(void);
	BOOL CheckIDs(void);
	SLONG GetSizeOf(void);
	BOOL bStart;
	CEntityPointer penSender;
};
DECL_DLL inline void ClearToDefault(EScroll &e) { e = EScroll(); } ;
#define EVENTCODE_ETextFX 0x00000013
class DECL_DLL ETextFX : public CEntityEvent {
public:
	ETextFX();
	CEntityEvent *MakeCopy(void);
	BOOL CheckIDs(void);
	SLONG GetSizeOf(void);
	BOOL bStart;
	CEntityPointer penSender;
};
DECL_DLL inline void ClearToDefault(ETextFX &e) { e = ETextFX(); } ;
#define EVENTCODE_EHudPicFX 0x00000014
class DECL_DLL EHudPicFX : public CEntityEvent {
public:
	EHudPicFX();
	CEntityEvent *MakeCopy(void);
	BOOL CheckIDs(void);
	SLONG GetSizeOf(void);
	BOOL bStart;
	CEntityPointer penSender;
};
DECL_DLL inline void ClearToDefault(EHudPicFX &e) { e = EHudPicFX(); } ;
#define EVENTCODE_ECredits 0x00000015
class DECL_DLL ECredits : public CEntityEvent {
public:
	ECredits();
	CEntityEvent *MakeCopy(void);
	BOOL CheckIDs(void);
	SLONG GetSizeOf(void);
	BOOL bStart;
	CEntityPointer penSender;
};
DECL_DLL inline void ClearToDefault(ECredits &e) { e = ECredits(); } ;
#define EVENTCODE_EVoiceMessage 0x00000016
class DECL_DLL EVoiceMessage : public CEntityEvent {
public:
	EVoiceMessage();
	CEntityEvent *MakeCopy(void);
	BOOL CheckIDs(void);
	SLONG GetSizeOf(void);
	CTFileName fnmMessage;
};
DECL_DLL inline void ClearToDefault(EVoiceMessage &e) { e = EVoiceMessage(); } ;
#define EVENTCODE_EHitBySpaceShipBeam 0x00000017
class DECL_DLL EHitBySpaceShipBeam : public CEntityEvent {
public:
	EHitBySpaceShipBeam();
	CEntityEvent *MakeCopy(void);
	BOOL CheckIDs(void);
	SLONG GetSizeOf(void);
};
DECL_DLL inline void ClearToDefault(EHitBySpaceShipBeam &e) { e = EHitBySpaceShipBeam(); } ;
extern "C" DECL_DLL CDLLEntityClass CGlobal_DLLClass;
class CGlobal : public CEntity {
public:
	DECL_DLL virtual void SetDefaultProperties(void);
#define  STATE_CGlobal_Main 1
	BOOL 
#line 397 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/Global.es"
Main(const CEntityEvent &__eeInput);
};
#endif // _Global_INCLUDED
