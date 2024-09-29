/*
 * This file is generated by Entity Class Compiler, (c) CroTeam 1997-98
 */

#line 2 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MovingBrushMarker.es"

#include "StdH.h"

#include <MovingBrushMarker.h>
#include <MovingBrushMarker_tables.h>
void CMovingBrushMarker::SetDefaultProperties(void) {
	m_bInverseRotate = FALSE ;
	m_fSpeed = -1.0f;
	m_fWaitTime = -1.0f;
	m_bStopMoving = FALSE ;
	m_betMoveOnTouch = BET_IGNORE ;
	m_fBlockDamage = -1.0f;
	m_tmBankingRotation = -1.0f;
	m_bBankingClockwise = TRUE ;
	m_bNoRotation = FALSE ;
	m_eetMarkerEvent = EET_IGNORE ;
	m_penMarkerEvent = NULL;
	m_eetTouchEvent = EET_IGNORE ;
	m_penTouchEvent = NULL;
	m_penSoundStart = NULL;
	m_penSoundStop = NULL;
	m_penSoundFollow = NULL;
	CMarker::SetDefaultProperties();
}

#line 47 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MovingBrushMarker.es"
BOOL CMovingBrushMarker::DropsMarker(CTFileName & fnmMarkerClass,CTString & strTargetProperty)const {
#line 48 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MovingBrushMarker.es"
fnmMarkerClass  = CTFILENAME  ("Classes\\MovingBrushMarker.ecl");
#line 49 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MovingBrushMarker.es"
strTargetProperty  = "Target";
#line 50 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MovingBrushMarker.es"
return TRUE ;
#line 51 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MovingBrushMarker.es"
}

#line 55 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MovingBrushMarker.es"
SLONG CMovingBrushMarker::GetUsedMemory(void) 
#line 56 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MovingBrushMarker.es"
{
#line 57 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MovingBrushMarker.es"
return (sizeof  (CMovingBrushMarker ) - sizeof  (CMarker ) + CMarker  :: GetUsedMemory  ());
#line 58 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MovingBrushMarker.es"
}
BOOL CMovingBrushMarker::
#line 64 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MovingBrushMarker.es"
Main(const CEntityEvent &__eeInput) {
#undef STATE_CURRENT
#define STATE_CURRENT STATE_CMovingBrushMarker_Main
	ASSERTMSG(__eeInput.ee_slEvent==EVENTCODE_EVoid, "CMovingBrushMarker::Main expects 'EVoid' as input!");	const EVoid &e = (const EVoid &)__eeInput;
#line 66 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MovingBrushMarker.es"
SetFlagOn  (ENF_MARKDESTROY );
#line 67 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MovingBrushMarker.es"
SetFlagOn  (ENF_NONETCONNECT );
#line 68 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MovingBrushMarker.es"
SetFlagOff  (ENF_PROPSCHANGED );
#line 70 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MovingBrushMarker.es"
InitAsEditorModel  ();
#line 71 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MovingBrushMarker.es"
SetPhysicsFlags  (EPF_MODEL_IMMATERIAL );
#line 72 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MovingBrushMarker.es"
SetCollisionFlags  (ECF_IMMATERIAL );
#line 75 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MovingBrushMarker.es"
SetModel  (MODEL_MARKER );
#line 76 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MovingBrushMarker.es"
SetModelMainTexture  (TEXTURE_MARKER );
#line 78 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MovingBrushMarker.es"
Return(STATE_CURRENT,EVoid());
#line 78 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MovingBrushMarker.es"
return TRUE; ASSERT(FALSE); return TRUE;};