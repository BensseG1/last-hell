/*
 * This file is generated by Entity Class Compiler, (c) CroTeam 1997-98
 */

EP_ENUMBEG(WeaponEffectType)
	EP_ENUMVALUE(WET_SHOTGUNSHELL, ""),
	EP_ENUMVALUE(WET_MACHINEGUNSHELL, ""),
EP_ENUMEND(WeaponEffectType);

CEntityEvent *EWeaponEffectInit_New(void) { return new EWeaponEffectInit; };
CDLLEntityEvent DLLEvent_EWeaponEffectInit = {
	0x01950000, &EWeaponEffectInit_New
};
CDLLEntityEvent *CPlayerWeaponsEffects_events[] = {
	&DLLEvent_EWeaponEffectInit,
};
#define CPlayerWeaponsEffects_eventsct ARRAYCOUNT(CPlayerWeaponsEffects_events)
#define ENTITYCLASS CPlayerWeaponsEffects

CEntityProperty CPlayerWeaponsEffects_properties[] = {
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000195<<8)+1, offsetof(CPlayerWeaponsEffects, m_penOwner), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_ENUM, &WeaponEffectType_enum, (0x00000195<<8)+2, offsetof(CPlayerWeaponsEffects, m_EwetEffect), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000195<<8)+255, offsetof(CPlayerWeaponsEffects, m_penPrediction), "", 0, 0, 0),
};
#define CPlayerWeaponsEffects_propertiesct ARRAYCOUNT(CPlayerWeaponsEffects_properties)

CEntityComponent CPlayerWeaponsEffects_components[] = {
#define MODEL_SG_SHELL ((0x00000195<<8)+1)
 CEntityComponent(ECT_MODEL, MODEL_SG_SHELL, 0, "EFNM" "Data\\Defaults\\Default.mdl"),
#define TEXTURE_SG_SHELL ((0x00000195<<8)+2)
 CEntityComponent(ECT_TEXTURE, TEXTURE_SG_SHELL, 0, "EFNM" "Data\\Defaults\\Default.tex"),
#define MODEL_MG_SHELL ((0x00000195<<8)+3)
 CEntityComponent(ECT_MODEL, MODEL_MG_SHELL, 0, "EFNM" "Data\\Defaults\\Default.mdl"),
#define TEXTURE_MG_SHELL ((0x00000195<<8)+4)
 CEntityComponent(ECT_TEXTURE, TEXTURE_MG_SHELL, 0, "EFNM" "Data\\Defaults\\Default.tex"),
};
#define CPlayerWeaponsEffects_componentsct ARRAYCOUNT(CPlayerWeaponsEffects_components)

CEventHandlerEntry CPlayerWeaponsEffects_handlers[] = {
 {1, -1, CEntity::pEventHandler(&CPlayerWeaponsEffects::
#line 53 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/PlayerWeaponsEffects.es"
Main),DEBUGSTRING("CPlayerWeaponsEffects::Main")},
 {0x01950001, -1, CEntity::pEventHandler(&CPlayerWeaponsEffects::H0x01950001_Main_01), DEBUGSTRING("CPlayerWeaponsEffects::H0x01950001_Main_01")},
 {0x01950002, -1, CEntity::pEventHandler(&CPlayerWeaponsEffects::H0x01950002_Main_02), DEBUGSTRING("CPlayerWeaponsEffects::H0x01950002_Main_02")},
 {0x01950003, -1, CEntity::pEventHandler(&CPlayerWeaponsEffects::H0x01950003_Main_03), DEBUGSTRING("CPlayerWeaponsEffects::H0x01950003_Main_03")},
 {0x01950004, -1, CEntity::pEventHandler(&CPlayerWeaponsEffects::H0x01950004_Main_04), DEBUGSTRING("CPlayerWeaponsEffects::H0x01950004_Main_04")},
 {0x01950005, -1, CEntity::pEventHandler(&CPlayerWeaponsEffects::H0x01950005_Main_05), DEBUGSTRING("CPlayerWeaponsEffects::H0x01950005_Main_05")},
 {0x01950006, -1, CEntity::pEventHandler(&CPlayerWeaponsEffects::H0x01950006_Main_06), DEBUGSTRING("CPlayerWeaponsEffects::H0x01950006_Main_06")},
 {0x01950007, -1, CEntity::pEventHandler(&CPlayerWeaponsEffects::H0x01950007_Main_07), DEBUGSTRING("CPlayerWeaponsEffects::H0x01950007_Main_07")},
 {0x01950008, -1, CEntity::pEventHandler(&CPlayerWeaponsEffects::H0x01950008_Main_08), DEBUGSTRING("CPlayerWeaponsEffects::H0x01950008_Main_08")},
 {0x01950009, -1, CEntity::pEventHandler(&CPlayerWeaponsEffects::
#line 74 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/PlayerWeaponsEffects.es"
ShotgunShell),DEBUGSTRING("CPlayerWeaponsEffects::ShotgunShell")},
 {0x0195000a, -1, CEntity::pEventHandler(&CPlayerWeaponsEffects::H0x0195000a_ShotgunShell_01), DEBUGSTRING("CPlayerWeaponsEffects::H0x0195000a_ShotgunShell_01")},
 {0x0195000b, -1, CEntity::pEventHandler(&CPlayerWeaponsEffects::H0x0195000b_ShotgunShell_02), DEBUGSTRING("CPlayerWeaponsEffects::H0x0195000b_ShotgunShell_02")},
 {0x0195000c, -1, CEntity::pEventHandler(&CPlayerWeaponsEffects::
#line 90 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/PlayerWeaponsEffects.es"
MachinegunShell),DEBUGSTRING("CPlayerWeaponsEffects::MachinegunShell")},
 {0x0195000d, -1, CEntity::pEventHandler(&CPlayerWeaponsEffects::H0x0195000d_MachinegunShell_01), DEBUGSTRING("CPlayerWeaponsEffects::H0x0195000d_MachinegunShell_01")},
 {0x0195000e, -1, CEntity::pEventHandler(&CPlayerWeaponsEffects::H0x0195000e_MachinegunShell_02), DEBUGSTRING("CPlayerWeaponsEffects::H0x0195000e_MachinegunShell_02")},
};
#define CPlayerWeaponsEffects_handlersct ARRAYCOUNT(CPlayerWeaponsEffects_handlers)

CEntity *CPlayerWeaponsEffects_New(void) { return new CPlayerWeaponsEffects; };
void CPlayerWeaponsEffects_OnInitClass(void) {};
void CPlayerWeaponsEffects_OnEndClass(void) {};
void CPlayerWeaponsEffects_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CPlayerWeaponsEffects_OnWorldEnd(CWorld *pwo) {};
void CPlayerWeaponsEffects_OnWorldInit(CWorld *pwo) {};
void CPlayerWeaponsEffects_OnWorldTick(CWorld *pwo) {};
void CPlayerWeaponsEffects_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CPlayerWeaponsEffects, CMovableEntity, "Player Weapons Effects", "", 0x00000195);
DECLARE_CTFILENAME(_fnmCPlayerWeaponsEffects_tbn, "");
