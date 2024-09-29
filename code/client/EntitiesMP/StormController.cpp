/*
 * This file is generated by Entity Class Compiler, (c) CroTeam 1997-98
 */

#line 2 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"

#include "StdH.h"
#include "EntitiesMP/BackgroundViewer.h"
#include "EntitiesMP/WorldSettingsController.h"
#include "EntitiesMP/Lightning.h"

#include <StormController.h>
#include <StormController_tables.h>
CEntityEvent *EStormEnvironmentStart::MakeCopy(void) { 	CEntityEvent *peeCopy = new EStormEnvironmentStart(*this); 	return peeCopy;}
SLONG EStormEnvironmentStart::GetSizeOf(void) { 	return sizeof(*this);}
EStormEnvironmentStart::EStormEnvironmentStart() : CEntityEvent(EVENTCODE_EStormEnvironmentStart) {
}
BOOL EStormEnvironmentStart::CheckIDs(void) {	return TRUE ; }

CEntityEvent *EStormStart::MakeCopy(void) { 	CEntityEvent *peeCopy = new EStormStart(*this); 	return peeCopy;}
SLONG EStormStart::GetSizeOf(void) { 	return sizeof(*this);}
EStormStart::EStormStart() : CEntityEvent(EVENTCODE_EStormStart) {
}
BOOL EStormStart::CheckIDs(void) {	return TRUE ; }

CEntityEvent *EStormStop::MakeCopy(void) { 	CEntityEvent *peeCopy = new EStormStop(*this); 	return peeCopy;}
SLONG EStormStop::GetSizeOf(void) { 	return sizeof(*this);}
EStormStop::EStormStop() : CEntityEvent(EVENTCODE_EStormStop) {
}
BOOL EStormStop::CheckIDs(void) {	return TRUE ; }

void CStormController::SetDefaultProperties(void) {
	m_penwsc = NULL;
	m_strName = "Storm controller";
	m_fNextLightningDelay = 0.0f;
	m_bStormOn = FALSE ;
	m_fNextLightningStrike = 0.0f;
	m_penLightning00 = NULL;
	m_penLightning01 = NULL;
	m_penLightning02 = NULL;
	m_penLightning03 = NULL;
	m_penLightning04 = NULL;
	m_penLightning05 = NULL;
	m_penLightning06 = NULL;
	m_penLightning07 = NULL;
	m_penLightning08 = NULL;
	m_penLightning09 = NULL;
	m_penLightning10 = NULL;
	m_penLightning11 = NULL;
	m_penLightning12 = NULL;
	m_penLightning13 = NULL;
	m_penLightning14 = NULL;
	m_penLightning15 = NULL;
	m_penLightning16 = NULL;
	m_penLightning17 = NULL;
	m_penLightning18 = NULL;
	m_penLightning19 = NULL;
	m_tmStormAppearTime = 10.0f;
	m_tmStormDisappearTime = 10.0f;
	m_fFirstLightningDelay = 10.0f;
	m_fMaxLightningPeriod = 10.0f;
	m_fMinLightningPeriod = 1.0f;
	m_fMaxStormPowerTime = 120.0f;
	m_colBlendStart = COLOR(C_WHITE  | CT_TRANSPARENT );
	m_colBlendStop = COLOR(C_WHITE  | CT_OPAQUE );
	m_colShadeStart = COLOR(C_WHITE  | CT_OPAQUE );
	m_colShadeStop = COLOR(C_GRAY  | CT_OPAQUE );
	CRationalEntity::SetDefaultProperties();
}

#line 66 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
void CStormController::CheckOneLightningTarget(CEntityPointer & pen) 
#line 67 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
{
#line 68 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
if(pen  != NULL  && ! IsOfClass  (pen  , & CLightning_DLLClass ))
#line 69 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
{
#line 70 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
WarningMessage  ("Target '%s' is not of class Lightning!" , pen  -> GetName  ());
#line 71 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
pen  = NULL ;
#line 72 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
}
#line 73 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
}

