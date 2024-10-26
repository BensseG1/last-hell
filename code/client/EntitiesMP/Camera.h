/*
 * This file is generated by Entity Class Compiler, (c) CroTeam 1997-98
 */

#ifndef _Camera_INCLUDED
#define _Camera_INCLUDED 1
#include <EntitiesMP/Player.h>
#include <EntitiesMP/CameraMarker.h>
extern "C" DECL_DLL CDLLEntityClass CCamera_DLLClass;
class CCamera : public CMovableModelEntity {
public:
virtual const CTString &GetName(void) const { return m_strName; };
virtual BOOL IsTargetable(void) const { return TRUE; };
virtual BOOL IsImportant(void) const { return TRUE; };
	DECL_DLL virtual void SetDefaultProperties(void);
	FLOAT m_tmTime;
	FLOAT m_fFOV;
	FLOAT m_fLastFOV;
	CEntityPointer m_penTarget;
	CTString m_strName;
	CEntityPointer m_penOnBreak;
	BOOL m_bWideScreen;
	FLOAT m_tmAtMarker;
	FLOAT m_tmDelta;
	FLOAT3D m_vPNp0;
	FLOAT3D m_vPNp1;
	FLOAT3D m_vTNp0;
	FLOAT3D m_vTNp1;
	FLOAT m_fFOVp0;
	FLOAT m_fFOVp1;
	FLOAT m_fTFOVp0;
	FLOAT m_fTFOVp1;
	FLOATquat3D m_qPNp0;
	FLOATquat3D m_qPNp1;
	FLOATquat3D m_qANp0;
	FLOATquat3D m_qANp1;
	CEntityPointer m_penTargetOld;
	CEntityPointer m_penLast;
	CEntityPointer m_penPlayer;
	CTString m_strDescription;
	BOOL m_bStopMoving;
	COLOR m_colFade0;
	COLOR m_colFade1;
	BOOL m_bMoving;
	CEntityPointer m_penViewTarget0;
	CEntityPointer m_penViewTarget1;
	FLOAT3D m_vPosRatio0;
	FLOAT3D m_vPosRatio1;
	FLOAT m_fMyTimer;
	FLOAT m_fMyTimerLast;
	BOOL m_bIgnoreTimeStretch;
	BOOL m_bAutoRotation;
	FLOAT m_fStartHdg;
	FLOAT m_fRotateSpeed;
	FLOAT m_fRotateTime;
	FLOAT m_fRadX;
	FLOAT m_fHeight;
	FLOAT m_fRadZ;
	CEntityPointer m_penAutoCameraEndTarget;
	enum EventEType m_eetAutoCameraEndEvent;
	FLOAT3D m_vRelTargetOffset;
	BOOL m_bStopLerp;
	BOOL bPlayedCamera;
	CEntityPointer m_penActionTarget;
	BOOL m_bActive;
  
#line 82 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/Camera.es"
virtual void Read_t(CTStream * istr,BOOL bNetwork);
   
#line 91 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/Camera.es"
void RenderParticles(void);
   
#line 99 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/Camera.es"
BOOL MovesByTargetedRoute(CTString & strTargetProperty)const;
   
#line 106 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/Camera.es"
BOOL DropsMarker(CTFileName & fnmMarkerClass,CTString & strTargetProperty)const;
   
#line 114 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/Camera.es"
const CTString & GetDescription(void)const;
   
#line 124 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/Camera.es"
void GetAutoRotatePlacement(FLOAT tmCurrent,FLOAT3D & vPos,FLOATmatrix3D & mRot,
#line 125 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/Camera.es"
CPlacement3D & plNew,FLOAT3D vTarget)const;
   
#line 143 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/Camera.es"
CPlacement3D GetLerpedPlacement(void)const;
   
#line 203 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/Camera.es"
void CalcTargetedRotation(const FLOAT3D & vMyPos,CEntity * penViewTarget,
#line 204 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/Camera.es"
FLOAT3D vPosRatio,FLOATmatrix3D & mRotTarget,BOOL bLerping)const;
   
#line 216 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/Camera.es"
void PreMoving();
   
#line 225 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/Camera.es"
void DoMoving();
   
#line 497 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/Camera.es"
void PostMoving();
#define  STATE_CCamera_Main 1
	BOOL 
#line 517 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/Camera.es"
Main(const CEntityEvent &__eeInput);
	BOOL H0x00dc0000_Main_01(const CEntityEvent &__eeInput);
	BOOL H0x00dc0001_Main_02(const CEntityEvent &__eeInput);
	BOOL H0x00dc0002_Main_03(const CEntityEvent &__eeInput);
	BOOL H0x00dc0003_Main_04(const CEntityEvent &__eeInput);
	BOOL H0x00dc0004_Main_05(const CEntityEvent &__eeInput);
	BOOL H0x00dc0005_Main_06(const CEntityEvent &__eeInput);
	BOOL H0x00dc0006_Main_07(const CEntityEvent &__eeInput);
#define  STATE_CCamera_PlayStaticCamera 0x00dc0007
	BOOL 
#line 619 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/Camera.es"
PlayStaticCamera(const CEntityEvent &__eeInput);
	BOOL H0x00dc0008_PlayStaticCamera_01(const CEntityEvent &__eeInput);
	BOOL H0x00dc0009_PlayStaticCamera_02(const CEntityEvent &__eeInput);
#define  STATE_CCamera_PlayAutoRotatingCamera 0x00dc000a
	BOOL 
#line 649 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/Camera.es"
PlayAutoRotatingCamera(const CEntityEvent &__eeInput);
	BOOL H0x00dc000b_PlayAutoRotatingCamera_01(const CEntityEvent &__eeInput);
	BOOL H0x00dc000c_PlayAutoRotatingCamera_02(const CEntityEvent &__eeInput);
#define  STATE_CCamera_PlayMovingCamera 0x00dc000d
	BOOL 
#line 705 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/Camera.es"
PlayMovingCamera(const CEntityEvent &__eeInput);
	BOOL H0x00dc000e_PlayMovingCamera_01(const CEntityEvent &__eeInput);
	BOOL H0x00dc000f_PlayMovingCamera_02(const CEntityEvent &__eeInput);
#define  STATE_CCamera_PlayCamera 0x00dc0010
	BOOL 
#line 815 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/Camera.es"
PlayCamera(const CEntityEvent &__eeInput);
};
#endif // _Camera_INCLUDED
