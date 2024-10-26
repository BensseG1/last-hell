/*
 * This file is generated by Entity Class Compiler, (c) CroTeam 1997-98
 */

#line 2 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"

#include "StdH.h"
#include "EntitiesMP/Effector.h"
#include "EntitiesMP/MovingBrush.h"

#include <DestroyableArchitecture.h>
#include <DestroyableArchitecture_tables.h>
CEntityEvent *EArchitectureDeath::MakeCopy(void) { 	CEntityEvent *peeCopy = new EArchitectureDeath(*this); 	return peeCopy;}
SLONG EArchitectureDeath::GetSizeOf(void) { 	return sizeof(*this);}
EArchitectureDeath::EArchitectureDeath() : CEntityEvent(EVENTCODE_EArchitectureDeath) {
}
BOOL EArchitectureDeath::CheckIDs(void) {	return TRUE ; }

#line 13 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"

struct DebrisInfo {
  ULONG ulModelID;
  ULONG ulTextureID;
  FLOAT vOffset[3];
};

static struct DebrisInfo _ObeliskDebrisInfo[] =
{
  { MODEL_OBELISK01, TEXTURE_OBELISK, 0.0f, 114.4989f, 0.0f},
  { MODEL_OBELISK02, TEXTURE_OBELISK, 0.035f, 106.8628f, 0.0f},
	{ MODEL_OBELISK03, TEXTURE_OBELISK, 0.0f, 98.628f, 0.0f},
	{ MODEL_OBELISK04, TEXTURE_OBELISK, 0.0f, 90.4996f, 0.0f},
	{ MODEL_OBELISK05, TEXTURE_OBELISK, 0.0f, 82.174f, 0.0f},
	{ MODEL_OBELISK06, TEXTURE_OBELISK, 0.0f, 71.0425f, 0.0f},
	{ MODEL_OBELISK07, TEXTURE_OBELISK, 0.0f, 59.2f, 0.0f},
	{ MODEL_OBELISK08, TEXTURE_OBELISK, 0.0f, 46.65f, 0.0f},
	{ MODEL_OBELISK09, TEXTURE_OBELISK, 0.0f, 36.6f, 0.0f},
};

static struct DebrisInfo _PylonDebrisInfo[] =
{
  { MODEL_PYLON01, TEXTURE_PYLON, -17.3379f, 55.92f, 0},
	{ MODEL_PYLON02, TEXTURE_PYLON, -10.525f, 58.045f, 0},
	{ MODEL_PYLON03, TEXTURE_PYLON, -17.66f, 42.32f, 0},
	{ MODEL_PYLON04, TEXTURE_PYLON, -0.815000f, 54.69f, 0	},
	{ MODEL_PYLON05, TEXTURE_PYLON, 14.795f, 51.65f, 0},
	{ MODEL_PYLON06, TEXTURE_PYLON, 0.02f, 36.18f, 0},
	{ MODEL_PYLON07, TEXTURE_PYLON, -10.289f, 33.982f, 0},
	{ MODEL_PYLON08, TEXTURE_PYLON, -22.9152f, 28.6205f, 0},
	{ MODEL_PYLON09, TEXTURE_PYLON, 21.932f, 47.2453f, 0},
};

void CDestroyableArchitecture::SetDefaultProperties(void) {
	m_strName = "DestroyableArchitecture";
	m_fHealth = -1.0f;
	m_etType = ET_DESTROY_OBELISK ;
	m_vDamageDir = FLOAT3D(0 , 0 , 0);
	m_fStretch = 1.0f;
	m_penGradient = NULL;
	m_colDebrises = C_WHITE ;
	m_ctDebrises = 12;
	m_fCandyEffect = 0.0f;
	m_fCubeFactor = 1.0f;
	m_bBlowupByDamager = FALSE ;
	m_fDustStretch = 0.0f;
	CMovableBrushEntity::SetDefaultProperties();
}

