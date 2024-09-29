/*
 * This file is generated by Entity Class Compiler, (c) CroTeam 1997-98
 */

#ifndef _PlayerView_INCLUDED
#define _PlayerView_INCLUDED 1
extern DECL_DLL CEntityPropertyEnumType ViewType_enum;
enum ViewType {
	VT_PLAYERDEATH = 0,
	VT_PLAYERREBIRTH = 1,
	VT_CAMERA = 2,
	VT_3RDPERSONVIEW = 3,
};
DECL_DLL inline void ClearToDefault(ViewType &e) { e = (ViewType)0; } ;
#define EVENTCODE_EViewInit 0x01930000
class DECL_DLL EViewInit : public CEntityEvent {
public:
	EViewInit();
	CEntityEvent *MakeCopy(void);
	BOOL CheckIDs(void);
	SLONG GetSizeOf(void);
	CEntityID eidOwner;
	CEntityID eidCamera;
	enum ViewType vtView;
	BOOL bDeathFixed;
};
DECL_DLL inline void ClearToDefault(EViewInit &e) { e = EViewInit(); } ;
extern "C" DECL_DLL CDLLEntityClass CPlayerView_DLLClass;
class DECL_DLL  CPlayerView : public CMovableEntity {
public:
virtual CEntity *GetPredictionPair(void) { return m_penPrediction; };
virtual void SetPredictionPair(CEntity *penPair) { m_penPrediction = penPair; };
virtual BOOL IsSentOverNet(void) const { return FALSE; };
	 virtual void SetDefaultProperties(void);
	CEntityPointer m_penOwner;
	INDEX m_iViewType;
	FLOAT m_fDistance;
	FLOAT3D m_vZLast;
	FLOAT3D m_vTargetLast;
	BOOL m_bFixed;
	FLOAT m_fCameraHeight;
	BOOL m_bInit;
	ANGLE m_aCurAngle;
	ANGLE m_aAccel;
	ANGLE m_aVelocity;
	COLOR m_PrevModelColor;
	BOOL m_bPrevModelColor;
	FLOAT m_fFaceChangeDistance;
	CEntityPointer m_penPrediction;
CPlacement3D m_FreePosition;
   
#line 124 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/PlayerView.es"
void PreMoving();
   
#line 125 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/PlayerView.es"
void DoMoving();
   
#line 129 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/PlayerView.es"
void PostMoving();
   
#line 154 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/PlayerView.es"
CPlacement3D GetLerpedPlacement(void)const;
   
#line 164 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/PlayerView.es"
void RenderParticles(void);
   
#line 172 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/PlayerView.es"
void UnlockRotate();
   
#line 180 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/PlayerView.es"
void SetCameraPositionEx();
   
#line 523 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/PlayerView.es"
void SetCameraFreeMode();
   
#line 599 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/PlayerView.es"
void SetCameraDecoMode();
   
#line 627 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/PlayerView.es"
void SetCameraPosition();
#define  STATE_CPlayerView_Main 1
	BOOL 
#line 902 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/PlayerView.es"
Main(const CEntityEvent &__eeInput);
	BOOL H0x01930001_Main_01(const CEntityEvent &__eeInput);
	BOOL H0x01930002_Main_02(const CEntityEvent &__eeInput);
};
#endif // _PlayerView_INCLUDED
