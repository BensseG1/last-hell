/*
 * This file is generated by Entity Class Compiler, (c) CroTeam 1997-98
 */

CEntityEvent *EParticlesActivate_New(void) { return new EParticlesActivate; };
CDLLEntityEvent DLLEvent_EParticlesActivate = {
	0x00df0000, &EParticlesActivate_New
};
CEntityEvent *EParticlesDeactivate_New(void) { return new EParticlesDeactivate; };
CDLLEntityEvent DLLEvent_EParticlesDeactivate = {
	0x00df0001, &EParticlesDeactivate_New
};
EP_ENUMBEG(ParticlesHolderType)
	EP_ENUMVALUE(PHT_SPIRAL, "Spiral"),
	EP_ENUMVALUE(PHT_EMANATE, "Emanate"),
	EP_ENUMVALUE(PHT_STARDUST, "Stardust"),
	EP_ENUMVALUE(PHT_ATOMIC, "Atomic"),
	EP_ENUMVALUE(PHT_RISING, "Rising"),
	EP_ENUMVALUE(PHT_FOUNTAIN, "Fountain"),
	EP_ENUMVALUE(PHT_SMOKE, "Smoke"),
	EP_ENUMVALUE(PHT_BLOOD, "Blood"),
	EP_ENUMVALUE(PHT_EMANATEPLANE, "EmanatePlane"),
	EP_ENUMVALUE(PHT_SANDFLOW, "SandFlow"),
	EP_ENUMVALUE(PHT_WATERFLOW, "WaterFlow"),
	EP_ENUMVALUE(PHT_LAVAFLOW, "Lava Flow"),
	EP_ENUMVALUE(PHT_LAVAERUPTING, "Lava Erupting"),
	EP_ENUMVALUE(PHT_WATERFALLFOAM, "Waterfall foam"),
	EP_ENUMVALUE(PHT_CHIMNEYSMOKE, "Chimney smoke"),
	EP_ENUMVALUE(PHT_WATERFALL, "Waterfall"),
	EP_ENUMVALUE(PHT_ROCKETMOTOR, "Rocket motor"),
	EP_ENUMVALUE(PHT_COLLECT_ENERGY, "Collect energy"),
	EP_ENUMVALUE(PHT_COLLECT_ENERGYNOCLOUD, "Coll. eng. no cloud"),
EP_ENUMEND(ParticlesHolderType);

CDLLEntityEvent *CParticlesHolder_events[] = {
	&DLLEvent_EParticlesDeactivate,
	&DLLEvent_EParticlesActivate,
};
#define CParticlesHolder_eventsct ARRAYCOUNT(CParticlesHolder_events)
#define ENTITYCLASS CParticlesHolder

CEntityProperty CParticlesHolder_properties[] = {
 CEntityProperty(CEntityProperty::EPT_ENUM, &ParticlesHolderType_enum, (0x000000df<<8)+1, offsetof(CParticlesHolder, m_phtType), "Type", 'Y', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENUM, &ParticleTexture_enum, (0x000000df<<8)+2, offsetof(CParticlesHolder, m_ptTexture), "Texture", 'T', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x000000df<<8)+3, offsetof(CParticlesHolder, m_ctCount), "Count", 'C', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x000000df<<8)+4, offsetof(CParticlesHolder, m_fStretchAll), "StretchAll", 'S', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x000000df<<8)+5, offsetof(CParticlesHolder, m_fStretchX), "StretchX", 'X', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x000000df<<8)+6, offsetof(CParticlesHolder, m_fStretchY), "StretchY", 'Y', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x000000df<<8)+7, offsetof(CParticlesHolder, m_fStretchZ), "StretchZ", 'Z', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0x000000df<<8)+8, offsetof(CParticlesHolder, m_strName), "Name", 'N', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0x000000df<<8)+12, offsetof(CParticlesHolder, m_strDescription), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x000000df<<8)+13, offsetof(CParticlesHolder, m_bBackground), "Background", 'B', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x000000df<<8)+21, offsetof(CParticlesHolder, m_bTargetable), "Targetable", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x000000df<<8)+30, offsetof(CParticlesHolder, m_fSize), "Size", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x000000df<<8)+31, offsetof(CParticlesHolder, m_fParam1), "Param1", 'P', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x000000df<<8)+32, offsetof(CParticlesHolder, m_fParam2), "Param2", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x000000df<<8)+33, offsetof(CParticlesHolder, m_fParam3), "Param3", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x000000df<<8)+34, offsetof(CParticlesHolder, m_bActive), "Active", 'A', 0x7F0000FFUL, EPROPF_NETSEND ),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x000000df<<8)+35, offsetof(CParticlesHolder, m_fActivateTime), "", 0, 0, EPROPF_NETSEND ),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x000000df<<8)+36, offsetof(CParticlesHolder, m_fDeactivateTime), "", 0, 0, EPROPF_NETSEND ),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x000000df<<8)+37, offsetof(CParticlesHolder, m_fMipFactorDisappear), "Disappear mip factor", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_COLOR, NULL, (0x000000df<<8)+38, offsetof(CParticlesHolder, m_cColor), "Color", 0, 0x7F0000FFUL, 0),
};
#define CParticlesHolder_propertiesct ARRAYCOUNT(CParticlesHolder_properties)