#line 105 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
BOOL CDestroyableArchitecture::HandleEvent(const CEntityEvent & ee) 
#line 106 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
{
#line 107 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
if(ee  . ee_slEvent  == EVENTCODE_EArchitectureDeath ){
#line 108 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
if(! CMovableBrushEntity  :: HandleEvent  (ee )){
#line 109 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
CPrintF  (" Warning: architecture death event not handled!\n");
#line 110 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
SetFlags  (GetFlags  () | ENF_HIDDEN );
#line 111 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
SetCollisionFlags  (ECF_IMMATERIAL );
#line 112 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
}
#line 113 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
return FALSE ;
#line 114 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
}
#line 115 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
return CMovableBrushEntity  :: HandleEvent  (ee );
#line 116 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
}

#line 118 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
void CDestroyableArchitecture::Precache(void) 
#line 119 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
{
#line 120 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
PrecacheClass  (CLASS_DEBRIS );
#line 121 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
PrecacheClass  (CLASS_EFFECTOR  , ET_DESTROY_OBELISK );
#line 122 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
PrecacheClass  (CLASS_EFFECTOR  , ET_DESTROY_PYLON );
#line 123 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
PrecacheModel  (MODEL_STONE );
#line 124 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
PrecacheTexture  (TEXTURE_STONE );
#line 126 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
switch(m_etType )
#line 127 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
{
#line 128 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
case ET_DESTROY_OBELISK : 
#line 129 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
PrecacheTexture  (TEXTURE_OBELISK );
#line 130 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
PrecacheModel  (MODEL_OBELISK01 );
#line 131 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
PrecacheModel  (MODEL_OBELISK02 );
#line 132 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
PrecacheModel  (MODEL_OBELISK03 );
#line 133 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
PrecacheModel  (MODEL_OBELISK04 );
#line 134 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
PrecacheModel  (MODEL_OBELISK05 );
#line 135 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
PrecacheModel  (MODEL_OBELISK06 );
#line 136 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
PrecacheModel  (MODEL_OBELISK07 );
#line 137 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
PrecacheModel  (MODEL_OBELISK08 );
#line 138 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
PrecacheModel  (MODEL_OBELISK09 );
#line 139 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
break ;
#line 140 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
case ET_DESTROY_PYLON : 
#line 141 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
PrecacheTexture  (TEXTURE_PYLON );
#line 142 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
PrecacheModel  (MODEL_PYLON01 );
#line 143 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
PrecacheModel  (MODEL_PYLON02 );
#line 144 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
PrecacheModel  (MODEL_PYLON03 );
#line 145 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
PrecacheModel  (MODEL_PYLON04 );
#line 146 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
PrecacheModel  (MODEL_PYLON05 );
#line 147 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
PrecacheModel  (MODEL_PYLON06 );
#line 148 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
PrecacheModel  (MODEL_PYLON07 );
#line 149 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
PrecacheModel  (MODEL_PYLON08 );
#line 150 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
PrecacheModel  (MODEL_PYLON09 );
#line 151 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
break ;
#line 152 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
}
#line 153 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
}

#line 156 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
BOOL CDestroyableArchitecture::IsTargetValid(SLONG slPropertyOffset,CEntity * penTarget) 
#line 157 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
{
#line 158 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
if(penTarget  == NULL )
#line 159 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
{
#line 160 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
return FALSE ;
#line 161 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
}
#line 164 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
if(slPropertyOffset  == offsetof  (CDestroyableArchitecture  , m_penGradient ))
#line 165 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
{
#line 166 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
return (IsDerivedFromClass  (penTarget  , & CGradientMarker_DLLClass ));
#line 167 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
}
#line 168 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
return CEntity  :: IsTargetValid  (slPropertyOffset  , penTarget );
#line 169 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
}

#line 172 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
const CTString & CDestroyableArchitecture::GetGradientName(INDEX iGradient) 
#line 173 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
{
#line 174 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
static const CTString strDummyName  ("");
#line 175 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
static const CTString strMarkerUnused  ("Marker not set");
#line 176 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
if(iGradient  == 1)
#line 177 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
{
#line 178 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
CGradientMarker  * pgm  = (CGradientMarker  *) & * m_penGradient ;
#line 179 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
if(pgm  != NULL ){
#line 180 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
return pgm  -> GetGradientName  ();
#line 181 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
}else {
#line 182 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
return strMarkerUnused ;
#line 183 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
}
#line 184 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
}
#line 185 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
return strDummyName ;
#line 186 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
}

