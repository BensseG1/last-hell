/*
 * This file is generated by Entity Class Compiler, (c) CroTeam 1997-98
 */

EP_ENUMBEG(wPetAIState)
	EP_ENUMVALUE(WPET_AI_NONE, ""),
	EP_ENUMVALUE(WPET_AI_STOP, ""),
	EP_ENUMVALUE(WPET_AI_ACTION, ""),
	EP_ENUMVALUE(WPET_AI_NORMALATTACK, ""),
	EP_ENUMVALUE(WPET_AI_USESKILL, ""),
	EP_ENUMVALUE(WPET_AI_FOLLOW, ""),
EP_ENUMEND(wPetAIState);

EP_ENUMBEG(EventType)
	EP_ENUMVALUE(EVENT_NONE, "None"),
	EP_ENUMVALUE(EVENT_MOBCREATE, "Mob Created"),
	EP_ENUMVALUE(EVENT_MOBDESTROY, "Mob Destroyed"),
	EP_ENUMVALUE(EVENT_MOBCLICK, "Mob Clicked"),
EP_ENUMEND(EventType);

EP_ENUMBEG(DestinationType)
	EP_ENUMVALUE(DT_PLAYERCURRENT, ""),
	EP_ENUMVALUE(DT_PLAYERSPOTTED, ""),
	EP_ENUMVALUE(DT_PATHTEMPORARY, ""),
	EP_ENUMVALUE(DT_PATHPERSISTENT, ""),
EP_ENUMEND(DestinationType);

EP_ENUMBEG(TargetType)
	EP_ENUMVALUE(TT_NONE, ""),
	EP_ENUMVALUE(TT_SOFT, ""),
	EP_ENUMVALUE(TT_HARD, ""),
EP_ENUMEND(TargetType);

CDLLEntityEvent *CUnit_events[] = {NULL};
#define CUnit_eventsct 0
#define ENTITYCLASS CUnit

