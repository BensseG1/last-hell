/*
 * This file is generated by Entity Class Compiler, (c) CroTeam 1997-98
 */

#ifndef _GradientMarker_INCLUDED
#define _GradientMarker_INCLUDED 1
#include <EntitiesMP/Marker.h>
#include <EntitiesMP/WorldBase.h>
extern "C" DECL_DLL CDLLEntityClass CGradientMarker_DLLClass;
class CGradientMarker : public CMarker {
public:
virtual BOOL IsImportant(void) const { return TRUE; };
	DECL_DLL virtual void SetDefaultProperties(void);
	FLOAT m_fHeight;
	BOOL m_bDarkLight;
	COLOR m_colColor0;
	COLOR m_colColor1;
   
#line 27 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/GradientMarker.es"
const CTString & GetGradientName(void);
   
#line 32 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/GradientMarker.es"
BOOL GetGradient(INDEX iGradient,class CGradientParameters & gpGradient);
   
#line 49 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/GradientMarker.es"
void UncacheShadowsForGradient(void);
   
#line 61 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/GradientMarker.es"
void SetPlacement_special(const CPlacement3D & plNew,const FLOATmatrix3D & mRotation,ULONG ulFlags);
   
#line 67 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/GradientMarker.es"
void OnEnd(void);
#define  STATE_CGradientMarker_Main 1
	BOOL 
#line 75 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/GradientMarker.es"
Main(const CEntityEvent &__eeInput);
};
#endif // _GradientMarker_INCLUDED