#line 76 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
INDEX CStormController::GetLightningsCount(void)const 
#line 77 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
{
#line 79 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
if(m_penLightning00  == NULL ){return 0;};
#line 80 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
if(m_penLightning01  == NULL ){return 1;};
#line 81 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
if(m_penLightning02  == NULL ){return 2;};
#line 82 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
if(m_penLightning03  == NULL ){return 3;};
#line 83 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
if(m_penLightning04  == NULL ){return 4;};
#line 84 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
if(m_penLightning05  == NULL ){return 5;};
#line 85 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
if(m_penLightning06  == NULL ){return 6;};
#line 86 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
if(m_penLightning07  == NULL ){return 7;};
#line 87 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
if(m_penLightning08  == NULL ){return 8;};
#line 88 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
if(m_penLightning09  == NULL ){return 9;};
#line 89 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
if(m_penLightning10  == NULL ){return 10;};
#line 90 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
if(m_penLightning11  == NULL ){return 11;};
#line 91 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
if(m_penLightning12  == NULL ){return 12;};
#line 92 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
if(m_penLightning13  == NULL ){return 13;};
#line 93 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
if(m_penLightning14  == NULL ){return 14;};
#line 94 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
if(m_penLightning15  == NULL ){return 15;};
#line 95 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
if(m_penLightning16  == NULL ){return 16;};
#line 96 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
if(m_penLightning17  == NULL ){return 17;};
#line 97 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
if(m_penLightning18  == NULL ){return 18;};
#line 98 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
return 20;
#line 99 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
}

