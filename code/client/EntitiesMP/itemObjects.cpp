/*
 * This file is generated by Entity Class Compiler, (c) CroTeam 1997-98
 */

#line 3 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/itemObjects.es"

#include "StdH.h"
#include "Models/Items/ItemHolder/ItemHolder.h"

#include <itemObjects.h>
#include <itemObjects_tables.h>
#line 17 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/itemObjects.es"



void CItemObjects::SetDefaultProperties(void) {
	m_fnModel = CTFILENAME("Data\\Models\\Editor\\Ska\\Axis.smc");
	m_strAnimation = "";
	m_bActive = TRUE ;
	m_fStretch = 1.0f;
	m_iCollectItem = -1;
	m_soDrop.SetOwner(this);
	m_soDrop.Stop(FALSE);
	idItem_NormalBox = -1;
	eType = ITEMOBJ_DEFAULT ;
	m_strName = "Item";
	CItem::SetDefaultProperties();
}

#line 41 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/itemObjects.es"
void CItemObjects::Precache(void) {
#line 42 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/itemObjects.es"
if(en_pmiModelInstance ){en_pmiModelInstance  -> m_tmSkaTagManager  . SetOwner  (this );}
#line 43 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/itemObjects.es"
if(en_pmiModelInstance  -> mi_pmisSerial  
#line 44 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/itemObjects.es"
&& en_pmiModelInstance  -> mi_pmisSerial  -> mis_pmiModelInstance  
#line 45 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/itemObjects.es"
&& en_pmiModelInstance  -> mi_pmisSerial  -> mis_pmiModelInstance  -> m_fnmAnimEffectFile  != "")
#line 46 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/itemObjects.es"
{
#line 47 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/itemObjects.es"
en_pmiModelInstance  -> ReadAnimEffectFile  (en_pmiModelInstance  -> mi_pmisSerial  -> mis_pmiModelInstance  -> m_fnmAnimEffectFile );
#line 48 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/itemObjects.es"
}
#line 49 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/itemObjects.es"
GetModelInstance  () -> RefreshTagManager  ();
#line 51 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/itemObjects.es"
if(m_strAnimation  != "")
#line 52 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/itemObjects.es"
{
#line 53 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/itemObjects.es"
INDEX iAnim  = ska_GetIDFromStringTable  (m_strAnimation );
#line 54 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/itemObjects.es"
INDEX iDummy1  , iDummy2 ;
#line 55 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/itemObjects.es"
if(GetModelInstance  () -> FindAnimationByID  (iAnim  , & iDummy1  , & iDummy2 )){
#line 56 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/itemObjects.es"
NewClearState  (0.05f);
#line 57 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/itemObjects.es"
ULONG  ulFlags  = AN_LOOPING ;
#line 58 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/itemObjects.es"
AddAnimation  (iAnim  , ulFlags  , 1 , 1);
#line 59 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/itemObjects.es"
OffSetAnimationQueue  (FRnd  () * 10.0f);
#line 60 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/itemObjects.es"
}else {
#line 61 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/itemObjects.es"
CPrintF  ("WARNING! Animation '%s' not found in SKA entity '%s'!\n" , 
#line 62 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/itemObjects.es"
m_strAnimation  , GetName  ());
#line 63 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/itemObjects.es"
}
#line 64 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/itemObjects.es"
}
#line 65 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/itemObjects.es"
}

#line 67 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/itemObjects.es"
void CItemObjects::RenderParticles(void) {
#line 68 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/itemObjects.es"
if(m_bActive )
#line 69 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/itemObjects.es"
{
#line 70 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/itemObjects.es"
Particles_Stardust  (this  , 1.0f * 0.75f , 0.75f * 0.75f , PT_STAR08  , 128);
#line 71 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/itemObjects.es"
}
#line 72 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/itemObjects.es"
}