#line 188 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
void CDestroyableArchitecture::UncacheShadowsForGradient(class CGradientMarker * penDiscard) 
#line 189 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
{
#line 190 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
CGradientMarker  * pgm  = (CGradientMarker  *) & * m_penGradient ;
#line 191 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
if(pgm  == penDiscard )
#line 192 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
{
#line 193 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
CEntity  :: UncacheShadowsForGradient  (1);
#line 194 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
}
#line 195 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
}

#line 198 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
BOOL CDestroyableArchitecture::GetGradient(INDEX iGradient,class CGradientParameters & fpGradient) 
#line 199 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
{
#line 200 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
if(iGradient  == 1)
#line 201 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
{
#line 202 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
CGradientMarker  * pgm  = (CGradientMarker  *) & * m_penGradient ;
#line 203 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
if(pgm  != NULL ){
#line 204 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
return pgm  -> GetGradient  (0 , fpGradient );
#line 205 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
}
#line 206 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
}
#line 207 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
return FALSE ;
#line 208 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
}

#line 211 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
void CDestroyableArchitecture::ReceiveDamage(CEntity * penInflictor,enum DamageType dmtType,
#line 212 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
FLOAT fDamageAmmount,const FLOAT3D & vHitPoint,const FLOAT3D & vDirection) 
#line 213 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
{
#line 215 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
if(m_fHealth  < 0){
#line 217 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
return ;
#line 218 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
}
#line 220 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
if(m_bBlowupByDamager )
#line 221 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
{
#line 222 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
if(dmtType  == DMT_DAMAGER )
#line 223 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
{
#line 224 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
CMovableBrushEntity  :: ReceiveDamage  (penInflictor  , dmtType  , fDamageAmmount  , vHitPoint  , vDirection );
#line 225 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
}
#line 226 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
}
#line 227 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
else 
#line 228 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
{
#line 230 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
if((dmtType  == DMT_EXPLOSION ) || 
#line 231 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
(dmtType  == DMT_PROJECTILE )
#line 233 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
)
#line 234 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
{
#line 235 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
CMovableBrushEntity  :: ReceiveDamage  (penInflictor  , dmtType  , fDamageAmmount  , vHitPoint  , vDirection );
#line 236 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
}
#line 237 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
}
#line 238 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
}