#line 102 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
BOOL CStormController::SetUpWorldSettingsController() 
#line 103 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
{
#line 104 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
SetFlagOn  (ENF_CLIENTHANDLING );
#line 106 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
CBackgroundViewer  * penBcgViewer  = (CBackgroundViewer  *) GetWorld  () -> GetBackgroundViewer  ();
#line 107 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
if(penBcgViewer  == NULL )
#line 108 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
{
#line 110 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
return FALSE ;
#line 111 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
}
#line 114 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
m_penwsc  = penBcgViewer  -> m_penWorldSettingsController ;
#line 115 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
if(m_penwsc  == NULL )
#line 116 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
{
#line 118 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
return FALSE ;
#line 119 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
}
#line 122 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
if(! IsOfClass  (m_penwsc  , & CWorldSettingsController_DLLClass ))
#line 123 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
{
#line 125 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
return FALSE ;
#line 126 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
}
#line 128 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
CWorldSettingsController  * pwsc  = (CWorldSettingsController  *) & * m_penwsc ;
#line 129 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
pwsc  -> m_colBlendStart  = m_colBlendStart ;
#line 130 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
pwsc  -> m_colBlendStop  = m_colBlendStop ;
#line 131 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
pwsc  -> m_colShadeStart  = m_colShadeStart ;
#line 132 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
pwsc  -> m_colShadeStop  = m_colShadeStop ;
#line 133 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
pwsc  -> m_tmStormAppearTime  = m_tmStormAppearTime ;
#line 134 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
pwsc  -> m_tmStormDisappearTime  = m_tmStormDisappearTime ;
#line 136 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
m_bStormOn  = FALSE ;
#line 139 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
return true ;
#line 140 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
}
BOOL CStormController::
#line 144 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
Main(const CEntityEvent &__eeInput) {
#undef STATE_CURRENT
#define STATE_CURRENT STATE_CStormController_Main
	ASSERTMSG(__eeInput.ee_slEvent==EVENTCODE_EVoid, "CStormController::Main expects 'EVoid' as input!");	const EVoid &e = (const EVoid &)__eeInput;
#line 147 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
CheckOneLightningTarget  (m_penLightning00 );
#line 148 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
CheckOneLightningTarget  (m_penLightning01 );
#line 149 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
CheckOneLightningTarget  (m_penLightning02 );
#line 150 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
CheckOneLightningTarget  (m_penLightning03 );
#line 151 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
CheckOneLightningTarget  (m_penLightning04 );
#line 152 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
CheckOneLightningTarget  (m_penLightning05 );
#line 153 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
CheckOneLightningTarget  (m_penLightning06 );
#line 154 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
CheckOneLightningTarget  (m_penLightning07 );
#line 155 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
CheckOneLightningTarget  (m_penLightning08 );
#line 156 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
CheckOneLightningTarget  (m_penLightning09 );
#line 157 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
CheckOneLightningTarget  (m_penLightning10 );
#line 158 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
CheckOneLightningTarget  (m_penLightning11 );
#line 159 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
CheckOneLightningTarget  (m_penLightning12 );
#line 160 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
CheckOneLightningTarget  (m_penLightning13 );
#line 161 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
CheckOneLightningTarget  (m_penLightning14 );
#line 162 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
CheckOneLightningTarget  (m_penLightning15 );
#line 163 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
CheckOneLightningTarget  (m_penLightning16 );
#line 164 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
CheckOneLightningTarget  (m_penLightning17 );
#line 165 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
CheckOneLightningTarget  (m_penLightning18 );
#line 166 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
CheckOneLightningTarget  (m_penLightning19 );
#line 169 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
InitAsEditorModel  ();
#line 170 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
SetPhysicsFlags  (EPF_MODEL_IMMATERIAL );
#line 171 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
SetCollisionFlags  (ECF_IMMATERIAL );
#line 172 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
SetFlagOn  (ENF_CLIENTHANDLING );
#line 175 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
SetModel  (MODEL_STORM_CONTROLLER );
#line 176 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
SetModelMainTexture  (TEXTURE_STORM_CONTROLLER );
#line 179 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
SetTimerAfter(0.1f);
Jump(STATE_CURRENT, 0x025e0003, FALSE, EBegin());return TRUE;}BOOL CStormController::H0x025e0003_Main_01(const CEntityEvent &__eeInput) {
#undef STATE_CURRENT
#define STATE_CURRENT 0x025e0003
switch(__eeInput.ee_slEvent) {case EVENTCODE_EBegin: return TRUE;case EVENTCODE_ETimer: Jump(STATE_CURRENT,0x025e0004, FALSE, EInternal()); return TRUE;default: return FALSE; }}BOOL CStormController::H0x025e0004_Main_02(const CEntityEvent &__eeInput){
ASSERT(__eeInput.ee_slEvent==EVENTCODE_EInternal);
#undef STATE_CURRENT
#define STATE_CURRENT 0x025e0004
;
#line 182 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
if(! SetUpWorldSettingsController  ()){
#line 184 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
Return(STATE_CURRENT,EVoid());
#line 184 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
return TRUE;
#line 185 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
}
#line 187 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
m_bStormOn  = FALSE ;
#line 188 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
Jump(STATE_CURRENT,0x025e0007, FALSE, EInternal());return TRUE;}BOOL CStormController::H0x025e0007_Main_05(const CEntityEvent &__eeInput)
#line 189 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
{
ASSERT(__eeInput.ee_slEvent==EVENTCODE_EInternal);
#undef STATE_CURRENT
#define STATE_CURRENT 0x025e0007
if(!(TRUE )){ Jump(STATE_CURRENT,0x025e0008, FALSE, EInternal());return TRUE;}
#line 190 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
SetTimerAt(THINKTIME_NEVER);
Jump(STATE_CURRENT, 0x025e0005, FALSE, EBegin());return TRUE;}BOOL CStormController::H0x025e0005_Main_03(const CEntityEvent &__eeInput) {
#undef STATE_CURRENT
#define STATE_CURRENT 0x025e0005
switch(__eeInput.ee_slEvent)
#line 191 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
{case(EVENTCODE_EEnvironmentStart):
#line 194 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
{const EEnvironmentStart&e= (EEnvironmentStart&)__eeInput;

#line 195 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
if(_pNetwork  -> IsServer  ()){
#line 196 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
SendEvent  (EStormEnvironmentStart  () , TRUE );
#line 197 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
}
#line 198 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
return TRUE;
#line 199 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
}ASSERT(FALSE);break;case(EVENTCODE_EStormEnvironmentStart):
#line 201 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
{const EStormEnvironmentStart&e= (EStormEnvironmentStart&)__eeInput;

#line 202 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
if(m_penwsc  == NULL ){
#line 203 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
if(! SetUpWorldSettingsController  ()){
#line 204 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
return TRUE;
#line 205 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
}
#line 206 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
}
#line 207 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
TIME  tmNow  = _pTimer  -> CurrentTick  ();
#line 208 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
((CWorldSettingsController  *) & * m_penwsc ) -> m_tmStormStart  = tmNow  - m_tmStormAppearTime ;
#line 209 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
((CWorldSettingsController  *) & * m_penwsc ) -> m_tmStormEnd  = 1e6;
#line 210 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
m_bStormOn  = TRUE ;
#line 211 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
m_fNextLightningStrike  = _pTimer  -> CurrentTick  () + 2.0f;
#line 212 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
Call(STATE_CURRENT, STATE_CStormController_StormInternal, TRUE, EVoid());return TRUE;
#line 213 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
return TRUE;
#line 214 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
}ASSERT(FALSE);break;case(EVENTCODE_EStart):
#line 216 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
{const EStart&e= (EStart&)__eeInput;

#line 217 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
if(_pNetwork  -> IsServer  ()){
#line 218 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
SendEvent  (EStormStart  () , TRUE );
#line 219 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
}
#line 220 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
return TRUE;
#line 221 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
}ASSERT(FALSE);break;case(EVENTCODE_EStormStart):
#line 223 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
{const EStormStart&e= (EStormStart&)__eeInput;

#line 224 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
if(! m_bStormOn ){
#line 225 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
if(m_penwsc  == NULL ){
#line 226 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
if(! SetUpWorldSettingsController  ()){
#line 227 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
return TRUE;
#line 228 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
}
#line 229 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
}
#line 230 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
TIME  tmNow  = _pTimer  -> CurrentTick  ();
#line 231 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
((CWorldSettingsController  *) & * m_penwsc ) -> m_tmStormStart  = tmNow ;
#line 232 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
((CWorldSettingsController  *) & * m_penwsc ) -> m_tmStormEnd  = 1e6;
#line 233 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
m_bStormOn  = TRUE ;
#line 234 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
Call(STATE_CURRENT, STATE_CStormController_Storm, TRUE, EVoid());return TRUE;
#line 235 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
}
#line 236 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
return TRUE;
#line 237 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
}ASSERT(FALSE);break;case(EVENTCODE_EStop):
#line 239 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
{const EStop&eStop= (EStop&)__eeInput;

#line 240 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
if(_pNetwork  -> IsServer  ()){
#line 241 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
SendEvent  (EStormStop  () , TRUE );
#line 242 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
}
#line 243 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
return TRUE;
#line 244 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
}ASSERT(FALSE);break;case(EVENTCODE_EStormStop):
#line 246 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
{const EStormStop&e= (EStormStop&)__eeInput;

#line 247 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
if(m_bStormOn ){
#line 248 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
if(m_penwsc  == NULL ){
#line 249 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
if(! SetUpWorldSettingsController  ()){
#line 250 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
return TRUE;
#line 251 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
}
#line 252 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
}
#line 253 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
TIME  tmNow  = _pTimer  -> CurrentTick  ();
#line 254 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
((CWorldSettingsController  *) & * m_penwsc ) -> m_tmStormEnd  = tmNow ;
#line 255 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
}
#line 256 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
return TRUE;
#line 257 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
}ASSERT(FALSE);break;default:
#line 259 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
{
#line 260 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
return TRUE;
#line 261 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
}ASSERT(FALSE);break;
#line 262 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
}return TRUE;}BOOL CStormController::H0x025e0006_Main_04(const CEntityEvent &__eeInput){
ASSERT(__eeInput.ee_slEvent==EVENTCODE_EInternal);
#undef STATE_CURRENT
#define STATE_CURRENT 0x025e0006
;Jump(STATE_CURRENT,0x025e0007, FALSE, EInternal());return TRUE;
#line 263 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
}BOOL CStormController::H0x025e0008_Main_06(const CEntityEvent &__eeInput) {
ASSERT(__eeInput.ee_slEvent==EVENTCODE_EInternal);
#undef STATE_CURRENT
#define STATE_CURRENT 0x025e0008
 ASSERT(FALSE); return TRUE;};BOOL CStormController::
