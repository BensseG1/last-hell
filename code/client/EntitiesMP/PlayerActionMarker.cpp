/*
 * This file is generated by Entity Class Compiler, (c) CroTeam 1997-98
 */

#line 2 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/PlayerActionMarker.es"

#include "StdH.h"

#include <PlayerActionMarker.h>
#include <PlayerActionMarker_tables.h>
void CPlayerActionMarker::SetDefaultProperties(void) {
	m_paaAction = PAA_RUN ;
	m_tmWait = 0.0f;
	m_penDoorController = NULL;
	m_penTrigger = NULL;
	m_fSpeed = 1.0f;
	m_penItem = NULL;
	CMarker::SetDefaultProperties();
}

#line 57 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/PlayerActionMarker.es"
const CTString & CPlayerActionMarker::GetDescription(void)const {
#line 58 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/PlayerActionMarker.es"
CTString strAction  = PlayerAutoAction_enum  . NameForValue  (INDEX (m_paaAction ));
#line 59 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/PlayerActionMarker.es"
if(m_penTarget  == NULL ){
#line 60 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/PlayerActionMarker.es"
((CTString &) m_strDescription ) . PrintF  ("%s (%s)-><none>" , m_strName  , strAction );
#line 61 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/PlayerActionMarker.es"
}else {
#line 62 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/PlayerActionMarker.es"
((CTString &) m_strDescription ) . PrintF  ("%s (%s)->%s" , m_strName  , strAction  , 
#line 63 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/PlayerActionMarker.es"
m_penTarget  -> GetName  ());
#line 64 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/PlayerActionMarker.es"
}
#line 65 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/PlayerActionMarker.es"
return m_strDescription ;
#line 66 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/PlayerActionMarker.es"
}

#line 69 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/PlayerActionMarker.es"
BOOL CPlayerActionMarker::DropsMarker(CTFileName & fnmMarkerClass,CTString & strTargetProperty)const {
#line 70 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/PlayerActionMarker.es"
fnmMarkerClass  = CTFILENAME  ("Classes\\PlayerActionMarker.ecl");
#line 71 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/PlayerActionMarker.es"
strTargetProperty  = "Target";
#line 72 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/PlayerActionMarker.es"
return TRUE ;
#line 73 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/PlayerActionMarker.es"
}

#line 76 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/PlayerActionMarker.es"
BOOL CPlayerActionMarker::HandleEvent(const CEntityEvent & ee) 
#line 77 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/PlayerActionMarker.es"
{
#line 79 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/PlayerActionMarker.es"
if(ee  . ee_slEvent  == EVENTCODE_ETrigger ){
#line 80 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/PlayerActionMarker.es"
ETrigger  & eTrigger  = (ETrigger  &) ee ;
#line 82 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/PlayerActionMarker.es"
if(IsDerivedFromClass  (eTrigger  . penCaused  , "Player")){
#line 84 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/PlayerActionMarker.es"
EAutoAction  eAutoAction ;
#line 85 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/PlayerActionMarker.es"
eAutoAction  . eidFirstMarker  = this ;
#line 86 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/PlayerActionMarker.es"
eTrigger  . penCaused  -> SendEvent  (eAutoAction );
#line 87 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/PlayerActionMarker.es"
}
#line 88 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/PlayerActionMarker.es"
return TRUE ;
#line 89 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/PlayerActionMarker.es"
}
#line 90 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/PlayerActionMarker.es"
return FALSE ;
#line 91 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/PlayerActionMarker.es"
}
BOOL CPlayerActionMarker::
#line 95 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/PlayerActionMarker.es"
Main(const CEntityEvent &__eeInput) {
#undef STATE_CURRENT
#define STATE_CURRENT STATE_CPlayerActionMarker_Main
	ASSERTMSG(__eeInput.ee_slEvent==EVENTCODE_EVoid, "CPlayerActionMarker::Main expects 'EVoid' as input!");	const EVoid &e = (const EVoid &)__eeInput;
#line 97 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/PlayerActionMarker.es"
InitAsEditorModel  ();
#line 98 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/PlayerActionMarker.es"
SetPhysicsFlags  (EPF_MODEL_IMMATERIAL );
#line 99 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/PlayerActionMarker.es"
SetCollisionFlags  (ECF_IMMATERIAL );
#line 102 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/PlayerActionMarker.es"
SetModel  (MODEL_MARKER );
#line 103 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/PlayerActionMarker.es"
SetModelMainTexture  (TEXTURE_MARKER );
#line 105 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/PlayerActionMarker.es"
m_tmWait  = ClampDn  (m_tmWait  , 0.05f);
#line 107 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/PlayerActionMarker.es"
Return(STATE_CURRENT,EVoid());
#line 107 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/PlayerActionMarker.es"
return TRUE; ASSERT(FALSE); return TRUE;};