#line 240 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
void CDestroyableArchitecture::DestroyObelisk() 
#line 241 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
{
#line 242 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
for(INDEX iDebris  = 0;iDebris  < ARRAYCOUNT  (_ObeliskDebrisInfo );iDebris  ++)
#line 243 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
{
#line 244 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
DebrisInfo  & di  = _ObeliskDebrisInfo  [ iDebris  ];
#line 245 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
FLOAT3D vOffset  = FLOAT3D (di  . vOffset  [ 0 ] , di  . vOffset  [ 1 ] , di  . vOffset  [ 2 ]) * m_fStretch ;
#line 246 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
FLOAT3D vPos  = GetPlacement  () . pl_PositionVector  + vOffset ;
#line 247 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
CEntityPointer penDebris  = GetWorld  () -> CreateEntity_t  (
#line 248 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
CPlacement3D (vPos  , ANGLE3D (0 , 0 , 0)) , CTFILENAME  ("Classes\\Debris.ecl") , WLD_AUTO_ENTITY_ID  , FALSE );
#line 250 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
ESpawnDebris  eSpawn ;
#line 251 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
eSpawn  . fDustStretch  = m_fDustStretch ;
#line 252 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
eSpawn  . bCustomShading  = FALSE ;
#line 253 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
eSpawn  . bImmaterialASAP  = FALSE ;
#line 254 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
eSpawn  . colDebris  = C_WHITE  | CT_OPAQUE ;
#line 255 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
eSpawn  . Eeibt  = EIBT_ROCK ;
#line 256 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
eSpawn  . dptParticles  = DPT_NONE ;
#line 257 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
eSpawn  . betStain  = BET_NONE ;
#line 258 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
eSpawn  . pmd  = GetModelDataForComponent  (di  . ulModelID );
#line 259 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
eSpawn  . ptd  = GetTextureDataForComponent  (di  . ulTextureID );
#line 260 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
eSpawn  . ptdRefl  = NULL ;
#line 261 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
eSpawn  . ptdSpec  = NULL ;
#line 262 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
eSpawn  . ptdBump  = NULL ;
#line 263 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
eSpawn  . iModelAnim  = 0;
#line 264 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
eSpawn  . fSize  = m_fStretch ;
#line 265 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
eSpawn  . vStretch  = FLOAT3D (1 , 1 , 1);
#line 266 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
eSpawn  . penFallFXPapa  = NULL ;
#line 268 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
penDebris  -> Initialize  (eSpawn  , FALSE );
#line 271 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
FLOAT fHeightRatio  = di  . vOffset  [ 1 ] * m_fStretch  / 120.0f;
#line 272 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
FLOAT3D vSpeed  = FLOAT3D (FRnd  () - 0.5f , 0.0f , FRnd  () - 0.5f) * (1.0f - fHeightRatio ) * 160.0f;
#line 273 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
FLOAT3D vRot  = FLOAT3D (FRnd  () - 0.5f , (FRnd  () - 0.5f) * (1.0f - fHeightRatio ) , FRnd  () - 0.5f) * 200.0f;
#line 277 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
((CMovableEntity  &) * penDebris ) . LaunchAsFreeProjectile  (vSpeed  , NULL );
#line 278 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
((CMovableEntity  &) * penDebris ) . SetDesiredRotation  (vRot );
#line 279 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
}
#line 282 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
FOREACHINLIST  (CEntity  , en_lnInParent  , en_lhChildren  , iten ){
#line 283 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
iten  -> SendEvent  (EBrushDestroyed  ());
#line 284 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
}
#line 285 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
m_fHealth  = - 1;
#line 286 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
ForceFullStop  ();
#line 287 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
SetDefaultProperties  ();
#line 289 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
CPlacement3D plObelisk  = GetPlacement  ();
#line 293 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
NotifyCollisionChanged  ();
#line 294 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
SetFlags  (GetFlags  () | ENF_HIDDEN );
#line 295 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
SetCollisionFlags  (ECF_IMMATERIAL );
#line 298 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
CEntity  * penEffector  = CreateEntity  (plObelisk  , CLASS_EFFECTOR  , WLD_AUTO_ENTITY_ID  , FALSE );
#line 300 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
ESpawnEffector  eSpawnEffector ;
#line 301 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
eSpawnEffector  . tmLifeTime  = 6.0f;
#line 302 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
eSpawnEffector  . eetType  = ET_DESTROY_OBELISK ;
#line 304 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
penEffector  -> Initialize  (eSpawnEffector  , FALSE );
#line 305 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
}

