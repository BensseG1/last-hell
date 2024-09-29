/*
 * This file is generated by Entity Class Compiler, (c) CroTeam 1997-98
 */

#ifndef _HudPicHolder_INCLUDED
#define _HudPicHolder_INCLUDED 1
extern "C" DECL_DLL CDLLEntityClass CHudPicHolder_DLLClass;
class CHudPicHolder : public CRationalEntity {
public:
virtual BOOL IsTargetable(void) const { return TRUE; };
virtual const CTString &GetName(void) const { return m_strName; };
virtual BOOL IsImportant(void) const { return TRUE; };
	DECL_DLL virtual void SetDefaultProperties(void);
	CTString m_strName;
	CTString m_strDescription;
	CTFileName m_fnmPicture;
	FLOAT m_tmFadeInStart;
	FLOAT m_tmFadeOutStart;
	FLOAT m_tmFadeInLen;
	FLOAT m_tmFadeOutLen;
	FLOAT m_tmAutoFadeOut;
	FLOAT m_fYRatio;
	FLOAT m_fXRatio;
	FLOAT m_fPictureStretch;
   
#line 39 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/HudPicHolder.es"
const CTString & GetDescription(void)const;
   
#line 44 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/HudPicHolder.es"
BOOL ReloadData(void);
   
#line 55 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/HudPicHolder.es"
BOOL LoadOneFile(const CTFileName & fnm);
   
#line 71 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/HudPicHolder.es"
BOOL Picture_On(CTFileName fnPic);
   
#line 77 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/HudPicHolder.es"
void Picture_Off(void);
   
#line 83 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/HudPicHolder.es"
FLOAT HudPic_Render(CHudPicHolder * penThis,CDrawPort * pdp);
#define  STATE_CHudPicHolder_Main 1
	BOOL 
#line 144 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/HudPicHolder.es"
Main(const CEntityEvent &__eeInput);
	BOOL H0x00f10000_Main_01(const CEntityEvent &__eeInput);
	BOOL H0x00f10001_Main_02(const CEntityEvent &__eeInput);
	BOOL H0x00f10002_Main_03(const CEntityEvent &__eeInput);
	BOOL H0x00f10003_Main_04(const CEntityEvent &__eeInput);
#define  STATE_CHudPicHolder_WaitAndFadeOut 0x00f10004
	BOOL 
#line 199 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/HudPicHolder.es"
WaitAndFadeOut(const CEntityEvent &__eeInput);
	BOOL H0x00f10005_WaitAndFadeOut_01(const CEntityEvent &__eeInput);
	BOOL H0x00f10006_WaitAndFadeOut_02(const CEntityEvent &__eeInput);
#define  STATE_CHudPicHolder_ApplyFadeOut 0x00f10007
	BOOL 
#line 205 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/HudPicHolder.es"
ApplyFadeOut(const CEntityEvent &__eeInput);
	BOOL H0x00f10008_ApplyFadeOut_01(const CEntityEvent &__eeInput);
	BOOL H0x00f10009_ApplyFadeOut_02(const CEntityEvent &__eeInput);
	BOOL H0x00f1000a_ApplyFadeOut_03(const CEntityEvent &__eeInput);
};
#endif // _HudPicHolder_INCLUDED
