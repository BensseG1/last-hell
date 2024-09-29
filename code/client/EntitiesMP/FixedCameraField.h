/*
 * This file is generated by Entity Class Compiler, (c) CroTeam 1997-98
 */

#ifndef _FixedCameraField_INCLUDED
#define _FixedCameraField_INCLUDED 1
extern "C" DECL_DLL CDLLEntityClass CFixedCameraField_DLLClass;
class CFixedCameraField : public CRationalEntity {
public:
virtual const CTString &GetName(void) const { return m_strName; };
virtual BOOL IsTargetable(void) const { return TRUE; };
	DECL_DLL virtual void SetDefaultProperties(void);
	CTString m_strName;
	CTString m_strDescription;
	FLOAT du;
	FLOAT dv;
	FLOAT dw;
	CEntityPointer m_penMarker;
    CFixedCameraField(void);
     ~ CFixedCameraField(void);
   
#line 46 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/FixedCameraField.es"
const CTString & GetDescription(void)const;
   
#line 51 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/FixedCameraField.es"
SLONG GetUsedMemory(void);
#define  STATE_CFixedCameraField_Main 1
	BOOL 
#line 61 "C:/Users/djcyb/Desktop/BAckups/Reco_Csrc/EntitiesMP/FixedCameraField.es"
Main(const CEntityEvent &__eeInput);
};
#endif // _FixedCameraField_INCLUDED
