/*
 * This file is generated by Entity Class Compiler, (c) CroTeam 1997-98
 */

#ifndef _NavigationMarker_INCLUDED
#define _NavigationMarker_INCLUDED 1
#include <EntitiesMP/Marker.h>
extern "C" DECL_DLL CDLLEntityClass CNavigationMarker_DLLClass;
class DECL_DLL  CNavigationMarker : public CEntity {
public:
virtual const CTString &GetName(void) const { return m_strName; };
virtual BOOL IsTargetable(void) const { return TRUE; };
	 virtual void SetDefaultProperties(void);
	CTString m_strName;
	RANGE m_fMarkerRange;
	CEntityPointer m_penTarget0;
	CEntityPointer m_penTarget1;
	CEntityPointer m_penTarget2;
	CEntityPointer m_penTarget3;
	CEntityPointer m_penTarget4;
	CEntityPointer m_penTarget5;
CPathNode * m_ppnNode;
    CNavigationMarker(void);
     ~ CNavigationMarker(void);
   
#line 56 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/NavigationMarker.es"
void Read_t(CTStream * istr,BOOL bNetwork);
   
#line 62 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/NavigationMarker.es"
CEntity * GetTarget(void)const;
   
#line 65 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/NavigationMarker.es"
void * GetEntityInfo(void);
   
#line 70 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/NavigationMarker.es"
CPathNode * GetPathNode(void);
   
#line 79 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/NavigationMarker.es"
CEntityPointer & TargetPointer(INDEX i);
   
#line 84 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/NavigationMarker.es"
CNavigationMarker & Target(INDEX i);
   
#line 90 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/NavigationMarker.es"
CNavigationMarker * GetLink(INDEX i);
   
#line 104 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/NavigationMarker.es"
const CTString & GetDescription(void)const;
   
#line 109 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/NavigationMarker.es"
BOOL MovesByTargetedRoute(CTString & strTargetProperty)const;
   
#line 114 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/NavigationMarker.es"
BOOL DropsMarker(CTFileName & fnmMarkerClass,CTString & strTargetProperty)const;
  
#line 120 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/NavigationMarker.es"
virtual BOOL IsMarker(void)const;
#define  STATE_CNavigationMarker_Main 1
	BOOL 
#line 125 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/NavigationMarker.es"
Main(const CEntityEvent &__eeInput);
};
#endif // _NavigationMarker_INCLUDED