#line 307 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
void CDestroyableArchitecture::DestroyPylon() 
#line 308 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
{
#line 309 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
for(INDEX iDebris  = 0;iDebris  < ARRAYCOUNT  (_PylonDebrisInfo );iDebris  ++)
#line 310 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
{
#line 311 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
DebrisInfo  & di  = _PylonDebrisInfo  [ iDebris  ];
#line 312 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
FLOAT3D vOffset  = FLOAT3D (di  . vOffset  [ 0 ] , di  . vOffset  [ 1 ] , di  . vOffset  [ 2 ]) * m_fStretch ;
#line 313 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
FLOAT3D vPos  = GetPlacement  () . pl_PositionVector  + vOffset ;
#line 314 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
CEntityPointer penDebris  = GetWorld  () -> CreateEntity_t  (
#line 315 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
CPlacement3D (vPos  , ANGLE3D (0 , 0 , 0)) , CTFILENAME  ("Classes\\Debris.ecl") , WLD_AUTO_ENTITY_ID  , FALSE );
#line 317 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
ESpawnDebris  eSpawn ;
#line 318 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
eSpawn  . fDustStretch  = m_fDustStretch ;
#line 319 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
eSpawn  . bImmaterialASAP  = FALSE ;
#line 320 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
eSpawn  . bCustomShading  = FALSE ;
#line 321 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
eSpawn  . colDebris  = C_WHITE  | CT_OPAQUE ;
#line 322 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
eSpawn  . Eeibt  = EIBT_ROCK ;
#line 323 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
eSpawn  . dptParticles  = DPT_NONE ;
#line 324 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
eSpawn  . betStain  = BET_NONE ;
#line 325 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
eSpawn  . pmd  = GetModelDataForComponent  (di  . ulModelID );
#line 326 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
eSpawn  . ptd  = GetTextureDataForComponent  (di  . ulTextureID );
#line 327 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
eSpawn  . ptdRefl  = NULL ;
#line 328 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
eSpawn  . ptdSpec  = NULL ;
#line 329 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
eSpawn  . ptdBump  = NULL ;
#line 330 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
eSpawn  . iModelAnim  = 0;
#line 331 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
eSpawn  . fSize  = m_fStretch ;
#line 332 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
eSpawn  . vStretch  = FLOAT3D (1 , 1 , 1);
#line 333 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
eSpawn  . penFallFXPapa  = NULL ;
#line 335 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
penDebris  -> Initialize  (eSpawn  , FALSE );
#line 338 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
FLOAT fHeightRatio  = di  . vOffset  [ 1 ] * m_fStretch  / 120.0f;
#line 339 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
FLOAT3D vSpeed  = (m_vDamageDir  * 2.0f + FLOAT3D (FRnd  () - 0.5f , 0.0f , FRnd  ())) * fHeightRatio  * 160.0f;
#line 340 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
FLOAT3D vRot  = FLOAT3D (FRnd  () - 0.5f , (FRnd  () - 0.5f) * fHeightRatio  , FRnd  () - 0.5f) * 300.0f;
#line 341 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
((CMovableEntity  &) * penDebris ) . LaunchAsFreeProjectile  (vSpeed  , NULL );
#line 342 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
((CMovableEntity  &) * penDebris ) . SetDesiredRotation  (vRot );
#line 343 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
}
#line 346 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
FOREACHINLIST  (CEntity  , en_lnInParent  , en_lhChildren  , iten ){
#line 347 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
iten  -> SendEvent  (EBrushDestroyed  ());
#line 348 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
}
#line 349 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
m_fHealth  = - 1;
#line 350 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
CPlacement3D plObelisk  = GetPlacement  ();
#line 352 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
CEntity  * penEffector  = CreateEntity  (plObelisk  , CLASS_EFFECTOR  , WLD_AUTO_ENTITY_ID  , FALSE );
#line 354 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
ESpawnEffector  eSpawnEffector ;
#line 355 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
eSpawnEffector  . eetType  = ET_DESTROY_PYLON ;
#line 356 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
eSpawnEffector  . tmLifeTime  = 6.0f;
#line 357 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
eSpawnEffector  . vDamageDir  = m_vDamageDir ;
#line 359 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
penEffector  -> Initialize  (eSpawnEffector  , FALSE );
#line 361 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
ForceFullStop  ();
#line 362 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
SetDefaultProperties  ();
#line 365 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
NotifyCollisionChanged  ();
#line 366 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
SetFlags  (GetFlags  () | ENF_HIDDEN );
#line 367 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
SetCollisionFlags  (ECF_IMMATERIAL );
#line 368 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
}

