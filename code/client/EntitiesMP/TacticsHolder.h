/*
 * This file is generated by Entity Class Compiler, (c) CroTeam 1997-98
 */

#ifndef _TacticsHolder_INCLUDED
#define _TacticsHolder_INCLUDED 1
extern DECL_DLL CEntityPropertyEnumType TacticType_enum;
enum TacticType {
	TCT_NONE = 0,
	TCT_DAMP_ANGLE_STRIFE = 1,
	TCT_PARALLEL_RANDOM_DISTANCE = 2,
	TCT_STATIC_RANDOM_V_DISTANCE = 3,
};
DECL_DLL inline void ClearToDefault(TacticType &e) { e = (TacticType)0; } ;
extern "C" DECL_DLL CDLLEntityClass CTacticsHolder_DLLClass;
class CTacticsHolder : public CRationalEntity {
public:
virtual const CTString &GetName(void) const { return m_strName; };
virtual BOOL IsTargetable(void) const { return TRUE; };
	DECL_DLL virtual void SetDefaultProperties(void);
	CTString m_strName;
	CTString m_strDescription;
	enum TacticType m_tctType;
	FLOAT m_fParam1;
	FLOAT m_fParam2;
	FLOAT m_fParam3;
	FLOAT m_fParam4;
	FLOAT m_fParam5;
	FLOAT m_tmLastActivation;
   
#line 39 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/TacticsHolder.es"
const CTString & GetDescription(void)const;
#define  STATE_CTacticsHolder_Main 1
	BOOL 
#line 44 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/TacticsHolder.es"
Main(const CEntityEvent &__eeInput);
	BOOL H0x00eb0000_Main_01(const CEntityEvent &__eeInput);
	BOOL H0x00eb0001_Main_02(const CEntityEvent &__eeInput);
	BOOL H0x00eb0002_Main_03(const CEntityEvent &__eeInput);
	BOOL H0x00eb0003_Main_04(const CEntityEvent &__eeInput);
	BOOL H0x00eb0004_Main_05(const CEntityEvent &__eeInput);
	BOOL H0x00eb0005_Main_06(const CEntityEvent &__eeInput);
};
#endif // _TacticsHolder_INCLUDED
