/*
 * This file is generated by Entity Class Compiler, (c) CroTeam 1997-98
 */

#line 2 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/GravityMarker.es"

#include "StdH.h"

#include <GravityMarker.h>
#include <GravityMarker_tables.h>
void CGravityMarker::SetDefaultProperties(void) {
	m_gtType = LT_PARALLEL ;
	m_fStrength = 1;
	m_rFallOff = 50;
	m_rHotSpot = 50;
	m_rTorusR = 100;
	m_fAcc = 0;
	m_fSign = 1;
	m_fStep = 0;
	m_aForceDir = ANGLE3D(0 , 0 , 0);
	m_fForceA = 0.0f;
	m_fForceV = 0.0f;
	m_vForceDir = FLOAT3D(1 , 0 , 0);
	CMarker::SetDefaultProperties();
}

#line 43 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/GravityMarker.es"
inline FLOAT CGravityMarker::StrengthAtDistance(FLOAT fDistance) 
#line 44 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/GravityMarker.es"
{
#line 45 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/GravityMarker.es"
FLOAT fStrength  = (m_rFallOff  - fDistance ) * m_fStep ;
#line 46 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/GravityMarker.es"
return Clamp  (fStrength  , 0.0f , m_fAcc );
#line 47 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/GravityMarker.es"
}

#line 50 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/GravityMarker.es"
const CTString & CGravityMarker::GetForceName(INDEX i) 
#line 51 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/GravityMarker.es"
{
#line 52 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/GravityMarker.es"
return m_strName ;
#line 53 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/GravityMarker.es"
}

#line 55 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/GravityMarker.es"
void CGravityMarker::GetForce(INDEX i,const FLOAT3D & vPoint,
#line 56 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/GravityMarker.es"
CForceStrength & fsGravity,CForceStrength & fsField) 
#line 57 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/GravityMarker.es"
{
#line 58 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/GravityMarker.es"
const FLOATmatrix3D & m  = GetRotationMatrix  ();
#line 59 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/GravityMarker.es"
switch(m_gtType ){
#line 60 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/GravityMarker.es"
case LT_PARALLEL : {
#line 61 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/GravityMarker.es"
fsGravity  . fs_vDirection  (1) = - m  (1 , 2) * m_fSign ;
#line 62 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/GravityMarker.es"
fsGravity  . fs_vDirection  (2) = - m  (2 , 2) * m_fSign ;
#line 63 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/GravityMarker.es"
fsGravity  . fs_vDirection  (3) = - m  (3 , 2) * m_fSign ;
#line 64 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/GravityMarker.es"
FLOAT fDistance  = (vPoint  - GetPlacement  () . pl_PositionVector ) % fsGravity  . fs_vDirection ;
#line 65 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/GravityMarker.es"
fsGravity  . fs_fAcceleration  = StrengthAtDistance  (fDistance );
#line 66 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/GravityMarker.es"
fsGravity  . fs_fVelocity  = 70;
#line 67 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/GravityMarker.es"
}break ;
#line 68 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/GravityMarker.es"
case LT_CENTRAL : {
#line 69 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/GravityMarker.es"
fsGravity  . fs_vDirection  = (GetPlacement  () . pl_PositionVector  - vPoint ) * m_fSign ;
#line 70 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/GravityMarker.es"
FLOAT fDistance  = fsGravity  . fs_vDirection  . Length  ();
#line 71 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/GravityMarker.es"
if(fDistance  > 0.01f){
#line 72 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/GravityMarker.es"
fsGravity  . fs_vDirection  /= fDistance ;
#line 73 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/GravityMarker.es"
}
#line 74 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/GravityMarker.es"
fsGravity  . fs_fAcceleration  = StrengthAtDistance  (fDistance );
#line 75 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/GravityMarker.es"
fsGravity  . fs_fVelocity  = 70;
#line 76 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/GravityMarker.es"
}break ;
#line 77 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/GravityMarker.es"
case LT_CYLINDRICAL : {
#line 78 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/GravityMarker.es"
FLOAT3D vDelta  = GetPlacement  () . pl_PositionVector  - vPoint ;
#line 79 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/GravityMarker.es"
FLOAT3D vAxis ;
#line 80 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/GravityMarker.es"
vAxis  (1) = m  (1 , 2);
#line 81 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/GravityMarker.es"
vAxis  (2) = m  (2 , 2);
#line 82 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/GravityMarker.es"
vAxis  (3) = m  (3 , 2);
#line 83 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/GravityMarker.es"
GetNormalComponent  (vDelta  , vAxis  , fsGravity  . fs_vDirection );
#line 84 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/GravityMarker.es"
fsGravity  . fs_vDirection  *= m_fSign ;
#line 85 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/GravityMarker.es"
FLOAT fDistance  = fsGravity  . fs_vDirection  . Length  ();
#line 86 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/GravityMarker.es"
if(fDistance  > 0.01f){
#line 87 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/GravityMarker.es"
fsGravity  . fs_vDirection  /= fDistance ;
#line 88 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/GravityMarker.es"
}
#line 89 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/GravityMarker.es"
fsGravity  . fs_fAcceleration  = StrengthAtDistance  (fDistance );
#line 90 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/GravityMarker.es"
fsGravity  . fs_fVelocity  = 70;
#line 91 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/GravityMarker.es"
}break ;
#line 92 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/GravityMarker.es"
case LT_TORUS : {
#line 94 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/GravityMarker.es"
FLOAT3D vDelta  = vPoint  - GetPlacement  () . pl_PositionVector ;
#line 95 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/GravityMarker.es"
FLOAT3D vAxis ;
#line 96 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/GravityMarker.es"
vAxis  (1) = m  (1 , 2);
#line 97 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/GravityMarker.es"
vAxis  (2) = m  (2 , 2);
#line 98 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/GravityMarker.es"
vAxis  (3) = m  (3 , 2);
#line 99 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/GravityMarker.es"
FLOAT3D vR ;
#line 100 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/GravityMarker.es"
GetNormalComponent  (vDelta  , vAxis  , vR );
#line 101 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/GravityMarker.es"
vR  . Normalize  ();
#line 102 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/GravityMarker.es"
fsGravity  . fs_vDirection  = (vDelta  - vR  * m_rTorusR ) * m_fSign ;
#line 103 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/GravityMarker.es"
FLOAT fDistance  = fsGravity  . fs_vDirection  . Length  ();
#line 104 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/GravityMarker.es"
if(fDistance  > 0.01f){
#line 105 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/GravityMarker.es"
fsGravity  . fs_vDirection  /= fDistance ;
#line 106 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/GravityMarker.es"
}
#line 107 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/GravityMarker.es"
fsGravity  . fs_fAcceleration  = StrengthAtDistance  (fDistance );
#line 108 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/GravityMarker.es"
fsGravity  . fs_fVelocity  = 70;
#line 110 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/GravityMarker.es"
}break ;
#line 111 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/GravityMarker.es"
default  : 
#line 112 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/GravityMarker.es"
fsGravity  . fs_fAcceleration  = m_fAcc ;
#line 113 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/GravityMarker.es"
fsGravity  . fs_fVelocity  = 70;
#line 114 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/GravityMarker.es"
fsGravity  . fs_vDirection  = FLOAT3D (0 , - 1 , 0);
#line 115 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/GravityMarker.es"
}
#line 118 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/GravityMarker.es"
fsField  . fs_fAcceleration  = m_fForceA ;
#line 119 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/GravityMarker.es"
fsField  . fs_fVelocity  = m_fForceV ;
#line 120 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/GravityMarker.es"
fsField  . fs_vDirection  = m_vForceDir ;
#line 121 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/GravityMarker.es"
}