CEntityProperty CUnit_properties[] = {
 CEntityProperty(CEntityProperty::EPT_ENUM, &TargetType_enum, (0x0000299d<<8)+4, offsetof(CUnit, m_ttTarget), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_STRING, NULL, (0x0000299d<<8)+200, offsetof(CUnit, m_strName), " Name", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x0000299d<<8)+143, offsetof(CUnit, m_fMaxHealth), "", 0, 0, EPROPF_NETSEND ),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x0000299d<<8)+201, offsetof(CUnit, m_nMaxiHealth), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x0000299d<<8)+202, offsetof(CUnit, m_nCurrentHealth), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x0000299d<<8)+205, offsetof(CUnit, m_nMobLevel), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x0000299d<<8)+206, offsetof(CUnit, m_nPreHealth), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x0000299d<<8)+209, offsetof(CUnit, m_nMobDBIndex), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x0000299d<<8)+95, offsetof(CUnit, m_fActivityRange), "Activity Range", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_RANGE, NULL, (0x0000299d<<8)+88, offsetof(CUnit, m_fAttackRadius), "Radius of attack", 'A', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_ENUM, &DestinationType_enum, (0x0000299d<<8)+53, offsetof(CUnit, m_dtDestination), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x0000299d<<8)+10, offsetof(CUnit, m_fWalkSpeed), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_ANGLE, NULL, (0x0000299d<<8)+11, offsetof(CUnit, m_aWalkRotateSpeed), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x0000299d<<8)+12, offsetof(CUnit, m_fAttackRunSpeed), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_ANGLE, NULL, (0x0000299d<<8)+13, offsetof(CUnit, m_aAttackRotateSpeed), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x0000299d<<8)+14, offsetof(CUnit, m_fCloseRunSpeed), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_ANGLE, NULL, (0x0000299d<<8)+15, offsetof(CUnit, m_aCloseRotateSpeed), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x0000299d<<8)+20, offsetof(CUnit, m_fAttackDistance), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x0000299d<<8)+21, offsetof(CUnit, m_fCloseDistance), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x0000299d<<8)+22, offsetof(CUnit, m_fAttackFireTime), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x0000299d<<8)+23, offsetof(CUnit, m_fCloseFireTime), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x0000299d<<8)+24, offsetof(CUnit, m_fStopDistance), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x0000299d<<8)+25, offsetof(CUnit, m_fIgnoreRange), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x0000299d<<8)+133, offsetof(CUnit, m_fMoveTime), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x0000299d<<8)+55, offsetof(CUnit, m_fMoveSpeed), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_ANGLE, NULL, (0x0000299d<<8)+56, offsetof(CUnit, m_aRotateSpeed), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x0000299d<<8)+54, offsetof(CUnit, m_fMoveFrequency), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_RANGE, NULL, (0x0000299d<<8)+17, offsetof(CUnit, m_fSenseRange), "Sense Range", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x0000299d<<8)+28, offsetof(CUnit, m_fViewAngle), "View angle", 'V', 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x0000299d<<8)+29, offsetof(CUnit, m_fFallHeight), "Fall height", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x0000299d<<8)+31, offsetof(CUnit, m_fStepHeight), "Step height", 0, 0x7F0000FFUL, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x0000299d<<8)+60, offsetof(CUnit, m_fShootTime), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x0000299d<<8)+61, offsetof(CUnit, m_fDamageConfused), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x0000299d<<8)+40, offsetof(CUnit, m_fBlowUpAmount), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x0000299d<<8)+41, offsetof(CUnit, m_fBodyParts), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x0000299d<<8)+42, offsetof(CUnit, m_fDamageWounded), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x0000299d<<8)+224, offsetof(CUnit, m_nPlayActionNum), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT3D, NULL, (0x0000299d<<8)+52, offsetof(CUnit, m_vDesiredPosition), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x0000299d<<8)+213, offsetof(CUnit, m_bSkilling), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x0000299d<<8)+214, offsetof(CUnit, m_nCurrentSkillNum), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x0000299d<<8)+43, offsetof(CUnit, m_fSkillSpeed), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x0000299d<<8)+215, offsetof(CUnit, m_fAttackLengthMul), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x0000299d<<8)+216, offsetof(CUnit, m_fAttackSpeedMul), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x0000299d<<8)+217, offsetof(CUnit, m_idCurrentSkillAnim), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x0000299d<<8)+204, offsetof(CUnit, m_bAttack), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x0000299d<<8)+191, offsetof(CUnit, m_bWasKilled), "", 0, 0, EPROPF_NETSEND ),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x0000299d<<8)+193, offsetof(CUnit, m_bUseAI), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x0000299d<<8)+194, offsetof(CUnit, m_bAIStart), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x0000299d<<8)+156, offsetof(CUnit, m_tmSkillStartTime), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x0000299d<<8)+157, offsetof(CUnit, m_tmSkillAnimTime), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x0000299d<<8)+158, offsetof(CUnit, m_fSkillAnimTime), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x0000299d<<8)+116, offsetof(CUnit, m_bKillEnemy), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT3D, NULL, (0x0000299d<<8)+232, offsetof(CUnit, m_vMyPositionTmp), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_INDEX, NULL, (0x0000299d<<8)+112, offsetof(CUnit, m_enAttackerID), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x0000299d<<8)+117, offsetof(CUnit, m_bStuned), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x0000299d<<8)+118, offsetof(CUnit, m_bHold), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x0000299d<<8)+119, offsetof(CUnit, m_bCannotUseSkill), "", 0, 0, 0),
};
#define CUnit_propertiesct ARRAYCOUNT(CUnit_properties)

CEntityComponent CUnit_components[] = {
	CEntityComponent()
};
#define CUnit_componentsct 0


CEventHandlerEntry CUnit_handlers[] = {
 {1, -1, CEntity::pEventHandler(&CUnit::
#line 695 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/Unit.es"
Main),DEBUGSTRING("CUnit::Main")},
};
#define CUnit_handlersct ARRAYCOUNT(CUnit_handlers)

CEntity *CUnit_New(void) { return new CUnit; };
void CUnit_OnInitClass(void) {};
void CUnit_OnEndClass(void) {};
void CUnit_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CUnit_OnWorldEnd(CWorld *pwo) {};
void CUnit_OnWorldInit(CWorld *pwo) {};
void CUnit_OnWorldTick(CWorld *pwo) {};
void CUnit_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CUnit, CMovableModelEntity, "Unit", "", 0x0000299d);
DECLARE_CTFILENAME(_fnmCUnit_tbn, "");
