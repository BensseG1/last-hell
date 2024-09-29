/*
 * This file is generated by Entity Class Compiler, (c) CroTeam 1997-98
 */

#ifndef _WaterHolderMarker_INCLUDED
#define _WaterHolderMarker_INCLUDED 1
#include <EntitiesMP/Marker.h>
#include <EntitiesMP/Terrain.h>
extern "C" DECL_DLL CDLLEntityClass CWaterHolderMarker_DLLClass;
class CWaterHolderMarker : public CMarker {
public:
virtual const CTString &GetName(void) const { return m_strName; };
virtual BOOL IsTargetable(void) const { return TRUE; };
	DECL_DLL virtual void SetDefaultProperties(void);
	CTString m_strName;
	INDEX m_iGridX;
	INDEX m_iGridY;
	FLOAT m_fWidthSize;
	FLOAT m_fHeightSize;
	BOOL m_bGenerate;
	INDEX m_iStartID;
   
#line 26 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/WaterHolderMarker.es"
void InitWaterMarker();
   
#line 37 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/WaterHolderMarker.es"
void GenerateWaterEntity();
#define  STATE_CWaterHolderMarker_Main 1
	BOOL 
#line 70 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/WaterHolderMarker.es"
Main(const CEntityEvent &__eeInput);
};
#endif // _WaterHolderMarker_INCLUDED