#line 124 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/GravityMarker.es"
BOOL CGravityMarker::HandleEvent(const CEntityEvent & ee) 
#line 125 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/GravityMarker.es"
{
#line 126 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/GravityMarker.es"
if(ee  . ee_slEvent  == EVENTCODE_ETrigger )
#line 127 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/GravityMarker.es"
{
#line 128 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/GravityMarker.es"
EChangeGravity  eChangeGravity ;
#line 129 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/GravityMarker.es"
eChangeGravity  . penNewGravity  = this ;
#line 130 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/GravityMarker.es"
m_penTarget  -> SendEvent  (eChangeGravity );
#line 131 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/GravityMarker.es"
return TRUE ;
#line 132 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/GravityMarker.es"
}
#line 133 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/GravityMarker.es"
return FALSE ;
#line 134 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/GravityMarker.es"
}
BOOL CGravityMarker::
#line 137 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/GravityMarker.es"
Main(const CEntityEvent &__eeInput) {
#undef STATE_CURRENT
#define STATE_CURRENT STATE_CGravityMarker_Main
	ASSERTMSG(__eeInput.ee_slEvent==EVENTCODE_EVoid, "CGravityMarker::Main expects 'EVoid' as input!");	const EVoid &e = (const EVoid &)__eeInput;
#line 139 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/GravityMarker.es"
InitAsEditorModel  ();
#line 140 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/GravityMarker.es"
SetPhysicsFlags  (EPF_MODEL_IMMATERIAL );
#line 141 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/GravityMarker.es"
SetCollisionFlags  (ECF_IMMATERIAL );
#line 144 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/GravityMarker.es"
SetModel  (MODEL_MARKER );
#line 145 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/GravityMarker.es"
SetModelMainTexture  (TEXTURE_MARKER );
#line 148 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/GravityMarker.es"
if(m_strName  == "Marker"){
#line 149 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/GravityMarker.es"
m_strName  = "Gravity Marker";
#line 150 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/GravityMarker.es"
}
#line 153 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/GravityMarker.es"
m_fAcc  = Abs  (30 * m_fStrength ) , 
#line 154 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/GravityMarker.es"
m_fSign  = SgnNZ  (m_fStrength ) , 
#line 155 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/GravityMarker.es"
m_fStep  = m_fAcc  / (m_rFallOff  - m_rHotSpot );
#line 157 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/GravityMarker.es"
AnglesToDirectionVector  (m_aForceDir  , m_vForceDir );
#line 159 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/GravityMarker.es"
Return(STATE_CURRENT,EVoid());
#line 159 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/GravityMarker.es"
return TRUE; ASSERT(FALSE); return TRUE;};