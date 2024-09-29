/*
 * This file is generated by Entity Class Compiler, (c) CroTeam 1997-98
 */

#ifndef _BackgroundViewer_INCLUDED
#define _BackgroundViewer_INCLUDED 1
#include <EntitiesMP/Marker.h>
#define EVENTCODE_ESetViewer 0x00d30000
class DECL_DLL ESetViewer : public CEntityEvent {
public:
	ESetViewer();
	CEntityEvent *MakeCopy(void);
	BOOL CheckIDs(void);
	SLONG GetSizeOf(void);
};
DECL_DLL inline void ClearToDefault(ESetViewer &e) { e = ESetViewer(); } ;
extern "C" DECL_DLL CDLLEntityClass CBackgroundViewer_DLLClass;
class CBackgroundViewer : public CMarker {
public:
virtual BOOL IsImportant(void) const { return TRUE; };
	DECL_DLL virtual void SetDefaultProperties(void);
	BOOL m_bActive;
	CEntityPointer m_penWorldSettingsController;
   
#line 27 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/BackgroundViewer.es"
BOOL IsTargetValid(SLONG slPropertyOffset,CEntity * penTarget);
   
#line 41 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/BackgroundViewer.es"
BOOL HandleEvent(const CEntityEvent & ee);
#define  STATE_CBackgroundViewer_Main 1
	BOOL 
#line 56 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/BackgroundViewer.es"
Main(const CEntityEvent &__eeInput);
};
#endif // _BackgroundViewer_INCLUDED