#line 266 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
Storm(const CEntityEvent &__eeInput) {
#undef STATE_CURRENT
#define STATE_CURRENT STATE_CStormController_Storm
	ASSERTMSG(__eeInput.ee_slEvent==EVENTCODE_EVoid, "CStormController::Storm expects 'EVoid' as input!");	const EVoid &e = (const EVoid &)__eeInput;
#line 269 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
SetTimerAfter(10.0f);
Jump(STATE_CURRENT, 0x025e000a, FALSE, EBegin());return TRUE;}BOOL CStormController::H0x025e000a_Storm_01(const CEntityEvent &__eeInput) {
#undef STATE_CURRENT
#define STATE_CURRENT 0x025e000a
switch(__eeInput.ee_slEvent) {case EVENTCODE_EBegin: return TRUE;case EVENTCODE_ETimer: Jump(STATE_CURRENT,0x025e000b, FALSE, EInternal()); return TRUE;default: return FALSE; }}BOOL CStormController::H0x025e000b_Storm_02(const CEntityEvent &__eeInput){
ASSERT(__eeInput.ee_slEvent==EVENTCODE_EInternal);
#undef STATE_CURRENT
#define STATE_CURRENT 0x025e000b
;
#line 270 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
m_fNextLightningStrike  = m_tmStormAppearTime  + m_fFirstLightningDelay ;
#line 271 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
Jump(STATE_CURRENT, STATE_CStormController_StormInternal, TRUE, EVoid());return TRUE; ASSERT(FALSE); return TRUE;};BOOL CStormController::
#line 274 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
StormInternal(const CEntityEvent &__eeInput) {
#undef STATE_CURRENT
#define STATE_CURRENT STATE_CStormController_StormInternal
	ASSERTMSG(__eeInput.ee_slEvent==EVENTCODE_EVoid, "CStormController::StormInternal expects 'EVoid' as input!");	const EVoid &e = (const EVoid &)__eeInput;
#line 276 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
if(m_penwsc  == NULL ){
#line 277 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
if(! SetUpWorldSettingsController  ()){
#line 278 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
Return(STATE_CURRENT,EReturn  ());
#line 278 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
return TRUE;
#line 279 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
}
#line 280 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
}
#line 281 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
Jump(STATE_CURRENT,0x025e0013, FALSE, EInternal());return TRUE;}BOOL CStormController::H0x025e0013_StormInternal_07(const CEntityEvent &__eeInput)
#line 283 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
{
ASSERT(__eeInput.ee_slEvent==EVENTCODE_EInternal);
#undef STATE_CURRENT
#define STATE_CURRENT 0x025e0013
if(!(m_bStormOn  && 
#line 282 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
_pTimer  -> CurrentTick  () < ((CWorldSettingsController  *) & * m_penwsc ) -> m_tmStormEnd  + m_tmStormDisappearTime )){ Jump(STATE_CURRENT,0x025e0014, FALSE, EInternal());return TRUE;}
#line 284 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
Jump(STATE_CURRENT,0x025e000f, FALSE, EInternal());return TRUE;}BOOL CStormController::H0x025e000f_StormInternal_03(const CEntityEvent &__eeInput)
#line 287 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
{
ASSERT(__eeInput.ee_slEvent==EVENTCODE_EInternal);
#undef STATE_CURRENT
#define STATE_CURRENT 0x025e000f
if(!(_pTimer  -> CurrentTick  () < m_fNextLightningStrike  && 
#line 285 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
_pTimer  -> CurrentTick  () < ((CWorldSettingsController  *) & * m_penwsc ) -> m_tmStormEnd  + m_tmStormDisappearTime  && 
#line 286 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
m_bStormOn )){ Jump(STATE_CURRENT,0x025e0010, FALSE, EInternal());return TRUE;}
#line 289 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
SetTimerAfter(_pTimer  -> TickQuantum );
Jump(STATE_CURRENT, 0x025e000d, FALSE, EBegin());return TRUE;}BOOL CStormController::H0x025e000d_StormInternal_01(const CEntityEvent &__eeInput) {
#undef STATE_CURRENT
#define STATE_CURRENT 0x025e000d
switch(__eeInput.ee_slEvent)
#line 290 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
{case(EVENTCODE_EBegin):
#line 292 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
{const EBegin&e= (EBegin&)__eeInput;

#line 293 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
return TRUE;
#line 294 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
}ASSERT(FALSE);break;case(EVENTCODE_EEnvironmentStop):
#line 296 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
{const EEnvironmentStop&e= (EEnvironmentStop&)__eeInput;

#line 297 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
m_fNextLightningStrike  += 1.0f;
#line 298 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
return TRUE;
#line 299 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
}ASSERT(FALSE);break;case(EVENTCODE_ETimer):{const ETimer&e= (ETimer&)__eeInput;
UnsetTimer();Jump(STATE_CURRENT,0x025e000e, FALSE, EInternal());return TRUE;}ASSERT(FALSE);break;default: return FALSE; break;
#line 301 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
}return TRUE;}BOOL CStormController::H0x025e000e_StormInternal_02(const CEntityEvent &__eeInput){
ASSERT(__eeInput.ee_slEvent==EVENTCODE_EInternal);
#undef STATE_CURRENT
#define STATE_CURRENT 0x025e000e

#line 302 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
if(m_penwsc  == NULL ){
#line 303 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
if(! SetUpWorldSettingsController  ()){
#line 304 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
Return(STATE_CURRENT,EReturn  ());
#line 304 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
return TRUE;
#line 305 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
}
#line 306 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
}Jump(STATE_CURRENT,0x025e000f, FALSE, EInternal());return TRUE;
#line 307 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
}BOOL CStormController::H0x025e0010_StormInternal_04(const CEntityEvent &__eeInput) {
ASSERT(__eeInput.ee_slEvent==EVENTCODE_EInternal);
#undef STATE_CURRENT
#define STATE_CURRENT 0x025e0010

#line 308 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
SetTimerAfter(_pTimer  -> TickQuantum );
Jump(STATE_CURRENT, 0x025e0011, FALSE, EBegin());return TRUE;}BOOL CStormController::H0x025e0011_StormInternal_05(const CEntityEvent &__eeInput) {
#undef STATE_CURRENT
#define STATE_CURRENT 0x025e0011
switch(__eeInput.ee_slEvent) {case EVENTCODE_EBegin: return TRUE;case EVENTCODE_ETimer: Jump(STATE_CURRENT,0x025e0012, FALSE, EInternal()); return TRUE;default: return FALSE; }}BOOL CStormController::H0x025e0012_StormInternal_06(const CEntityEvent &__eeInput){
ASSERT(__eeInput.ee_slEvent==EVENTCODE_EInternal);
#undef STATE_CURRENT
#define STATE_CURRENT 0x025e0012
;
#line 309 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
if(m_penwsc  == NULL ){
#line 310 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
if(! SetUpWorldSettingsController  ()){
#line 311 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
Return(STATE_CURRENT,EReturn  ());
#line 311 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
return TRUE;
#line 312 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
}
#line 313 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
}
#line 316 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
FLOAT fLightningStart  = ((CWorldSettingsController  *) & * m_penwsc ) -> m_tmStormStart  + m_fFirstLightningDelay ;
#line 317 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
FLOAT fLightningMax  = fLightningStart  + m_fMaxStormPowerTime ;
#line 318 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
FLOAT fRatio ;
#line 320 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
if(_pTimer  -> CurrentTick  () > ((CWorldSettingsController  *) & * m_penwsc ) -> m_tmStormEnd  - m_tmStormDisappearTime )
#line 321 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
{
#line 322 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
m_bStormOn  = FALSE ;
#line 323 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
}
#line 324 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
else 
#line 325 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
{
#line 327 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
if(_pTimer  -> CurrentTick  () < fLightningMax )
#line 328 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
{
#line 329 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
fRatio  = CalculateRatio  (_pTimer  -> CurrentTick  () , fLightningStart  , fLightningMax  , 1.0f , 0.0f);
#line 330 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
}
#line 332 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
else 
#line 333 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
{
#line 334 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
fRatio  = 1;
#line 335 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
}
#line 336 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
FLOAT tmPeriod  = (m_fMaxLightningPeriod  - m_fMinLightningPeriod ) * (1.0f - fRatio );
#line 337 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
FLOAT fNextLighting  = m_fMinLightningPeriod  + tmPeriod  * (1.0f + (FRnd  () - 0.5f) * 0.25f);
#line 338 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
m_fNextLightningStrike  = _pTimer  -> CurrentTick  () + fNextLighting ;
#line 341 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
INDEX ctLightnings  = GetLightningsCount  ();
#line 343 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
if(ctLightnings  != 0)
#line 344 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
{
#line 346 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
CLightning  * penLightning  = (CLightning  *) & * (& m_penLightning00 ) [ IRnd  () % ctLightnings  ];
#line 347 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
SendToTarget  (penLightning  , EET_TRIGGER );
#line 348 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
}
#line 349 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
}Jump(STATE_CURRENT,0x025e0013, FALSE, EInternal());return TRUE;
#line 350 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
}BOOL CStormController::H0x025e0014_StormInternal_08(const CEntityEvent &__eeInput) {
ASSERT(__eeInput.ee_slEvent==EVENTCODE_EInternal);
#undef STATE_CURRENT
#define STATE_CURRENT 0x025e0014

#line 351 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
m_bStormOn  = FALSE ;
#line 352 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
Return(STATE_CURRENT,EReturn  ());
#line 352 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/StormController.es"
return TRUE; ASSERT(FALSE); return TRUE;};