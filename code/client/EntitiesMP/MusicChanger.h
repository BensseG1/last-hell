/*
 * This file is generated by Entity Class Compiler, (c) CroTeam 1997-98
 */

#ifndef _MusicChanger_INCLUDED
#define _MusicChanger_INCLUDED 1
#include <EntitiesMP/MusicHolder.h>
#define EVENTCODE_EMusicChangerTrigger 0x00f60000
class DECL_DLL EMusicChangerTrigger : public CEntityEvent {
public:
	EMusicChangerTrigger();
	CEntityEvent *MakeCopy(void);
	BOOL CheckIDs(void);
	SLONG GetSizeOf(void);
};
DECL_DLL inline void ClearToDefault(EMusicChangerTrigger &e) { e = EMusicChangerTrigger(); } ;
extern "C" DECL_DLL CDLLEntityClass CMusicChanger_DLLClass;
class CMusicChanger : public CRationalEntity {
public:
virtual const CTString &GetName(void) const { return m_strName; };
virtual const CTString &GetDescription(void) const { return m_strDescription; };
virtual BOOL IsTargetable(void) const { return TRUE; };
virtual BOOL IsImportant(void) const { return TRUE; };
	DECL_DLL virtual void SetDefaultProperties(void);
	CTString m_strName;
	CTString m_strDescription;
	CTFileName m_fnMusic;
	FLOAT m_fVolume;
	enum MusicType m_mtType;
	BOOL m_bForceStart;
CAutoPrecacheSound m_aps;
   
#line 36 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/MusicChanger.es"
void Precache(void);
#define  STATE_CMusicChanger_Main 1
	BOOL 
#line 45 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/MusicChanger.es"
Main(const CEntityEvent &__eeInput);
	BOOL H0x00f60001_Main_01(const CEntityEvent &__eeInput);
	BOOL H0x00f60002_Main_02(const CEntityEvent &__eeInput);
	BOOL H0x00f60003_Main_03(const CEntityEvent &__eeInput);
	BOOL H0x00f60004_Main_04(const CEntityEvent &__eeInput);
};
#endif // _MusicChanger_INCLUDED
