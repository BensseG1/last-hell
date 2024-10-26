/*
 * This file is generated by Entity Class Compiler, (c) CroTeam 1997-98
 */

CDLLEntityEvent *CWaterHolder_events[] = {NULL};
#define CWaterHolder_eventsct 0
#define ENTITYCLASS CWaterHolder

CEntityProperty CWaterHolder_properties[] = {
 CEntityProperty(CEntityProperty::EPT_FILENAME, NULL, (0x000005dc<<8)+1, offsetof(CWaterHolder, m_fnModel), "Water Model file (.smc)", 'M', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FILENAME, NULL, (0x000005dc<<8)+2, offsetof(CWaterHolder, m_fnmWaterTex), "Water Texture", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FILENAME, NULL, (0x000005dc<<8)+3, offsetof(CWaterHolder, m_fnmBumpTex), "Bump Texture", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x000005dc<<8)+5, offsetof(CWaterHolder, m_fStretchAll), "StretchAll", 'S', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ANGLE3D, NULL, (0x000005dc<<8)+6, offsetof(CWaterHolder, m_vStretchXYZ), "StretchXYZ", 'X', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x000005dc<<8)+8, offsetof(CWaterHolder, m_bColliding), "Collision", 'L', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x000005dc<<8)+9, offsetof(CWaterHolder, m_bActive), "Active", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x000005dc<<8)+10, offsetof(CWaterHolder, m_bWireFrame), "WireFrame", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x000005dc<<8)+12, offsetof(CWaterHolder, m_bReflection), "Reflection", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x000005dc<<8)+14, offsetof(CWaterHolder, m_bWave), "Wave", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x000005dc<<8)+35, offsetof(CWaterHolder, m_fBumpMat11), "BumpMatrix 11", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x000005dc<<8)+36, offsetof(CWaterHolder, m_fBumpMat12), "BumpMatrix 12", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x000005dc<<8)+37, offsetof(CWaterHolder, m_fBumpMat21), "BumpMatrix 21", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x000005dc<<8)+38, offsetof(CWaterHolder, m_fBumpMat22), "BumpMatrix 22", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x000005dc<<8)+39, offsetof(CWaterHolder, m_fTexFlowX), "TextureFlow X", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x000005dc<<8)+40, offsetof(CWaterHolder, m_fTexFlowY), "TextureFlow Y", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_COLOR, NULL, (0x000005dc<<8)+61, offsetof(CWaterHolder, m_colWater), "Color of Water", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0x000005dc<<8)+80, offsetof(CWaterHolder, m_strName), "Name", 0, 0x7F0000FFUL, 0),
};
#define CWaterHolder_propertiesct ARRAYCOUNT(CWaterHolder_properties)

CEntityComponent CWaterHolder_components[] = {
#define EDITOR_WATER_MODEL ((0x000005dc<<8)+40)
 CEntityComponent(ECT_SKAMODEL, EDITOR_WATER_MODEL, 0, "EFNM" "Data\\World\\Water\\WaterPlane.smc"),
};
#define CWaterHolder_componentsct ARRAYCOUNT(CWaterHolder_components)

CEventHandlerEntry CWaterHolder_handlers[] = {
 {1, -1, CEntity::pEventHandler(&CWaterHolder::
#line 149 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/WaterHolder.es"
Main),DEBUGSTRING("CWaterHolder::Main")},
};
#define CWaterHolder_handlersct ARRAYCOUNT(CWaterHolder_handlers)

CEntity *CWaterHolder_New(void) { return new CWaterHolder; };
void CWaterHolder_OnInitClass(void) {};
void CWaterHolder_OnEndClass(void) {};
void CWaterHolder_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CWaterHolder_OnWorldEnd(CWorld *pwo) {};
void CWaterHolder_OnWorldInit(CWorld *pwo) {};
void CWaterHolder_OnWorldTick(CWorld *pwo) {};
void CWaterHolder_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CWaterHolder, CRationalEntity, "WaterHolder", "Thumbnails\\Terrain.tbn", 0x000005dc);
DECLARE_CTFILENAME(_fnmCWaterHolder_tbn, "Thumbnails\\Terrain.tbn");
