/*
 * This file is generated by Entity Class Compiler, (c) CroTeam 1997-98
 */

CDLLEntityEvent *CWorldSettingsController_events[] = {NULL};
#define CWorldSettingsController_eventsct 0
#define ENTITYCLASS CWorldSettingsController

CEntityProperty CWorldSettingsController_properties[] = {
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x0000025d<<8)+1, offsetof(CWorldSettingsController, m_tmStormStart), "", 0, 0, EPROPF_NETSEND ),
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0x0000025d<<8)+2, offsetof(CWorldSettingsController, m_strName), "Name", 'N', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x0000025d<<8)+3, offsetof(CWorldSettingsController, m_tmLightningStart), "", 0, 0, EPROPF_NETSEND ),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x0000025d<<8)+4, offsetof(CWorldSettingsController, m_fLightningPower), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x0000025d<<8)+5, offsetof(CWorldSettingsController, m_tmStormEnd), "", 0, 0, EPROPF_NETSEND ),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x0000025d<<8)+6, offsetof(CWorldSettingsController, m_tmPyramidPlatesStart), "", 0, 0, EPROPF_NETSEND ),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x0000025d<<8)+7, offsetof(CWorldSettingsController, m_tmActivatedPlate1), "", 0, 0, EPROPF_NETSEND ),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x0000025d<<8)+8, offsetof(CWorldSettingsController, m_tmDeactivatedPlate1), "", 0, 0, EPROPF_NETSEND ),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x0000025d<<8)+9, offsetof(CWorldSettingsController, m_tmActivatedPlate2), "", 0, 0, EPROPF_NETSEND ),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x0000025d<<8)+10, offsetof(CWorldSettingsController, m_tmDeactivatedPlate2), "", 0, 0, EPROPF_NETSEND ),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x0000025d<<8)+11, offsetof(CWorldSettingsController, m_tmActivatedPlate3), "", 0, 0, EPROPF_NETSEND ),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x0000025d<<8)+12, offsetof(CWorldSettingsController, m_tmDeactivatedPlate3), "", 0, 0, EPROPF_NETSEND ),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x0000025d<<8)+13, offsetof(CWorldSettingsController, m_tmActivatedPlate4), "", 0, 0, EPROPF_NETSEND ),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x0000025d<<8)+14, offsetof(CWorldSettingsController, m_tmDeactivatedPlate4), "", 0, 0, EPROPF_NETSEND ),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x0000025d<<8)+15, offsetof(CWorldSettingsController, m_tmPyramidMorphRoomActivated), "", 0, 0, EPROPF_NETSEND ),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x0000025d<<8)+20, offsetof(CWorldSettingsController, m_tmShakeStarted), "", 0, 0, EPROPF_NETSEND ),
 CEntityProperty(CEntityProperty::EPT_FLOAT3D, NULL, (0x0000025d<<8)+21, offsetof(CWorldSettingsController, m_vShakePos), "", 0, 0, EPROPF_NETSEND ),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x0000025d<<8)+22, offsetof(CWorldSettingsController, m_fShakeFalloff), "", 0, 0, EPROPF_NETSEND ),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x0000025d<<8)+23, offsetof(CWorldSettingsController, m_fShakeFade), "", 0, 0, EPROPF_NETSEND ),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x0000025d<<8)+24, offsetof(CWorldSettingsController, m_fShakeIntensityY), "", 0, 0, EPROPF_NETSEND ),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x0000025d<<8)+25, offsetof(CWorldSettingsController, m_tmShakeFrequencyY), "", 0, 0, EPROPF_NETSEND ),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x0000025d<<8)+26, offsetof(CWorldSettingsController, m_fShakeIntensityB), "", 0, 0, EPROPF_NETSEND ),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x0000025d<<8)+27, offsetof(CWorldSettingsController, m_tmShakeFrequencyB), "", 0, 0, EPROPF_NETSEND ),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x0000025d<<8)+31, offsetof(CWorldSettingsController, m_fShakeIntensityZ), "", 0, 0, EPROPF_NETSEND ),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x0000025d<<8)+32, offsetof(CWorldSettingsController, m_tmShakeFrequencyZ), "", 0, 0, EPROPF_NETSEND ),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x0000025d<<8)+33, offsetof(CWorldSettingsController, m_bShakeFadeIn), "", 0, 0, EPROPF_NETSEND ),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x0000025d<<8)+28, offsetof(CWorldSettingsController, m_penEnvPartHolder), "Environment Particles Holder", 'T', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x0000025d<<8)+29, offsetof(CWorldSettingsController, m_bNoSaveGame), "No QuickSave on level start", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x0000025d<<8)+41, offsetof(CWorldSettingsController, m_tmGlaringStarted), "", 0, 0, EPROPF_NETSEND ),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x0000025d<<8)+42, offsetof(CWorldSettingsController, m_tmGlaringEnded), "", 0, 0, EPROPF_NETSEND ),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x0000025d<<8)+43, offsetof(CWorldSettingsController, m_fGlaringFadeInRatio), "", 0, 0, EPROPF_NETSEND ),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x0000025d<<8)+44, offsetof(CWorldSettingsController, m_fGlaringFadeOutRatio), "", 0, 0, EPROPF_NETSEND ),
 CEntityProperty(CEntityProperty::EPT_COLOR, NULL, (0x0000025d<<8)+45, offsetof(CWorldSettingsController, m_colGlade), "", 0, 0, EPROPF_NETSEND ),
 CEntityProperty(CEntityProperty::EPT_COLOR, NULL, (0x0000025d<<8)+50, offsetof(CWorldSettingsController, m_colBlendStart), "", 0, 0, EPROPF_NETSEND ),
 CEntityProperty(CEntityProperty::EPT_COLOR, NULL, (0x0000025d<<8)+51, offsetof(CWorldSettingsController, m_colBlendStop), "", 0, 0, EPROPF_NETSEND ),
 CEntityProperty(CEntityProperty::EPT_COLOR, NULL, (0x0000025d<<8)+52, offsetof(CWorldSettingsController, m_colShadeStart), "", 0, 0, EPROPF_NETSEND ),
 CEntityProperty(CEntityProperty::EPT_COLOR, NULL, (0x0000025d<<8)+53, offsetof(CWorldSettingsController, m_colShadeStop), "", 0, 0, EPROPF_NETSEND ),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x0000025d<<8)+55, offsetof(CWorldSettingsController, m_bApplyShadingToModels), "Apply shading to models", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x0000025d<<8)+62, offsetof(CWorldSettingsController, m_tmStormAppearTime), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x0000025d<<8)+63, offsetof(CWorldSettingsController, m_tmStormDisappearTime), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x0000025d<<8)+73, offsetof(CWorldSettingsController, m_penHudPicFXHolder), "", 0, 0, 0),
};
#define CWorldSettingsController_propertiesct ARRAYCOUNT(CWorldSettingsController_properties)

