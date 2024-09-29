/*
 * This file is generated by Entity Class Compiler, (c) CroTeam 1997-98
 */

#line 2 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Copier.es"

#include "StdH.h"

#include <Copier.h>
#include <Copier_tables.h>
CEntityEvent *ECopierTrigger::MakeCopy(void) { 	CEntityEvent *peeCopy = new ECopierTrigger(*this); 	return peeCopy;}
SLONG ECopierTrigger::GetSizeOf(void) { 	return sizeof(*this);}
ECopierTrigger::ECopierTrigger() : CEntityEvent(EVENTCODE_ECopierTrigger) {
	ClearToDefault(ulEntityID);
}
BOOL ECopierTrigger::CheckIDs(void) {	return TRUE ; }

void CCopier::SetDefaultProperties(void) {
	m_strName = "Copier";
	m_strDescription = "";
	m_penTarget = NULL;
	m_bSpawnEffect = TRUE ;
	m_bTelefrag = TRUE ;
	CRationalEntity::SetDefaultProperties();
}

#line 35 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Copier.es"
const CTString & CCopier::GetDescription(void)const 
#line 36 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Copier.es"
{
#line 37 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Copier.es"
((CTString &) m_strDescription ) . PrintF  ("-><none>");
#line 38 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Copier.es"
if(m_penTarget  != NULL ){
#line 39 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Copier.es"
((CTString &) m_strDescription ) . PrintF  ("->%s" , m_penTarget  -> GetName  ());
#line 40 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Copier.es"
}
#line 41 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Copier.es"
return m_strDescription ;
#line 42 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Copier.es"
}

#line 44 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Copier.es"
void CCopier::TeleportEntity() 
#line 45 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Copier.es"
{
#line 47 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Copier.es"
if(m_penTarget  == NULL  || (m_penTarget  -> GetFlags  () & ENF_DELETED )){
#line 49 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Copier.es"
return ;
#line 50 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Copier.es"
}
#line 52 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Copier.es"
CEntity  * pen  = GetWorld  () -> CopyEntityInWorld  (* m_penTarget  , 
#line 53 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Copier.es"
CPlacement3D (FLOAT3D (- 32000.0f + FRnd  () * 200.0f , - 32000.0f + FRnd  () * 200.0f , 0) , ANGLE3D (0 , 0 , 0)) , TRUE  , WLD_AUTO_ENTITY_ID  , FALSE );
#line 56 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Copier.es"
CPlacement3D pl  = GetPlacement  ();
#line 57 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Copier.es"
pl  . pl_PositionVector  += GetRotationMatrix  () . GetColumn  (2) * 0.05f;
#line 58 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Copier.es"
pen  -> Teleport  (pl  , m_bTelefrag );
#line 61 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Copier.es"
if(m_bSpawnEffect ){
#line 62 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Copier.es"
ESpawnEffect  ese ;
#line 63 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Copier.es"
ese  . colMuliplier  = C_WHITE  | CT_OPAQUE ;
#line 64 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Copier.es"
ese  . betType  = BET_TELEPORT ;
#line 65 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Copier.es"
ese  . vNormal  = FLOAT3D (0 , 1 , 0);
#line 66 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Copier.es"
FLOATaabbox3D box ;
#line 67 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Copier.es"
pen  -> GetBoundingBox  (box );
#line 68 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Copier.es"
FLOAT fEntitySize  = box  . Size  () . MaxNorm  () * 2;
#line 69 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Copier.es"
ese  . vStretch  = FLOAT3D (fEntitySize  , fEntitySize  , fEntitySize );
#line 70 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Copier.es"
CEntityPointer penEffect  = CreateEntity  (GetPlacement  () , CLASS_BASIC_EFFECT  , WLD_AUTO_ENTITY_ID  , FALSE );
#line 71 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Copier.es"
penEffect  -> Initialize  (ese  , FALSE );
#line 72 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Copier.es"
}
#line 74 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Copier.es"
ECopierTrigger  ect ;
#line 75 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Copier.es"
ect  . ulEntityID  = pen  -> en_ulID ;
#line 76 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Copier.es"
SendEvent  (ect  , TRUE );
#line 77 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Copier.es"
}