#line 74 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/itemObjects.es"
void CItemObjects::SetNormalBox(const char * BoxName) 
#line 75 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/itemObjects.es"
{
#line 76 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/itemObjects.es"
idItem_NormalBox  = ska_GetIDFromStringTable  (BoxName );
#line 77 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/itemObjects.es"
}
BOOL CItemObjects::
#line 82 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/itemObjects.es"
Main(const CEntityEvent &__eeInput) {
#undef STATE_CURRENT
#define STATE_CURRENT STATE_CItemObjects_Main
	ASSERTMSG(__eeInput.ee_slEvent==EVENTCODE_EVoid, "CItemObjects::Main expects 'EVoid' as input!");	const EVoid &e = (const EVoid &)__eeInput;
#line 90 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/itemObjects.es"
if(m_fnModel  == ""){
#line 91 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/itemObjects.es"
m_fnModel  = CTFILENAME  ("Data\\Models\\Editor\\Ska\\Axis.smc");
#line 92 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/itemObjects.es"
}
#line 94 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/itemObjects.es"
InitAsSkaModel  ();
#line 96 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/itemObjects.es"
BOOL bLoadOK  = TRUE ;
#line 98 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/itemObjects.es"
try {
#line 99 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/itemObjects.es"
SetSkaModel_t  (m_fnModel );
#line 101 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/itemObjects.es"
}catch  (char  *){
#line 102 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/itemObjects.es"
bLoadOK  = FALSE ;
#line 105 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/itemObjects.es"
}
#line 106 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/itemObjects.es"
if(! bLoadOK ){
#line 107 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/itemObjects.es"
SetSkaModel  (CTFILENAME  ("Data\\Models\\Editor\\Ska\\Axis.smc"));
#line 108 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/itemObjects.es"
WarningMessage  (TRANS  ("Cannot load ska model '%s'") , (CTString &) m_fnModel );
#line 109 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/itemObjects.es"
}
#line 118 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/itemObjects.es"
SetFlags  (GetFlags  () | ENF_SEETHROUGH );
#line 119 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/itemObjects.es"
SetPhysicsFlags  (EPF_MODEL_ITEM );
#line 120 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/itemObjects.es"
SetCollisionFlags  (ECF_ITEM );
#line 122 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/itemObjects.es"
GetModelInstance  () -> StretchModel  (FLOAT3D (m_fStretch  , m_fStretch  , m_fStretch ));
#line 123 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/itemObjects.es"
GetModelInstance  () -> mi_bRenderShadow  = TRUE ;
#line 125 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/itemObjects.es"
SetDesiredTranslation  (FLOAT3D (0 , 0 , 0));
#line 132 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/itemObjects.es"
Jump(STATE_CURRENT, STATE_CItem_ItemLoop, FALSE, EVoid());return TRUE;
#line 133 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/itemObjects.es"
Return(STATE_CURRENT,EVoid());
#line 133 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/itemObjects.es"
return TRUE; ASSERT(FALSE); return TRUE;};BOOL CItemObjects::
#line 136 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/itemObjects.es"
ItemCollected(const CEntityEvent &__eeInput) {
#undef STATE_CURRENT
#define STATE_CURRENT STATE_CItemObjects_ItemCollected
	ASSERTMSG(__eeInput.ee_slEvent==EVENTCODE_EPass, "CItemObjects::ItemCollected expects 'EPass' as input!");	const EPass &epass = (const EPass &)__eeInput;
#line 137 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/itemObjects.es"
ASSERT  (epass  . penOther  != NULL );
#line 138 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/itemObjects.es"
switch(eType )
#line 139 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/itemObjects.es"
{
#line 140 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/itemObjects.es"
case ITEMOBJ_RAID : 
#line 141 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/itemObjects.es"
{
#line 142 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/itemObjects.es"
if(m_bActive )
#line 143 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/itemObjects.es"
{
#line 144 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/itemObjects.es"
_pNetwork  -> SendRaidScene  (2 , en_ulID  , m_iCollectItem );
#line 145 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/itemObjects.es"
m_bActive  = FALSE ;
#line 146 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/itemObjects.es"
}
#line 147 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/itemObjects.es"
}
#line 148 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/itemObjects.es"
break ;
#line 149 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/itemObjects.es"
}
#line 150 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/itemObjects.es"
Return(STATE_CURRENT,EVoid());
#line 150 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/itemObjects.es"
return TRUE; ASSERT(FALSE); return TRUE;};BOOL CItemObjects::
#line 153 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/itemObjects.es"
ItemActivate(const CEntityEvent &__eeInput) {
#undef STATE_CURRENT
#define STATE_CURRENT STATE_CItemObjects_ItemActivate
	ASSERTMSG(__eeInput.ee_slEvent==EVENTCODE_EActivate, "CItemObjects::ItemActivate expects 'EActivate' as input!");	const EActivate &eAct = (const EActivate &)__eeInput;
#line 154 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/itemObjects.es"
SetFlagOn  (ENF_PROPSCHANGED );
#line 155 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/itemObjects.es"
SwitchToModel  ();
#line 156 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/itemObjects.es"
SetCollisionFlags  (ECF_ITEM );
#line 157 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/itemObjects.es"
m_bActive  = TRUE ;
#line 158 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/itemObjects.es"
if(m_strAnimation  != "")
#line 159 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/itemObjects.es"
{
#line 160 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/itemObjects.es"
INDEX iAnim  = ska_GetIDFromStringTable  (m_strAnimation );
#line 161 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/itemObjects.es"
AddAnimation  (iAnim  , AN_LOOPING  , 1 , 1);
#line 162 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/itemObjects.es"
}
#line 163 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/itemObjects.es"
Return(STATE_CURRENT,EVoid());
#line 163 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/itemObjects.es"
return TRUE; ASSERT(FALSE); return TRUE;};BOOL CItemObjects::
#line 166 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/itemObjects.es"
ItemDeActivate(const CEntityEvent &__eeInput) {
#undef STATE_CURRENT
#define STATE_CURRENT STATE_CItemObjects_ItemDeActivate
	ASSERTMSG(__eeInput.ee_slEvent==EVENTCODE_EDeactivate, "CItemObjects::ItemDeActivate expects 'EDeactivate' as input!");	const EDeactivate &eDeAct = (const EDeactivate &)__eeInput;
#line 167 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/itemObjects.es"
SetFlagOn  (ENF_PROPSCHANGED );
#line 168 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/itemObjects.es"
SwitchToEditorModel  ();
#line 169 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/itemObjects.es"
SetCollisionFlags  (ECF_IMMATERIAL );
#line 170 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/itemObjects.es"
m_bActive  = FALSE ;
#line 171 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/itemObjects.es"
GetModelInstance  () -> StopAllAnimations  (0.5f);
#line 172 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/itemObjects.es"
Return(STATE_CURRENT,EVoid());
#line 172 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/itemObjects.es"
return TRUE; ASSERT(FALSE); return TRUE;};