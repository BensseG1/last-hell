/*
 * This file is generated by Entity Class Compiler, (c) CroTeam 1997-98
 */

#line 2 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/PointMarker.es"

#include "StdH.h"

#include <PointMarker.h>
#include <PointMarker_tables.h>
void CPointMarker::SetDefaultProperties(void) {
	m_fWaitTime = 0.0f;
	m_fMarkerRange = 0.0f;
	m_fPatrolAreaInner = 0.0f;
	m_fPatrolAreaOuter = 0.0f;
	m_fPatrolTime = 0.0f;
	m_betRunToMarker = BET_IGNORE ;
	m_betFly = BET_IGNORE ;
	m_betBlind = BET_IGNORE ;
	m_betDeaf = BET_IGNORE ;
	m_bStartTactics = FALSE ;
	CMarker::SetDefaultProperties();
}

#line 32 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/PointMarker.es"
BOOL CPointMarker::MovesByTargetedRoute(CTString & strTargetProperty)const {
#line 33 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/PointMarker.es"
strTargetProperty  = "Target";
#line 34 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/PointMarker.es"
return TRUE ;
#line 35 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/PointMarker.es"
}

#line 38 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/PointMarker.es"
BOOL CPointMarker::DropsMarker(CTFileName & fnmMarkerClass,CTString & strTargetProperty)const {
#line 39 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/PointMarker.es"
fnmMarkerClass  = CTFILENAME  ("Classes\\PointMarker.ecl");
#line 40 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/PointMarker.es"
strTargetProperty  = "Target";
#line 41 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/PointMarker.es"
return TRUE ;
#line 42 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/PointMarker.es"
}

#line 44 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/PointMarker.es"
BOOL CPointMarker::IsTargetValid(SLONG slPropertyOffset,CEntity * penTarget) 
#line 45 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/PointMarker.es"
{
#line 46 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/PointMarker.es"
if(slPropertyOffset  == offsetof  (CMarker  , m_penTarget )){
#line 47 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/PointMarker.es"
return IsOfClass  (penTarget  , & CPointMarker_DLLClass );
#line 48 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/PointMarker.es"
}
#line 49 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/PointMarker.es"
return CEntity  :: IsTargetValid  (slPropertyOffset  , penTarget );
#line 50 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/PointMarker.es"
}
BOOL CPointMarker::
#line 53 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/PointMarker.es"
Main(const CEntityEvent &__eeInput) {
#undef STATE_CURRENT
#define STATE_CURRENT STATE_CPointMarker_Main
	ASSERTMSG(__eeInput.ee_slEvent==EVENTCODE_EVoid, "CPointMarker::Main expects 'EVoid' as input!");	const EVoid &e = (const EVoid &)__eeInput;
#line 55 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/PointMarker.es"
InitAsModel  ();
#line 57 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/PointMarker.es"
SetPhysicsFlags  (EPF_MODEL_IMMATERIAL );
#line 58 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/PointMarker.es"
SetCollisionFlags  (ECF_IMMATERIAL );
#line 60 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/PointMarker.es"
if(m_strName  == "Marker"){
#line 61 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/PointMarker.es"
m_strName  = "Point Marker";
#line 62 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/PointMarker.es"
}
#line 65 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/PointMarker.es"
SetModel  (MODEL_MARKER );
#line 66 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/PointMarker.es"
SetModelMainTexture  (TEXTURE_MARKER );
#line 68 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/PointMarker.es"
GetModelObject  () -> StretchModel  (FLOAT3D (0.3f , 0.3f , 0.3f));
#line 70 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/PointMarker.es"
Return(STATE_CURRENT,EVoid());
#line 70 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/PointMarker.es"
return TRUE; ASSERT(FALSE); return TRUE;};