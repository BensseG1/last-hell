/*
 * This file is generated by Entity Class Compiler, (c) CroTeam 1997-98
 */

CEntityEvent *ESetViewer_New(void) { return new ESetViewer; };
CDLLEntityEvent DLLEvent_ESetViewer = {
	0x00d30000, &ESetViewer_New
};
CDLLEntityEvent *CBackgroundViewer_events[] = {
	&DLLEvent_ESetViewer,
};
#define CBackgroundViewer_eventsct ARRAYCOUNT(CBackgroundViewer_events)
#define ENTITYCLASS CBackgroundViewer

CEntityProperty CBackgroundViewer_properties[] = {
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x000000d3<<8)+1, offsetof(CBackgroundViewer, m_bActive), "Active", 'A', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x000000d3<<8)+2, offsetof(CBackgroundViewer, m_penWorldSettingsController), "World settings controller", 'W', 0x7F0000FFUL, 0),
};
#define CBackgroundViewer_propertiesct ARRAYCOUNT(CBackgroundViewer_properties)

CEntityComponent CBackgroundViewer_components[] = {
#define MODEL_MARKER ((0x000000d3<<8)+1)
 CEntityComponent(ECT_MODEL, MODEL_MARKER, 2, "EFNM" "Data\\Models\\Editor\\Axis.mdl"),
#define TEXTURE_MARKER ((0x000000d3<<8)+2)
 CEntityComponent(ECT_TEXTURE, TEXTURE_MARKER, 2, "EFNM" "Data\\Models\\Editor\\Vector.tex"),
};
#define CBackgroundViewer_componentsct ARRAYCOUNT(CBackgroundViewer_components)

CEventHandlerEntry CBackgroundViewer_handlers[] = {
 {1, -1, CEntity::pEventHandler(&CBackgroundViewer::
#line 56 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/BackgroundViewer.es"
Main),DEBUGSTRING("CBackgroundViewer::Main")},
};
#define CBackgroundViewer_handlersct ARRAYCOUNT(CBackgroundViewer_handlers)

CEntity *CBackgroundViewer_New(void) { return new CBackgroundViewer; };
void CBackgroundViewer_OnInitClass(void) {};
void CBackgroundViewer_OnEndClass(void) {};
void CBackgroundViewer_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CBackgroundViewer_OnWorldEnd(CWorld *pwo) {};
void CBackgroundViewer_OnWorldInit(CWorld *pwo) {};
void CBackgroundViewer_OnWorldTick(CWorld *pwo) {};
void CBackgroundViewer_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CBackgroundViewer, CMarker, "Background Viewer", "Thumbnails\\BackgroundViewer.tbn", 0x000000d3);
DECLARE_CTFILENAME(_fnmCBackgroundViewer_tbn, "Thumbnails\\BackgroundViewer.tbn");
