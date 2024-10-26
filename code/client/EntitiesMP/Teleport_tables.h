/*
 * This file is generated by Entity Class Compiler, (c) CroTeam 1997-98
 */

EP_ENUMBEG(eTeleportType)
	EP_ENUMVALUE(TELEPORT_DEFAULT, "Teleport Default"),
	EP_ENUMVALUE(TELEPORT_NETWORK, "Teleport Network"),
	EP_ENUMVALUE(TELEPORT_GOZONE, "Teleport Go-Zone"),
EP_ENUMEND(eTeleportType);

CEntityEvent *ETeleportActivate_New(void) { return new ETeleportActivate; };
CDLLEntityEvent DLLEvent_ETeleportActivate = {
	0x00db0000, &ETeleportActivate_New
};
CEntityEvent *ETeleportDeactivate_New(void) { return new ETeleportDeactivate; };
CDLLEntityEvent DLLEvent_ETeleportDeactivate = {
	0x00db0001, &ETeleportDeactivate_New
};
CDLLEntityEvent *CTeleport_events[] = {
	&DLLEvent_ETeleportDeactivate,
	&DLLEvent_ETeleportActivate,
};
#define CTeleport_eventsct ARRAYCOUNT(CTeleport_events)
#define ENTITYCLASS CTeleport

CEntityProperty CTeleport_properties[] = {
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0x000000db<<8)+1, offsetof(CTeleport, m_strName), "Name", 'N', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0x000000db<<8)+3, offsetof(CTeleport, m_strDescription), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x000000db<<8)+2, offsetof(CTeleport, m_penTarget), "Target", 'T', C_BROWN  | 0xFF, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x000000db<<8)+4, offsetof(CTeleport, m_fWidth), "Width", 'W', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x000000db<<8)+5, offsetof(CTeleport, m_fHeight), "Height", 'H', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x000000db<<8)+6, offsetof(CTeleport, m_bActive), "Active", 'A', 0x7F0000FFUL, EPROPF_NETSEND ),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x000000db<<8)+7, offsetof(CTeleport, m_bPlayersOnly), "Players only", 'P', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x000000db<<8)+8, offsetof(CTeleport, m_bForceStop), "Force stop", 'F', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENUM, &eTeleportType_enum, (0x000000db<<8)+9, offsetof(CTeleport, m_eTeleportType), "Teleport Type", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x000000db<<8)+10, offsetof(CTeleport, m_iTeleportIndex), "Teleport/Zone Index", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x000000db<<8)+11, offsetof(CTeleport, m_iTeleportExtIndex), "Teleport/Zone Extension Index", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x000000db<<8)+12, offsetof(CTeleport, m_tmGoZoneSendedTime), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x000000db<<8)+13, offsetof(CTeleport, m_penParticle), "Particle Target", 'T', C_BROWN  | 0xFF, 0),
};
#define CTeleport_propertiesct ARRAYCOUNT(CTeleport_properties)

CEntityComponent CTeleport_components[] = {
#define MODEL_TELEPORT ((0x000000db<<8)+1)
 CEntityComponent(ECT_MODEL, MODEL_TELEPORT, 0, "EFNM" "Data\\Models\\Editor\\Teleport.mdl"),
#define TEXTURE_TELEPORT ((0x000000db<<8)+2)
 CEntityComponent(ECT_TEXTURE, TEXTURE_TELEPORT, 2, "EFNM" "Data\\Models\\Editor\\Teleport.tex"),
#define CLASS_BASIC_EFFECT ((0x000000db<<8)+3)
 CEntityComponent(ECT_CLASS, CLASS_BASIC_EFFECT, 0, "EFNM" "Classes\\BasicEffect.ecl"),
};
#define CTeleport_componentsct ARRAYCOUNT(CTeleport_components)

CEventHandlerEntry CTeleport_handlers[] = {
 {1, -1, CEntity::pEventHandler(&CTeleport::
#line 120 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/Teleport.es"
Main),DEBUGSTRING("CTeleport::Main")},
 {0x00db0002, -1, CEntity::pEventHandler(&CTeleport::H0x00db0002_Main_01), DEBUGSTRING("CTeleport::H0x00db0002_Main_01")},
 {0x00db0003, -1, CEntity::pEventHandler(&CTeleport::H0x00db0003_Main_02), DEBUGSTRING("CTeleport::H0x00db0003_Main_02")},
 {0x00db0004, -1, CEntity::pEventHandler(&CTeleport::H0x00db0004_Main_03), DEBUGSTRING("CTeleport::H0x00db0004_Main_03")},
 {0x00db0005, -1, CEntity::pEventHandler(&CTeleport::H0x00db0005_Main_04), DEBUGSTRING("CTeleport::H0x00db0005_Main_04")},
 {0x00db0006, -1, CEntity::pEventHandler(&CTeleport::H0x00db0006_Main_05), DEBUGSTRING("CTeleport::H0x00db0006_Main_05")},
 {0x00db0007, -1, CEntity::pEventHandler(&CTeleport::H0x00db0007_Main_06), DEBUGSTRING("CTeleport::H0x00db0007_Main_06")},
};
#define CTeleport_handlersct ARRAYCOUNT(CTeleport_handlers)

CEntity *CTeleport_New(void) { return new CTeleport; };
void CTeleport_OnInitClass(void) {};
void CTeleport_OnEndClass(void) {};
void CTeleport_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CTeleport_OnWorldEnd(CWorld *pwo) {};
void CTeleport_OnWorldInit(CWorld *pwo) {};
void CTeleport_OnWorldTick(CWorld *pwo) {};
void CTeleport_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CTeleport, CRationalEntity, "Teleport", "Thumbnails\\Teleport.tbn", 0x000000db);
DECLARE_CTFILENAME(_fnmCTeleport_tbn, "Thumbnails\\Teleport.tbn");
