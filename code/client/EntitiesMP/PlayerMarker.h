/*
 * This file is generated by Entity Class Compiler, (c) CroTeam 1997-98
 */

#ifndef _PlayerMarker_INCLUDED
#define _PlayerMarker_INCLUDED 1
#include <EntitiesMP/Marker.h>
#define EVENTCODE_ETriggerPlayerMarker 0x01940000
class DECL_DLL ETriggerPlayerMarker : public CEntityEvent {
public:
	ETriggerPlayerMarker();
	CEntityEvent *MakeCopy(void);
	BOOL CheckIDs(void);
	SLONG GetSizeOf(void);
	CEntityID eidCaused;
};
DECL_DLL inline void ClearToDefault(ETriggerPlayerMarker &e) { e = ETriggerPlayerMarker(); } ;
extern "C" DECL_DLL CDLLEntityClass CPlayerMarker_DLLClass;
class CPlayerMarker : public CMarker {
public:
virtual BOOL IsImportant(void) const { return TRUE; };
	DECL_DLL virtual void SetDefaultProperties(void);
	FLOAT m_fHealth;
	FLOAT m_fShield;
	INDEX m_iGiveWeapons;
	INDEX m_iTakeWeapons;
	CTString m_strGroup;
	BOOL m_bQuickStart;
	BOOL m_bStartInComputer;
	BOOL m_bStartInComputerOnce;
	CEntityPointer m_penMessage;
	FLOAT m_fMaxAmmoRatio;
	FLOAT m_tmLastSpawned;
	INDEX m_iTakeAmmo;
	BOOL m_bNoRespawnInPlace;
   
#line 43 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/PlayerMarker.es"
void Precache(void);
   
#line 48 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/PlayerMarker.es"
BOOL HandleEvent(const CEntityEvent & ee);
#define  STATE_CPlayerMarker_Main 1
	BOOL 
#line 90 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/PlayerMarker.es"
Main(const CEntityEvent &__eeInput);
};
#endif // _PlayerMarker_INCLUDED
