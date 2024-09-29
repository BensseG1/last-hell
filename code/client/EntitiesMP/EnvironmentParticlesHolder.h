/*
 * This file is generated by Entity Class Compiler, (c) CroTeam 1997-98
 */

#ifndef _EnvironmentParticlesHolder_INCLUDED
#define _EnvironmentParticlesHolder_INCLUDED 1
extern DECL_DLL CEntityPropertyEnumType EnvironmentParticlesHolderType_enum;
enum EnvironmentParticlesHolderType {
	EPTH_NONE = 0,
	EPTH_GROWTH = 1,
	EPTH_RAIN = 2,
	EPTH_SNOW = 3,
};
DECL_DLL inline void ClearToDefault(EnvironmentParticlesHolderType &e) { e = (EnvironmentParticlesHolderType)0; } ;
#define EVENTCODE_EWeatherStart 0x00ed0000
class DECL_DLL EWeatherStart : public CEntityEvent {
public:
	EWeatherStart();
	CEntityEvent *MakeCopy(void);
	BOOL CheckIDs(void);
	SLONG GetSizeOf(void);
};
DECL_DLL inline void ClearToDefault(EWeatherStart &e) { e = EWeatherStart(); } ;
#define EVENTCODE_EWeatherStop 0x00ed0001
class DECL_DLL EWeatherStop : public CEntityEvent {
public:
	EWeatherStop();
	CEntityEvent *MakeCopy(void);
	BOOL CheckIDs(void);
	SLONG GetSizeOf(void);
};
DECL_DLL inline void ClearToDefault(EWeatherStop &e) { e = EWeatherStop(); } ;
extern "C" DECL_DLL CDLLEntityClass CEnvironmentParticlesHolder_DLLClass;
class CEnvironmentParticlesHolder : public CRationalEntity {
public:
virtual BOOL IsTargetable(void) const { return TRUE; };
virtual const CTString &GetName(void) const { return m_strName; };
virtual const CTString &GetDescription(void) const { return m_strDescription; };
virtual BOOL IsImportant(void) const { return TRUE; };
	DECL_DLL virtual void SetDefaultProperties(void);
	CTString m_strName;
	CTString m_strDescription;
	CTFileName m_fnHeightMap;
	FLOATaabbox3D m_boxHeightMap;
	enum EnvironmentParticlesHolderType m_eptType;
	CEntityPointer m_penNextHolder;
	FLOAT m_tmRainStart;
	FLOAT m_tmRainEnd;
	FLOAT m_tmSnowStart;
	FLOAT m_tmSnowEnd;
	CModelObject m_moHeightMapHolder;
	CModelObject m_moParticleTextureHolder;
	CTFileName m_fnTexture;
	FLOAT m_fGrowthRenderingStep;
	FLOAT m_fGrowthRenderingRadius;
	FLOAT m_fGrowthRenderingRadiusFade;
	BOOL m_bGrowthHighresMap;
	INDEX m_iGrowthMapX;
	INDEX m_iGrowthMapY;
	FLOAT m_fGrowthMinSize;
	FLOAT m_fGrowthMaxSize;
	FLOAT m_fParticlesSinkFactor;
	FLOAT m_fRainAppearLen;
	FLOAT m_fSnowAppearLen;
	FLOAT m_fParticleSize;
	INDEX m_iParticleCount;
	FLOAT m_vWindX;
	FLOAT m_vWindZ;
	FLOAT m_vDropSpeed;
	COLOR m_colParticle;
	BOOL m_bRenderOutsideBox;
CListHead lhCache;
   
#line 82 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/EnvironmentParticlesHolder.es"
void Precache(void);
   
#line 91 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/EnvironmentParticlesHolder.es"
BOOL IsTargetValid(SLONG slPropertyOffset,CEntity * penTarget);
   
#line 100 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/EnvironmentParticlesHolder.es"
FLOAT GetRainFactor(void);
   
#line 127 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/EnvironmentParticlesHolder.es"
FLOAT GetSnowFactor(void);
   
#line 154 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/EnvironmentParticlesHolder.es"
void GetHeightMapData(CTextureData * & ptdHeightMap,FLOATaabbox3D & boxHeightMap);
   
#line 161 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/EnvironmentParticlesHolder.es"
void GetParticleTexture();
#define  STATE_CEnvironmentParticlesHolder_Main 1
	BOOL 
#line 167 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/EnvironmentParticlesHolder.es"
Main(const CEntityEvent &__eeInput);
	BOOL H0x00ed0002_Main_01(const CEntityEvent &__eeInput);
	BOOL H0x00ed0003_Main_02(const CEntityEvent &__eeInput);
};
#endif // _EnvironmentParticlesHolder_INCLUDED