#line 80 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Copier.es"
void CCopier::TeleportEntity_net(ECopierTrigger ect) 
#line 81 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Copier.es"
{
#line 83 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Copier.es"
if(m_penTarget  == NULL  || (m_penTarget  -> GetFlags  () & ENF_DELETED )){
#line 85 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Copier.es"
return ;
#line 86 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Copier.es"
}
#line 88 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Copier.es"
CEntity  * pen  = GetWorld  () -> CopyEntityInWorld  (* m_penTarget  , 
#line 89 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Copier.es"
CPlacement3D (FLOAT3D (- 32000.0f + FRnd  () * 200.0f , - 32000.0f + FRnd  () * 200.0f , 0) , ANGLE3D (0 , 0 , 0)) , TRUE  , ect  . ulEntityID  , FALSE );
#line 92 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Copier.es"
CPlacement3D pl  = GetPlacement  ();
#line 93 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Copier.es"
pl  . pl_PositionVector  += GetRotationMatrix  () . GetColumn  (2) * 0.05f;
#line 94 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Copier.es"
pen  -> Teleport  (pl  , m_bTelefrag );
#line 97 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Copier.es"
if(m_bSpawnEffect ){
#line 98 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Copier.es"
ESpawnEffect  ese ;
#line 99 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Copier.es"
ese  . colMuliplier  = C_WHITE  | CT_OPAQUE ;
#line 100 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Copier.es"
ese  . betType  = BET_TELEPORT ;
#line 101 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Copier.es"
ese  . vNormal  = FLOAT3D (0 , 1 , 0);
#line 102 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Copier.es"
FLOATaabbox3D box ;
#line 103 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Copier.es"
pen  -> GetBoundingBox  (box );
#line 104 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Copier.es"
FLOAT fEntitySize  = box  . Size  () . MaxNorm  () * 2;
#line 105 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Copier.es"
ese  . vStretch  = FLOAT3D (fEntitySize  , fEntitySize  , fEntitySize );
#line 106 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Copier.es"
CEntityPointer penEffect  = CreateEntity  (GetPlacement  () , CLASS_BASIC_EFFECT  , WLD_AUTO_ENTITY_ID  , FALSE );
#line 107 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Copier.es"
penEffect  -> Initialize  (ese  , FALSE );
#line 108 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Copier.es"
}
#line 109 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Copier.es"
}