#line 372 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
SLONG CDestroyableArchitecture::GetUsedMemory(void) 
#line 373 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
{
#line 375 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
SLONG  slUsedMemory  = sizeof  (CDestroyableArchitecture ) - sizeof  (CMovableBrushEntity ) + CMovableBrushEntity  :: GetUsedMemory  ();
#line 377 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
slUsedMemory  += m_strName  . Length  ();
#line 378 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
return slUsedMemory ;
#line 379 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
}
BOOL CDestroyableArchitecture::
#line 386 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
Main(const CEntityEvent &__eeInput) {
#undef STATE_CURRENT
#define STATE_CURRENT STATE_CDestroyableArchitecture_Main
	ASSERTMSG(__eeInput.ee_slEvent==EVENTCODE_EVoid, "CDestroyableArchitecture::Main expects 'EVoid' as input!");	const EVoid &e = (const EVoid &)__eeInput;
#line 388 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
InitAsBrush  ();
#line 389 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
SetPhysicsFlags  (EPF_BRUSH_MOVING );
#line 390 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
SetCollisionFlags  (ECF_BRUSH );
#line 392 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
SetFlags  (GetFlags  () & ~ ENF_ZONING );
#line 393 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
SetHealth  (m_fHealth );
#line 396 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
SetTimerAt(THINKTIME_NEVER);
Jump(STATE_CURRENT, 0x006b0001, FALSE, EBegin());return TRUE;}BOOL CDestroyableArchitecture::H0x006b0001_Main_01(const CEntityEvent &__eeInput) {
#undef STATE_CURRENT
#define STATE_CURRENT 0x006b0001
switch(__eeInput.ee_slEvent){case(EVENTCODE_EBegin):{const EBegin&e= (EBegin&)__eeInput;

#line 398 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
return TRUE;
#line 399 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
}ASSERT(FALSE);break;case(EVENTCODE_EDeath):{const EDeath&e= (EDeath&)__eeInput;

#line 401 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
if(_pNetwork  -> IsServer  ()){
#line 402 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
EArchitectureDeath  ead ;
#line 403 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
SendEvent  (ead  , TRUE );
#line 404 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
}
#line 405 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
return TRUE;
#line 406 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
}ASSERT(FALSE);break;case(EVENTCODE_EArchitectureDeath):{const EArchitectureDeath&e= (EArchitectureDeath&)__eeInput;

#line 409 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
FLOATaabbox3D box ;
#line 410 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
GetSize  (box );
#line 411 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
if(m_ctDebrises  <= 0)
#line 412 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
{
#line 413 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
m_ctDebrises  = 1;
#line 414 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
}
#line 415 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
FLOAT fEntitySize  = pow  (box  . Size  () (1) * box  . Size  () (2) * box  . Size  () (3) / m_ctDebrises  , 1.0f / 3.0f) * m_fCubeFactor ;
#line 417 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
Debris_Begin  (EIBT_ROCK  , DPT_NONE  , BET_NONE  , fEntitySize  , FLOAT3D (1.0f , 2.0f , 3.0f) , 
#line 418 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
FLOAT3D (0 , 0 , 0) , 1.0f + m_fCandyEffect  / 2.0f , m_fCandyEffect  , m_colDebrises );
#line 419 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
for(INDEX iDebris  = 0;iDebris  < m_ctDebrises ;iDebris  ++){
#line 420 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
Debris_Spawn  (this  , this  , MODEL_STONE  , TEXTURE_STONE  , 0 , 0 , 0 , IRnd  () % 4 , 1.0f , 
#line 421 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
FLOAT3D (FRnd  () * 0.8f + 0.1f , FRnd  () * 0.8f + 0.1f , FRnd  () * 0.8f + 0.1f));
#line 422 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
}
#line 425 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
FOREACHINLIST  (CEntity  , en_lnInParent  , en_lhChildren  , iten ){
#line 426 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
iten  -> SendEvent  (EBrushDestroyed  ());
#line 427 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
}
#line 429 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
m_fHealth  = - 1;
#line 430 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
ForceFullStop  ();
#line 431 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
SetDefaultProperties  ();
#line 434 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
NotifyCollisionChanged  ();
#line 435 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
SetFlags  (GetFlags  () | ENF_HIDDEN );
#line 436 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
SetCollisionFlags  (ECF_IMMATERIAL );
#line 439 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
{FOREACHINLIST  (CEntity  , en_lnInParent  , en_lhChildren  , itenChild ){
#line 441 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
itenChild  -> SendEvent  (ERangeModelDestruction  ());
#line 442 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
}}
#line 444 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
UnsetTimer();Jump(STATE_CURRENT,0x006b0002, FALSE, EInternal());return TRUE;
#line 445 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
}ASSERT(FALSE);break;case(EVENTCODE_EReturn):
#line 447 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
{const EReturn&e= (EReturn&)__eeInput;

#line 448 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
UnsetTimer();Jump(STATE_CURRENT,0x006b0002, FALSE, EInternal());return TRUE;
#line 449 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
}ASSERT(FALSE);break;default: return FALSE; break;
#line 450 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
}return TRUE;}BOOL CDestroyableArchitecture::H0x006b0002_Main_02(const CEntityEvent &__eeInput){
ASSERT(__eeInput.ee_slEvent==EVENTCODE_EInternal);
#undef STATE_CURRENT
#define STATE_CURRENT 0x006b0002

#line 451 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
Return(STATE_CURRENT,EVoid());
#line 451 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/DestroyableArchitecture.es"
return TRUE; ASSERT(FALSE); return TRUE;};