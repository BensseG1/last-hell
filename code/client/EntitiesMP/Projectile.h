/*
 * This file is generated by Entity Class Compiler, (c) CroTeam 1997-98
 */

#ifndef _Projectile_INCLUDED
#define _Projectile_INCLUDED 1
#include <EntitiesMP/BasicEffects.h>
#include <EntitiesMP/Light.h>
#include <EntitiesMP/Flame.h>
extern DECL_DLL CEntityPropertyEnumType ProjectileType_enum;
enum ProjectileType {
	PRT_FLAME = 2,
	PRT_ICEMAN_FIRE = 27,
	PRT_ICEMAN_BIG_FIRE = 28,
	PRT_ICEMAN_LARGE_FIRE = 29,
	PRT_HUANMAN_FIRE = 41,
};
DECL_DLL inline void ClearToDefault(ProjectileType &e) { e = (ProjectileType)0; } ;
extern DECL_DLL CEntityPropertyEnumType ProjectileMovingType_enum;
enum ProjectileMovingType {
	PMT_FLYING = 0,
	PMT_SLIDING = 1,
	PMT_GUIDED = 2,
	PMT_GUIDED_FAST = 3,
	PMT_FLYING_REBOUNDING = 4,
	PMT_GUIDED_SLIDING = 5,
};
DECL_DLL inline void ClearToDefault(ProjectileMovingType &e) { e = (ProjectileMovingType)0; } ;
#define EVENTCODE_ELaunchProjectile 0x01f50000
class DECL_DLL ELaunchProjectile : public CEntityEvent {
public:
	ELaunchProjectile();
	CEntityEvent *MakeCopy(void);
	BOOL CheckIDs(void);
	SLONG GetSizeOf(void);
	CEntityID eidLauncher;
	enum ProjectileType prtType;
	FLOAT fSpeed;
	FLOAT fStretch;
};
DECL_DLL inline void ClearToDefault(ELaunchProjectile &e) { e = ELaunchProjectile(); } ;
#define EVENTCODE_EExplode 0x01f50001
class DECL_DLL EExplode : public CEntityEvent {
public:
	EExplode();
	CEntityEvent *MakeCopy(void);
	BOOL CheckIDs(void);
	SLONG GetSizeOf(void);
	FLOAT3D vPosition;
};
DECL_DLL inline void ClearToDefault(EExplode &e) { e = EExplode(); } ;
#define EVENTCODE_ESpawnFlame 0x01f50002
class DECL_DLL ESpawnFlame : public CEntityEvent {
public:
	ESpawnFlame();
	CEntityEvent *MakeCopy(void);
	BOOL CheckIDs(void);
	SLONG GetSizeOf(void);
	CEntityID eidLauncher;
	CEntityID eidAttach;
	FLOAT3D vPos;
};
DECL_DLL inline void ClearToDefault(ESpawnFlame &e) { e = ESpawnFlame(); } ;
extern "C" DECL_DLL CDLLEntityClass CProjectile_DLLClass;
class DECL_DLL  CProjectile : public CMovableModelEntity {
public:
virtual CEntity *GetPredictionPair(void) { return m_penPrediction; };
virtual void SetPredictionPair(CEntity *penPair) { m_penPrediction = penPair; };
	 virtual void SetDefaultProperties(void);
	CEntityPointer m_penLauncher;
	enum ProjectileType m_prtType;
	enum ProjectileMovingType m_pmtMove;
	CEntityPointer m_penParticles;
	CEntityPointer m_penTarget;
	CEntityPointer m_penLastDamaged;
	FLOAT m_fSpeed;
	FLOAT m_fIgnoreTime;
	FLOAT m_fFlyTime;
	FLOAT m_fStartTime;
	FLOAT m_fDamageAmount;
	FLOAT m_fRangeDamageAmount;
	FLOAT m_fDamageHotSpotRange;
	FLOAT m_fDamageFallOffRange;
	FLOAT m_fSoundRange;
	BOOL m_bExplode;
	BOOL m_bLightSource;
	BOOL m_bCanHitHimself;
	BOOL m_bCanBeDestroyed;
	FLOAT m_fWaitAfterDeath;
	FLOAT m_aRotateSpeed;
	FLOAT m_tmExpandBox;
	FLOAT m_tmInvisibility;
	INDEX m_iRebounds;
	FLOAT m_fStretch;
	CSoundObject m_soEffect;
	CSoundObject m_soExplosion;
	FLOAT m_fGuidedMaxSpeedFactor;
	BOOL bLockedOn;
	BOOL m_bLeftFlame;
	INDEX m_iLauncherID;
	CEntityPointer m_penPrediction;
CLightSource m_lsLightSource;
  
#line 665 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/Projectile.es"
virtual void InitializeFromNet();
   
#line 684 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/Projectile.es"
void PreMoving(void);
   
#line 695 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/Projectile.es"
void PostMoving(void);
   
#line 712 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/Projectile.es"
void Read_t(CTStream * istr,BOOL bNetwork);
   
#line 722 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/Projectile.es"
CLightSource * GetLightSource(void);
   void Copy(CEntity & enOther,ULONG ulFlags);
   
#line 737 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/Projectile.es"
BOOL AdjustShadingParameters(FLOAT3D & vLightDirection,COLOR & colLight,COLOR & colAmbient);
   
#line 756 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/Projectile.es"
void SetupLightSource(BOOL bLive);
   
#line 904 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/Projectile.es"
void RenderParticles(void);
   
#line 2490 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/Projectile.es"
void LavaBall(void);
   
#line 2516 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/Projectile.es"
void LavaBallExplosion(void);
   
#line 3069 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/Projectile.es"
void AfterburnerDebris(void);
   
#line 3101 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/Projectile.es"
void ProjectileTouch(CEntityPointer penHit);
   
#line 3182 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/Projectile.es"
void ProjectileHit(void);
   
#line 3202 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/Projectile.es"
void SpawnEffect(const CPlacement3D & plEffect,const ESpawnEffect & eSpawnEffect);
   
#line 3212 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/Projectile.es"
void BounceSound(void);
   
#line 3231 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/Projectile.es"
ANGLE GetRotationSpeed(ANGLE aWantedAngle,ANGLE aRotateSpeed,FLOAT fWaitFrequency);
   
#line 3256 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/Projectile.es"
void ReceiveDamage(CEntity * penInflictor,enum DamageType dmtType,
#line 3257 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/Projectile.es"
FLOAT fDamageAmmount,const FLOAT3D & vHitPoint,const FLOAT3D & vDirection);
#define  STATE_CProjectile_Main 1
	BOOL 
#line 3281 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/Projectile.es"
Main(const CEntityEvent &__eeInput);
	BOOL H0x01f50003_Main_01(const CEntityEvent &__eeInput);
	BOOL H0x01f50004_Main_02(const CEntityEvent &__eeInput);
	BOOL H0x01f50005_Main_03(const CEntityEvent &__eeInput);
	BOOL H0x01f50006_Main_04(const CEntityEvent &__eeInput);
	BOOL H0x01f50007_Main_05(const CEntityEvent &__eeInput);
#define  STATE_CProjectile_ProjectileFly 0x01f50008
	BOOL 
#line 3469 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/Projectile.es"
ProjectileFly(const CEntityEvent &__eeInput);
	BOOL H0x01f50009_ProjectileFly_01(const CEntityEvent &__eeInput);
	BOOL H0x01f5000a_ProjectileFly_02(const CEntityEvent &__eeInput);
#define  STATE_CProjectile_ProjectileGuidedFly 0x01f5000b
	BOOL 
#line 3538 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/Projectile.es"
ProjectileGuidedFly(const CEntityEvent &__eeInput);
	BOOL H0x01f5000c_ProjectileGuidedFly_01(const CEntityEvent &__eeInput);
	BOOL H0x01f5000d_ProjectileGuidedFly_02(const CEntityEvent &__eeInput);
	BOOL H0x01f5000e_ProjectileGuidedFly_03(const CEntityEvent &__eeInput);
	BOOL H0x01f5000f_ProjectileGuidedFly_04(const CEntityEvent &__eeInput);
#define  STATE_CProjectile_ProjectileGuidedFastFly 0x01f50010
	BOOL 
#line 3654 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/Projectile.es"
ProjectileGuidedFastFly(const CEntityEvent &__eeInput);
	BOOL H0x01f50011_ProjectileGuidedFastFly_01(const CEntityEvent &__eeInput);
	BOOL H0x01f50012_ProjectileGuidedFastFly_02(const CEntityEvent &__eeInput);
	BOOL H0x01f50013_ProjectileGuidedFastFly_03(const CEntityEvent &__eeInput);
	BOOL H0x01f50014_ProjectileGuidedFastFly_04(const CEntityEvent &__eeInput);
#define  STATE_CProjectile_ProjectileGuidedSlide 0x01f50015
	BOOL 
#line 3802 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/Projectile.es"
ProjectileGuidedSlide(const CEntityEvent &__eeInput);
	BOOL H0x01f50016_ProjectileGuidedSlide_01(const CEntityEvent &__eeInput);
	BOOL H0x01f50017_ProjectileGuidedSlide_02(const CEntityEvent &__eeInput);
	BOOL H0x01f50018_ProjectileGuidedSlide_03(const CEntityEvent &__eeInput);
	BOOL H0x01f50019_ProjectileGuidedSlide_04(const CEntityEvent &__eeInput);
#define  STATE_CProjectile_ProjectileSlide 0x01f5001a
	BOOL 
#line 3906 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/Projectile.es"
ProjectileSlide(const CEntityEvent &__eeInput);
	BOOL H0x01f5001b_ProjectileSlide_01(const CEntityEvent &__eeInput);
	BOOL H0x01f5001c_ProjectileSlide_02(const CEntityEvent &__eeInput);
#define  STATE_CProjectile_ProjectileFlyRebounding 0x01f5001d
	BOOL 
#line 4018 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/Projectile.es"
ProjectileFlyRebounding(const CEntityEvent &__eeInput);
	BOOL H0x01f5001e_ProjectileFlyRebounding_01(const CEntityEvent &__eeInput);
	BOOL H0x01f5001f_ProjectileFlyRebounding_02(const CEntityEvent &__eeInput);
};
#endif // _Projectile_INCLUDED