#line 113 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Copier.es"
SLONG CCopier::GetUsedMemory(void) 
#line 114 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Copier.es"
{
#line 116 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Copier.es"
SLONG  slUsedMemory  = sizeof  (CCopier ) - sizeof  (CRationalEntity ) + CRationalEntity  :: GetUsedMemory  ();
#line 118 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Copier.es"
slUsedMemory  += m_strDescription  . Length  ();
#line 119 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Copier.es"
slUsedMemory  += m_strName  . Length  ();
#line 120 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Copier.es"
return slUsedMemory ;
#line 121 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Copier.es"
}
BOOL CCopier::
#line 128 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Copier.es"
Main(const CEntityEvent &__eeInput) {
#undef STATE_CURRENT
#define STATE_CURRENT STATE_CCopier_Main
	ASSERTMSG(__eeInput.ee_slEvent==EVENTCODE_EVoid, "CCopier::Main expects 'EVoid' as input!");	const EVoid &e = (const EVoid &)__eeInput;
#line 130 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Copier.es"
InitAsEditorModel  ();
#line 131 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Copier.es"
SetPhysicsFlags  (EPF_MODEL_IMMATERIAL );
#line 132 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Copier.es"
SetCollisionFlags  (ECF_TOUCHMODEL );
#line 134 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Copier.es"
SetFlagOn  (ENF_MARKDESTROY );
#line 135 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Copier.es"
SetFlagOn  (ENF_NONETCONNECT );
#line 136 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Copier.es"
SetFlagOff  (ENF_PROPSCHANGED );
#line 137 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Copier.es"
SetFlagOn  (ENF_CLIENTHANDLING );
#line 140 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Copier.es"
SetModel  (MODEL_TELEPORT );
#line 141 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Copier.es"
SetModelMainTexture  (TEXTURE_TELEPORT );
#line 143 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Copier.es"
Jump(STATE_CURRENT,0x00e10005, FALSE, EInternal());return TRUE;}BOOL CCopier::H0x00e10005_Main_05(const CEntityEvent &__eeInput){
ASSERT(__eeInput.ee_slEvent==EVENTCODE_EInternal);
#undef STATE_CURRENT
#define STATE_CURRENT 0x00e10005
if(!(TRUE )){ Jump(STATE_CURRENT,0x00e10006, FALSE, EInternal());return TRUE;}
#line 145 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Copier.es"
SetTimerAt(THINKTIME_NEVER);
Jump(STATE_CURRENT, 0x00e10001, FALSE, EBegin());return TRUE;}BOOL CCopier::H0x00e10001_Main_01(const CEntityEvent &__eeInput) {
#undef STATE_CURRENT
#define STATE_CURRENT 0x00e10001
switch(__eeInput.ee_slEvent){case(EVENTCODE_ETrigger):{const ETrigger&eTrigger= (ETrigger&)__eeInput;

#line 147 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Copier.es"
if(_pNetwork  -> IsServer  ()){
#line 148 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Copier.es"
if(m_penTarget  != NULL ){
#line 149 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Copier.es"
TeleportEntity  ();
#line 150 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Copier.es"
}
#line 151 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Copier.es"
UnsetTimer();Jump(STATE_CURRENT,0x00e10002, FALSE, EInternal());return TRUE;
#line 152 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Copier.es"
}
#line 154 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Copier.es"
return TRUE;
#line 155 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Copier.es"
}ASSERT(FALSE);break;case(EVENTCODE_ECopierTrigger):{const ECopierTrigger&ect= (ECopierTrigger&)__eeInput;

#line 157 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Copier.es"
if(! _pNetwork  -> IsServer  ()){
#line 158 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Copier.es"
if(m_penTarget  != NULL ){
#line 159 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Copier.es"
TeleportEntity_net  (ect );
#line 160 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Copier.es"
}
#line 161 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Copier.es"
UnsetTimer();Jump(STATE_CURRENT,0x00e10002, FALSE, EInternal());return TRUE;
#line 162 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Copier.es"
}
#line 164 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Copier.es"
return TRUE;
#line 165 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Copier.es"
}ASSERT(FALSE);break;default:{
#line 167 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Copier.es"
return TRUE;
#line 168 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Copier.es"
}ASSERT(FALSE);break;
#line 169 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Copier.es"
}return TRUE;}BOOL CCopier::H0x00e10002_Main_02(const CEntityEvent &__eeInput){
ASSERT(__eeInput.ee_slEvent==EVENTCODE_EInternal);
#undef STATE_CURRENT
#define STATE_CURRENT 0x00e10002
;
#line 172 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Copier.es"
SetTimerAfter(0.1f);
Jump(STATE_CURRENT, 0x00e10003, FALSE, EBegin());return TRUE;}BOOL CCopier::H0x00e10003_Main_03(const CEntityEvent &__eeInput) {
#undef STATE_CURRENT
#define STATE_CURRENT 0x00e10003
switch(__eeInput.ee_slEvent) {case EVENTCODE_EBegin: return TRUE;case EVENTCODE_ETimer: Jump(STATE_CURRENT,0x00e10004, FALSE, EInternal()); return TRUE;default: return FALSE; }}BOOL CCopier::H0x00e10004_Main_04(const CEntityEvent &__eeInput){
ASSERT(__eeInput.ee_slEvent==EVENTCODE_EInternal);
#undef STATE_CURRENT
#define STATE_CURRENT 0x00e10004
;Jump(STATE_CURRENT,0x00e10005, FALSE, EInternal());return TRUE;
#line 173 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Copier.es"
}BOOL CCopier::H0x00e10006_Main_06(const CEntityEvent &__eeInput) {
ASSERT(__eeInput.ee_slEvent==EVENTCODE_EInternal);
#undef STATE_CURRENT
#define STATE_CURRENT 0x00e10006
 ASSERT(FALSE); return TRUE;};