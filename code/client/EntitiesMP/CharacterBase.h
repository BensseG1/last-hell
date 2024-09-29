/*
 * This file is generated by Entity Class Compiler, (c) CroTeam 1997-98
 */

#ifndef _CharacterBase_INCLUDED
#define _CharacterBase_INCLUDED 1
#include <EntitiesMP/Player.h>
#include <EntitiesMP/BasicEffects.h>
#include <EntitiesMP/Projectile.h>
#include <EntitiesMP/Debris.h>
#include <EntitiesMP/EnemyMarker.h>
#include <EntitiesMP/MusicHolder.h>
#include <EntitiesMP/BloodSpray.h>
#include <EntitiesMP/Unit.h>
#define EVENTCODE_ECharReconsiderBehavior 0x04570000
class DECL_DLL ECharReconsiderBehavior : public CEntityEvent {
public:
	ECharReconsiderBehavior();
	CEntityEvent *MakeCopy(void);
	BOOL CheckIDs(void);
	SLONG GetSizeOf(void);
};
DECL_DLL inline void ClearToDefault(ECharReconsiderBehavior &e) { e = ECharReconsiderBehavior(); } ;
#define EVENTCODE_ECharForceWound 0x04570001
class DECL_DLL ECharForceWound : public CEntityEvent {
public:
	ECharForceWound();
	CEntityEvent *MakeCopy(void);
	BOOL CheckIDs(void);
	SLONG GetSizeOf(void);
};
DECL_DLL inline void ClearToDefault(ECharForceWound &e) { e = ECharForceWound(); } ;
#define EVENTCODE_ECharBaseDeath 0x04570002
class DECL_DLL ECharBaseDeath : public CEntityEvent {
public:
	ECharBaseDeath();
	CEntityEvent *MakeCopy(void);
	BOOL CheckIDs(void);
	SLONG GetSizeOf(void);
	CEntityID eidInflictor;
};
DECL_DLL inline void ClearToDefault(ECharBaseDeath &e) { e = ECharBaseDeath(); } ;
#define EVENTCODE_ECharBaseDamage 0x04570003
class DECL_DLL ECharBaseDamage : public CEntityEvent {
public:
	ECharBaseDamage();
	CEntityEvent *MakeCopy(void);
	BOOL CheckIDs(void);
	SLONG GetSizeOf(void);
	CEntityID eidInflictor;
	FLOAT3D vDirection;
	FLOAT3D vHitPoint;
	FLOAT fAmount;
	enum DamageType dmtType;
	FLOAT fHealth;
};
DECL_DLL inline void ClearToDefault(ECharBaseDamage &e) { e = ECharBaseDamage(); } ;
#define EVENTCODE_ECharBlowUp 0x04570004
class DECL_DLL ECharBlowUp : public CEntityEvent {
public:
	ECharBlowUp();
	CEntityEvent *MakeCopy(void);
	BOOL CheckIDs(void);
	SLONG GetSizeOf(void);
	FLOAT3D vDamage;
	FLOAT3D vTranslation;
};
DECL_DLL inline void ClearToDefault(ECharBlowUp &e) { e = ECharBlowUp(); } ;
extern "C" DECL_DLL CDLLEntityClass CCharacterBase_DLLClass;
class DECL_DLL  CCharacterBase : public CUnit {
public:
virtual const CTString &GetName(void) const { return m_strName; };
virtual BOOL IsTargetable(void) const { return TRUE; };
	 virtual void SetDefaultProperties(void);
	CEntityPointer m_penWatcher;
	FLOAT3D m_vStartPosition;
	CEntityPointer m_penEnemy;
	CTString m_strDescription;
	CTString m_strName;
	CSoundObject m_soSound;
	CEntityPointer m_penKillEnemy;
	FLOAT3D m_vDamage;
	FLOAT m_tmLastDamage;
	BOOL m_bRobotBlowup;
	FLOAT m_fBlowUpSize;
	CEntityPointer m_penPathMarker;
	FLOAT3D m_vPlayerSpotted;
	FLOAT m_fLockStartTime;
	FLOAT m_fRangeLast;
	BOOL m_bFadeOut;
	FLOAT m_fFadeStartTime;
	FLOAT m_fFadeTime;
	CEntityPointer m_penDeathTarget;
	enum EventEType m_eetDeathType;
	BOOL m_bTemplate;
	COLOR m_colColor;
	BOOL m_bDeaf;
	BOOL m_bBlind;
	FLOAT m_tmGiveUp;
	FLOAT m_tmReflexMin;
	FLOAT m_tmReflexMax;
	FLOAT m_fActivityRange;
	CEntityPointer m_penMarker;
	CEntityPointer m_penMainMusicHolder;
	FLOAT m_tmLastFussTime;
	FLOAT m_fSpiritStartTime;
	FLOAT m_tmSpraySpawned;
	FLOAT m_fSprayDamage;
	CEntityPointer m_penSpray;
	FLOAT m_fMaxDamageAmmount;
	FLOAT3D m_vLastStain;
	enum SprayParticlesType m_sptType;
	FLOAT3D m_vTacticsStartPosition;
	FLOAT m_fTacticVar3;
	FLOAT m_fTacticVar4;
	FLOAT m_fTacticVar5;
	COLOR m_colBurning;
	BOOL m_bResizeAttachments;
	FLOAT m_tmStopJumpAnim;
	BOOL m_bMoving;
	BOOL m_bRotate;
	INDEX m_iHitCnt;
	FLOAT m_fAttackStartTime;
	FLOAT m_fAttackFrequency;
	BOOL m_bStop;
	FLOAT m_fImpactTime;
	BOOL m_bPreSkilling;
	FLOAT3D vLastPosition;
	BOOL m_bPlayAction;
	BOOL m_bPlayProduce;
	BOOL m_bConsensus;
	BOOL m_bSpeedUp;
	FLOAT m_tmSeriousSpeed;
	BOOL m_bDeath;
	BOOL m_bIdleAnim;
	BOOL m_bPolymoph;
	BOOL m_bMobChange;
	BOOL m_bEvocating;
	BOOL m_bIsTransform;
	BOOL m_bConnectEffect;
	BOOL m_bOfTransforming;
	CEntityPointer m_penStillTarget;
CTextureObject m_pSkillTexture;
CEffectGroup * m_pAttachPlayerEffect;
CEffectGroup * m_pAttachEnemyEffect;
BOOL m_bHardcodingSkillLoop;
    CCharacterBase(void);
     ~ CCharacterBase(void);
  
#line 239 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
virtual CTString GetPlayerKillDescription(const CTString & strPlayerName,const EDeath & eDeath);
  
#line 246 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
virtual FLOAT GetCrushHealth(void);
  
#line 252 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
virtual FLOAT & GetProp(FLOAT & m_fBase);
   
#line 259 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
void MaybeSwitchToAnotherPlayer(void);
  
#line 288 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
virtual void MovementAnimation(ULONG ulFlags);
   
#line 335 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
void SetTargetNone(void);
   
#line 343 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
BOOL SetTargetSoft(CEntity * penPlayer);
   
#line 364 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
BOOL SetTargetHard(CEntity * penPlayer);
   
#line 385 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
BOOL SetTargetHardForce(CEntity * penPlayer);
   
#line 405 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
BOOL SetTargetEntity(CEntity * penPlayer);
   
#line 411 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
BOOL SetKillTargetEntity(CEntity * penKill);
   
#line 417 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
void SetNoTargetEntity(void);
   
#line 421 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
void AssignWatcher(CEntity * penWatcher);
   
#line 427 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
class CWatcher * GetWatcher(void);
   void Copy(CEntity & enOther,ULONG ulFlags);
   
#line 439 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
void Precache(void);
  
#line 464 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
virtual FLOAT3D PlayerDestinationPos(void);
   
#line 469 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
BOOL IfTargetCrushed(CEntity * penOther,const FLOAT3D & vDirection);
   
#line 486 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
BOOL MovesByTargetedRoute(CTString & strTargetProperty)const;
   
#line 491 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
BOOL DropsMarker(CTFileName & fnmMarkerClass,CTString & strTargetProperty)const;
   
#line 496 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
const CTString & GetDescription(void)const;
  
#line 504 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
virtual const CTFileName & GetComputerMessageName(void)const;
   
#line 510 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
void Read_t(CTStream * istr,BOOL bNetwork);
   
#line 520 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
BOOL FillEntityStatistics(EntityStats * pes);
   
#line 531 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
void ReceiveDamage(CEntity * penInflictor,enum DamageType dmtType,
#line 532 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
FLOAT fDamageAmmount,const FLOAT3D & vHitPoint,const FLOAT3D & vDirection);
   
#line 677 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
BOOL AdjustShadingParameters(FLOAT3D & vLightDirection,COLOR & colLight,COLOR & colAmbient);
   
#line 739 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
void AddToFuss(void);
   
#line 769 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
void RemoveFromFuss(void);
   
#line 784 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
BOOL ShouldCeaseAttack(void);
  
#line 803 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
virtual FLOAT GetAttackMoveFrequency(FLOAT fEnemyDistance);
  
#line 813 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
virtual void SetSpeedsToDesiredPosition(const FLOAT3D & vPosDelta,FLOAT fPosDist,BOOL bGoingToPlayer);
   
#line 878 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
BOOL CanAttackEnemy(CEntity * penTarget,FLOAT fCosAngle);
  
#line 888 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
virtual BOOL CanHitEnemy(CEntity * penTarget,FLOAT fCosAngle);
   
#line 896 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
BOOL SeeEntity(CEntity * pen,FLOAT fCosAngle);
   
#line 904 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
BOOL SeeEntityInPlane(CEntity * pen,FLOAT fCosAngle);
   
#line 912 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
BOOL WouldNotLeaveAttackRadius(void);
  
#line 927 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
virtual BOOL MayMoveToAttack(void);
  
#line 942 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
virtual BOOL ShouldBlowUp(void);
   
#line 955 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
void BlowUpBase(void);
  
#line 963 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
virtual void BlowUp(void);
  
#line 1040 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
virtual void LeaveStain(BOOL bGrow);
  
#line 1076 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
virtual void AdjustDifficulty(void);
   
#line 1096 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
void WoundedNotify(const ECharBaseDamage & eEBDamage);
   
#line 1115 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
void SeeNotify();
  
#line 1135 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
virtual void ChargeAnim(void);
  
#line 1136 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
virtual INDEX AnimForDamage(FLOAT fDamage);
  
#line 1137 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
virtual void BlowUpNotify(void);
  
#line 1138 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
virtual INDEX AnimForDeath(void);
  
#line 1139 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
virtual FLOAT WaitForDust(FLOAT3D & vStretch);
  
#line 1140 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
virtual void DeathNotify(void);
  
#line 1141 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
virtual void IdleSound(void);
  
#line 1142 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
virtual void SightSound(void);
  
#line 1143 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
virtual void WoundSound(void);
  
#line 1144 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
virtual void DeathSound(void);
  
#line 1145 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
virtual FLOAT GetLockRotationSpeed(void);
   
#line 1148 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
void RenderParticles(void);
  
#line 1203 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
virtual void EnemyPostInit(void);
  
#line 1204 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
virtual void PolymophEnd(void);
   
#line 1207 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
BOOL HandleEvent(const CEntityEvent & ee);
   
#line 1244 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
FLOAT GetAnimLength(int iAnim);
   
#line 1254 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
FLOAT GetCurrentAnimLength();
   
#line 1264 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
BOOL IsAnimFinished();
   
#line 1273 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
FLOAT3D & GetModelStretch();
   
#line 1283 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
void StretchModel(FLOAT3D vStretch);
   
#line 1293 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
void StretchSingleModel(FLOAT3D vStretch);
   
#line 1304 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
SLONG GetUsedMemory(void);
   
#line 1316 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
void SpawnBlood_client(ECharBaseDamage eEBDamage);
   
#line 1382 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
void DeathNow();
   
#line 1403 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
void MoveNow();
   
#line 1418 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
void AttackNow();
   
#line 1433 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
void StopNow();
   
#line 1448 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
void StopandTeleport();
   
#line 1477 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
void SkillNow();
   
#line 1492 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
void PreSkillNow();
   
#line 1507 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
void ActionNow();
   
#line 1524 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
void ProduceNow();
   
#line 1541 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
void ConsensusNow();
   
#line 1559 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
void StopProduce();
   
#line 1577 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
void PolymophNow();
   
#line 1597 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
void EvocateNow();
   
#line 1616 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
void Rebirth();
#define  STATE_CCharacterBase_Main 1
	BOOL 
#line 1632 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
Main(const CEntityEvent &__eeInput);
#define  STATE_CCharacterBase_NewEnemySpotted 0x04570005
	BOOL 
#line 1641 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
NewEnemySpotted(const CEntityEvent &__eeInput);
	BOOL H0x04570006_NewEnemySpotted_01(const CEntityEvent &__eeInput);
	BOOL H0x04570007_NewEnemySpotted_02(const CEntityEvent &__eeInput);
	BOOL H0x04570008_NewEnemySpotted_03(const CEntityEvent &__eeInput);
#define  STATE_CCharacterBase_StopAttack 0x04570009
	BOOL 
#line 1677 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
StopAttack(const CEntityEvent &__eeInput);
#define  STATE_CCharacterBase_InitializeAttack 0x0457000a
	BOOL 
#line 1692 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
InitializeAttack(const CEntityEvent &__eeInput);
#define  STATE_CCharacterBase_AttackEnemy 0x0457000b
	BOOL 
#line 1718 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
AttackEnemy(const CEntityEvent &__eeInput);
	BOOL H0x0457000c_AttackEnemy_01(const CEntityEvent &__eeInput);
	BOOL H0x0457000d_AttackEnemy_02(const CEntityEvent &__eeInput);
	BOOL H0x0457000e_AttackEnemy_03(const CEntityEvent &__eeInput);
	BOOL H0x0457000f_AttackEnemy_04(const CEntityEvent &__eeInput);
	BOOL H0x04570010_AttackEnemy_05(const CEntityEvent &__eeInput);
	BOOL H0x04570011_AttackEnemy_06(const CEntityEvent &__eeInput);
	BOOL H0x04570012_AttackEnemy_07(const CEntityEvent &__eeInput);
	BOOL H0x04570013_AttackEnemy_08(const CEntityEvent &__eeInput);
#define  STATE_CCharacterBase_PerformAttack 0x04570014
	BOOL 
#line 1736 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
PerformAttack(const CEntityEvent &__eeInput);
	BOOL H0x04570015_PerformAttack_01(const CEntityEvent &__eeInput);
	BOOL H0x04570016_PerformAttack_02(const CEntityEvent &__eeInput);
	BOOL H0x04570017_PerformAttack_03(const CEntityEvent &__eeInput);
	BOOL H0x04570018_PerformAttack_04(const CEntityEvent &__eeInput);
#define  STATE_CCharacterBase_FireOrHit 0x04570019
	BOOL 
#line 1893 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
FireOrHit(const CEntityEvent &__eeInput);
	BOOL H0x0457001a_FireOrHit_01(const CEntityEvent &__eeInput);
	BOOL H0x0457001b_FireOrHit_02(const CEntityEvent &__eeInput);
	BOOL H0x0457001c_FireOrHit_03(const CEntityEvent &__eeInput);
	BOOL H0x0457001d_FireOrHit_04(const CEntityEvent &__eeInput);
	BOOL H0x0457001e_FireOrHit_05(const CEntityEvent &__eeInput);
	BOOL H0x0457001f_FireOrHit_06(const CEntityEvent &__eeInput);
	BOOL H0x04570020_FireOrHit_07(const CEntityEvent &__eeInput);
	BOOL H0x04570021_FireOrHit_08(const CEntityEvent &__eeInput);
#define  STATE_CCharacterBase_Hit 0x04570022
	BOOL 
#line 1938 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
Hit(const CEntityEvent &__eeInput);
#define  STATE_CCharacterBase_Fire 0x04570023
	BOOL 
#line 1944 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
Fire(const CEntityEvent &__eeInput);
#define  STATE_CCharacterBase_BeWounded 0x04570024
	BOOL 
#line 1958 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
BeWounded(const CEntityEvent &__eeInput);
#define  STATE_CCharacterBase_Die 0x04570025
	BOOL 
#line 1972 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
Die(const CEntityEvent &__eeInput);
	BOOL H0x04570026_Die_01(const CEntityEvent &__eeInput);
	BOOL H0x04570027_Die_02(const CEntityEvent &__eeInput);
#define  STATE_CCharacterBase_Death 0x04570028
	BOOL 
#line 2099 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
Death(const CEntityEvent &__eeInput);
	BOOL H0x04570029_Death_01(const CEntityEvent &__eeInput);
	BOOL H0x0457002a_Death_02(const CEntityEvent &__eeInput);
#define  STATE_CCharacterBase_DeathSequence 0x0457002b
	BOOL 
#line 2136 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
DeathSequence(const CEntityEvent &__eeInput);
	BOOL H0x0457002c_DeathSequence_01(const CEntityEvent &__eeInput);
	BOOL H0x0457002d_DeathSequence_02(const CEntityEvent &__eeInput);
	BOOL H0x0457002e_DeathSequence_03(const CEntityEvent &__eeInput);
	BOOL H0x0457002f_DeathSequence_04(const CEntityEvent &__eeInput);
	BOOL H0x04570030_DeathSequence_05(const CEntityEvent &__eeInput);
	BOOL H0x04570031_DeathSequence_06(const CEntityEvent &__eeInput);
	BOOL H0x04570032_DeathSequence_07(const CEntityEvent &__eeInput);
	BOOL H0x04570033_DeathSequence_08(const CEntityEvent &__eeInput);
#define  STATE_CCharacterBase_Active 0x04570034
	BOOL 
#line 2184 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
Active(const CEntityEvent &__eeInput);
	BOOL H0x04570035_Active_01(const CEntityEvent &__eeInput);
	BOOL H0x04570036_Active_02(const CEntityEvent &__eeInput);
#define  STATE_CCharacterBase_Inactive 0x04570037
	BOOL 
#line 2353 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
Inactive(const CEntityEvent &__eeInput);
	BOOL H0x04570038_Inactive_01(const CEntityEvent &__eeInput);
	BOOL H0x04570039_Inactive_02(const CEntityEvent &__eeInput);
#define  STATE_CCharacterBase_PreMainLoop 0x0457003a
	BOOL 
#line 2432 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
PreMainLoop(const CEntityEvent &__eeInput);
#define  STATE_CCharacterBase_MainLoop_internal 0x0457003b
	BOOL 
#line 2437 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
MainLoop_internal(const CEntityEvent &__eeInput);
	BOOL H0x0457003c_MainLoop_internal_01(const CEntityEvent &__eeInput);
	BOOL H0x0457003d_MainLoop_internal_02(const CEntityEvent &__eeInput);
	BOOL H0x0457003e_MainLoop_internal_03(const CEntityEvent &__eeInput);
	BOOL H0x0457003f_MainLoop_internal_04(const CEntityEvent &__eeInput);
#define  STATE_CCharacterBase_MainLoop 0x04570040
	BOOL 
#line 2505 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
MainLoop(const CEntityEvent &__eeInput);
#define  STATE_CCharacterBase_StandardBehavior 0x04570041
	BOOL 
#line 2515 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
StandardBehavior(const CEntityEvent &__eeInput);
	BOOL H0x04570042_StandardBehavior_01(const CEntityEvent &__eeInput);
	BOOL H0x04570043_StandardBehavior_02(const CEntityEvent &__eeInput);
#define  STATE_CCharacterBase_AttackTarget 0x04570044
	BOOL 
#line 2585 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
AttackTarget(const CEntityEvent &__eeInput);
#define  STATE_CCharacterBase_SkillingTarget 0x04570045
	BOOL 
#line 2590 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
SkillingTarget(const CEntityEvent &__eeInput);
#define  STATE_CCharacterBase_SpellSkill 0x04570046
	BOOL 
#line 2595 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
SpellSkill(const CEntityEvent &__eeInput);
#define  STATE_CCharacterBase_ActionAnimation 0x04570047
	BOOL 
#line 2600 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
ActionAnimation(const CEntityEvent &__eeInput);
#define  STATE_CCharacterBase_ProduceAnimation 0x04570048
	BOOL 
#line 2607 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
ProduceAnimation(const CEntityEvent &__eeInput);
#define  STATE_CCharacterBase_ConsensusAnimation 0x04570049
	BOOL 
#line 2615 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
ConsensusAnimation(const CEntityEvent &__eeInput);
#define  STATE_CCharacterBase_Polymoph 0x0457004a
	BOOL 
#line 2622 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
Polymoph(const CEntityEvent &__eeInput);
#define  STATE_CCharacterBase_Evocate 0x0457004b
	BOOL 
#line 2628 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
Evocate(const CEntityEvent &__eeInput);
#define  STATE_CCharacterBase_StopMovement 0x0457004c
	BOOL 
#line 2634 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
StopMovement(const CEntityEvent &__eeInput);
#define  STATE_CCharacterBase_MovetoPoint 0x0457004d
	BOOL 
#line 2647 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/CharacterBase.es"
MovetoPoint(const CEntityEvent &__eeInput);
	BOOL H0x0457004e_MovetoPoint_01(const CEntityEvent &__eeInput);
	BOOL H0x0457004f_MovetoPoint_02(const CEntityEvent &__eeInput);
	BOOL H0x04570050_MovetoPoint_03(const CEntityEvent &__eeInput);
	BOOL H0x04570051_MovetoPoint_04(const CEntityEvent &__eeInput);
};
#endif // _CharacterBase_INCLUDED