CEntityComponent CWorldSettingsController_components[] = {
#define MODEL_WORLD_SETTINGS_CONTROLLER ((0x0000025d<<8)+1)
 CEntityComponent(ECT_MODEL, MODEL_WORLD_SETTINGS_CONTROLLER, 2, "EFNM" "Data\\Models\\Editor\\WorldSettingsController.mdl"),
#define TEXTURE_WORLD_SETTINGS_CONTROLLER ((0x0000025d<<8)+2)
 CEntityComponent(ECT_TEXTURE, TEXTURE_WORLD_SETTINGS_CONTROLLER, 2, "EFNM" "Data\\Models\\Editor\\WorldSettingsController.tex"),
};
#define CWorldSettingsController_componentsct ARRAYCOUNT(CWorldSettingsController_components)

CEventHandlerEntry CWorldSettingsController_handlers[] = {
 {1, -1, CEntity::pEventHandler(&CWorldSettingsController::
#line 185 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/WorldSettingsController.es"
Main),DEBUGSTRING("CWorldSettingsController::Main")},
};
#define CWorldSettingsController_handlersct ARRAYCOUNT(CWorldSettingsController_handlers)

CEntity *CWorldSettingsController_New(void) { return new CWorldSettingsController; };
void CWorldSettingsController_OnInitClass(void) {};
void CWorldSettingsController_OnEndClass(void) {};
void CWorldSettingsController_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CWorldSettingsController_OnWorldEnd(CWorld *pwo) {};
void CWorldSettingsController_OnWorldInit(CWorld *pwo) {};
void CWorldSettingsController_OnWorldTick(CWorld *pwo) {};
void CWorldSettingsController_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CWorldSettingsController, CEntity, "WorldSettingsController", "Thumbnails\\WorldSettingsController.tbn", 0x0000025d);
DECLARE_CTFILENAME(_fnmCWorldSettingsController_tbn, "Thumbnails\\WorldSettingsController.tbn");
