/*
 * This file is generated by Entity Class Compiler, (c) CroTeam 1997-98
 */

#ifndef _FogMarker_INCLUDED
#define _FogMarker_INCLUDED 1
#include <EntitiesMP/Marker.h>
extern DECL_DLL CEntityPropertyEnumType FogAttenuationType_enum;
enum FogAttenuationType {
	FA_LINEAR = 0,
	FA_EXP = 1,
	FA_EXP2 = 2,
};
DECL_DLL inline void ClearToDefault(FogAttenuationType &e) { e = (FogAttenuationType)0; } ;
extern DECL_DLL CEntityPropertyEnumType FogGraduationType2_enum;
enum FogGraduationType2 {
	FG_CONSTANT = 0,
	FG_LINEAR = 1,
	FG_EXP = 2,
};
DECL_DLL inline void ClearToDefault(FogGraduationType2 &e) { e = (FogGraduationType2)0; } ;
extern "C" DECL_DLL CDLLEntityClass CFogMarker_DLLClass;
class CFogMarker : public CMarker {
public:
virtual BOOL IsImportant(void) const { return TRUE; };
	DECL_DLL virtual void SetDefaultProperties(void);
	FLOAT m_fDepth;
	FLOAT m_fAbove;
	FLOAT m_fBelow;
	FLOAT m_fFar;
	enum FogAttenuationType m_faType;
	FLOAT m_fDensity;
	enum FogGraduationType2 m_fgType;
	FLOAT m_fGraduation;
	BOOL m_bDensityDirect;
	FLOAT m_fDensityPercentage;
	FLOAT m_fDensityDistance;
	BOOL m_bGraduationDirect;
	FLOAT m_fGraduationPercentage;
	FLOAT m_fGraduationDistance;
	INDEX m_iSizeL;
	INDEX m_iSizeH;
	COLOR m_colColor;
   
#line 57 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/FogMarker.es"
const CTString & GetFogName(void);
   
#line 62 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/FogMarker.es"
void GetFog(class CFogParameters & fpFog);
#define  STATE_CFogMarker_Main 1
	BOOL 
#line 83 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/FogMarker.es"
Main(const CEntityEvent &__eeInput);
};
#endif // _FogMarker_INCLUDED
