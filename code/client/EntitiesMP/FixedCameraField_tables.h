/*
 * This file is generated by Entity Class Compiler, (c) CroTeam 1997-98
 */

CDLLEntityEvent *CFixedCameraField_events[] = {NULL};
#define CFixedCameraField_eventsct 0
#define ENTITYCLASS CFixedCameraField

CEntityProperty CFixedCameraField_properties[] = {
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0x00000408<<8)+1, offsetof(CFixedCameraField, m_strName), "Name", 'N', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0x00000408<<8)+2, offsetof(CFixedCameraField, m_strDescription), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x00000408<<8)+3, offsetof(CFixedCameraField, du), "du", 'u', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x00000408<<8)+4, offsetof(CFixedCameraField, dv), "dv", 'v', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x00000408<<8)+5, offsetof(CFixedCameraField, dw), "dw", 'w', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x00000408<<8)+6, offsetof(CFixedCameraField, m_penMarker), "Fixed Camera Marker", 'D', C_dGREEN  | 0xFF, 0),
};
#define CFixedCameraField_propertiesct ARRAYCOUNT(CFixedCameraField_properties)

CEntityComponent CFixedCameraField_components[] = {
#define MODEL_DOORCONTROLLER ((0x00000408<<8)+1)
 CEntityComponent(ECT_MODEL, MODEL_DOORCONTROLLER, 0, "EFNM" "Data\\Models\\Editor\\DoorController.mdl"),
#define TEXTURE_DOORCONTROLLER ((0x00000408<<8)+2)
 CEntityComponent(ECT_TEXTURE, TEXTURE_DOORCONTROLLER, 2, "EFNM" "Data\\Models\\Editor\\DoorController.tex"),
};
#define CFixedCameraField_componentsct ARRAYCOUNT(CFixedCameraField_components)

CEventHandlerEntry CFixedCameraField_handlers[] = {
 {1, -1, CEntity::pEventHandler(&CFixedCameraField::
#line 61 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/FixedCameraField.es"
Main),DEBUGSTRING("CFixedCameraField::Main")},
};
#define CFixedCameraField_handlersct ARRAYCOUNT(CFixedCameraField_handlers)

CEntity *CFixedCameraField_New(void) { return new CFixedCameraField; };
void CFixedCameraField_OnInitClass(void) {};
void CFixedCameraField_OnEndClass(void) {};
void CFixedCameraField_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CFixedCameraField_OnWorldEnd(CWorld *pwo) {};
void CFixedCameraField_OnWorldInit(CWorld *pwo) {};
void CFixedCameraField_OnWorldTick(CWorld *pwo) {};
void CFixedCameraField_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CFixedCameraField, CRationalEntity, "Fixed Camera Field", "Thumbnails\\DoorController.tbn", 0x00000408);
DECLARE_CTFILENAME(_fnmCFixedCameraField_tbn, "Thumbnails\\DoorController.tbn");