CEntityComponent CParticlesHolder_components[] = {
#define MODEL_TELEPORT ((0x000000df<<8)+1)
 CEntityComponent(ECT_MODEL, MODEL_TELEPORT, 0, "EFNM" "Data\\Models\\Editor\\Teleport.mdl"),
#define TEXTURE_TELEPORT ((0x000000df<<8)+2)
 CEntityComponent(ECT_TEXTURE, TEXTURE_TELEPORT, 2, "EFNM" "Data\\Models\\Editor\\BoundingBox.tex"),
};
#define CParticlesHolder_componentsct ARRAYCOUNT(CParticlesHolder_components)

CEventHandlerEntry CParticlesHolder_handlers[] = {
 {1, -1, CEntity::pEventHandler(&CParticlesHolder::
#line 203 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/ParticlesHolder.es"
Main),DEBUGSTRING("CParticlesHolder::Main")},
 {0x00df0002, -1, CEntity::pEventHandler(&CParticlesHolder::
#line 239 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/ParticlesHolder.es"
Active),DEBUGSTRING("CParticlesHolder::Active")},
 {0x00df0003, -1, CEntity::pEventHandler(&CParticlesHolder::H0x00df0003_Active_01), DEBUGSTRING("CParticlesHolder::H0x00df0003_Active_01")},
 {0x00df0004, -1, CEntity::pEventHandler(&CParticlesHolder::H0x00df0004_Active_02), DEBUGSTRING("CParticlesHolder::H0x00df0004_Active_02")},
 {0x00df0005, -1, CEntity::pEventHandler(&CParticlesHolder::H0x00df0005_Active_03), DEBUGSTRING("CParticlesHolder::H0x00df0005_Active_03")},
 {0x00df0006, -1, CEntity::pEventHandler(&CParticlesHolder::H0x00df0006_Active_04), DEBUGSTRING("CParticlesHolder::H0x00df0006_Active_04")},
 {0x00df0007, -1, CEntity::pEventHandler(&CParticlesHolder::
#line 278 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/ParticlesHolder.es"
Inactive),DEBUGSTRING("CParticlesHolder::Inactive")},
 {0x00df0008, -1, CEntity::pEventHandler(&CParticlesHolder::H0x00df0008_Inactive_01), DEBUGSTRING("CParticlesHolder::H0x00df0008_Inactive_01")},
 {0x00df0009, -1, CEntity::pEventHandler(&CParticlesHolder::H0x00df0009_Inactive_02), DEBUGSTRING("CParticlesHolder::H0x00df0009_Inactive_02")},
};
#define CParticlesHolder_handlersct ARRAYCOUNT(CParticlesHolder_handlers)

CEntity *CParticlesHolder_New(void) { return new CParticlesHolder; };
void CParticlesHolder_OnInitClass(void) {};
void CParticlesHolder_OnEndClass(void) {};
void CParticlesHolder_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CParticlesHolder_OnWorldEnd(CWorld *pwo) {};
void CParticlesHolder_OnWorldInit(CWorld *pwo) {};
void CParticlesHolder_OnWorldTick(CWorld *pwo) {};
void CParticlesHolder_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CParticlesHolder, CMovableModelEntity, "ParticlesHolder", "Thumbnails\\ParticlesHolder.tbn", 0x000000df);
DECLARE_CTFILENAME(_fnmCParticlesHolder_tbn, "Thumbnails\\ParticlesHolder.tbn");
