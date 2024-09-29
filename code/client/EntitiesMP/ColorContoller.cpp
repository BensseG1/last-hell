/*
 * This file is generated by Entity Class Compiler, (c) CroTeam 1997-98
 */

#line 2 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"

#include "StdH.h"
#include <Engine/Base/Timer.h>

inline BOOL IsNull(CEntityPointer &pen)	{ return pen.ep_pen == NULL; }
inline BOOL NotNull(CEntityPointer &pen)	{ return pen.ep_pen != NULL; }

#include <ColorContoller.h>
#include <ColorContoller_tables.h>
void CColorController::SetDefaultProperties(void) {
	m_cctType = CCT_COLORANDALPHA ;
	m_strName = "";
	m_colGoal = (C_WHITE  | CT_OPAQUE );
	m_fFadeInTime = 1200.0f;
	m_fFadeOutTime = 1200.0f;
	m_penTarget01 = NULL;
	m_penTarget02 = NULL;
	m_penTarget03 = NULL;
	m_penTarget04 = NULL;
	m_penTarget05 = NULL;
	m_penTarget06 = NULL;
	m_penTarget07 = NULL;
	m_penTarget08 = NULL;
	m_penTarget09 = NULL;
	m_penTarget10 = NULL;
	m_penTarget11 = NULL;
	m_penTarget12 = NULL;
	m_penTarget13 = NULL;
	m_penTarget14 = NULL;
	m_penTarget15 = NULL;
	m_penTarget16 = NULL;
	m_penTarget17 = NULL;
	m_penTarget18 = NULL;
	m_penTarget19 = NULL;
	m_penTarget20 = NULL;
	CRationalEntity::SetDefaultProperties();
}

#line 88 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
BOOL CColorController::IsTargetValid(SLONG slPropertyOffset,CEntity * penTarget) 
#line 89 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
{
#line 90 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
if(penTarget  == NULL ){return FALSE ;}
#line 92 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
ULONG  ulFirst  , ulLast ;
#line 95 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
ulFirst  = offsetof  (CColorController  , m_penTarget01 );
#line 96 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
ulLast  = offsetof  (CColorController  , m_penTarget10 );
#line 97 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
if(slPropertyOffset  >= ulFirst  && slPropertyOffset  <= ulLast )
#line 98 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
{
#line 99 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
return IsDerivedFromClass  (penTarget  , & CModelHolder3_DLLClass ) 
#line 100 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
|| IsDerivedFromClass  (penTarget  , & CModelHolder2_DLLClass ) 
#line 101 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
|| IsDerivedFromClass  (penTarget  , & CLight_DLLClass );
#line 102 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
}
#line 103 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
return CEntity  :: IsTargetValid  (slPropertyOffset  , penTarget );
#line 104 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
}

#line 106 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
COLOR CColorController::GetColor(CEntityPointer pen) 
#line 107 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
{
#line 108 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
if(IsNull  (pen )){return C_BLACK ;}
#line 110 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
if(IsDerivedFromClass  (pen  , & CModelHolder3_DLLClass ))
#line 111 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
{
#line 112 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
return ((CModelHolder3  *) (CEntity  *) pen ) -> m_colModelColor ;
#line 113 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
}
#line 114 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
else if(IsDerivedFromClass  (pen  , & CModelHolder2_DLLClass ))
#line 115 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
{
#line 116 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
return ((CModelHolder2  *) (CEntity  *) pen ) -> m_colModelColor ;
#line 117 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
}
#line 118 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
else if(IsDerivedFromClass  (pen  , & CLight_DLLClass ))
#line 119 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
{
#line 120 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
return ((CLight  *) (CEntity  *) pen ) -> m_colColor ;
#line 121 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
}
#line 122 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
return C_WHITE  | CT_OPAQUE ;
#line 123 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
}

#line 124 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
void CColorController::SetColor(CEntityPointer pen,COLOR color) 
#line 125 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
{
#line 126 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
if(IsNull  (pen )){return ;}
#line 128 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
if(IsDerivedFromClass  (pen  , & CModelHolder3_DLLClass ))
#line 129 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
{
#line 130 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
((CModelHolder3  *) (CEntity  *) pen ) -> SetModelColor  (color );
#line 131 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
}
#line 132 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
else if(IsDerivedFromClass  (pen  , & CModelHolder2_DLLClass ))
#line 133 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
{
#line 134 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
((CModelHolder2  *) (CEntity  *) pen ) -> SetModelColor  (color );
#line 135 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
}
#line 136 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
else if(IsDerivedFromClass  (pen  , & CLight_DLLClass ))
#line 137 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
{
#line 138 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
((CLight  *) (CEntity  *) pen ) -> m_lsLightSource  . ls_colColor  = color ;
#line 139 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
}
#line 140 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
}

#line 142 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
void CColorController::FillTargetOriginalColor() 
#line 143 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
{
#line 144 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
if(NotNull  (m_penTarget01 )){m_colTarget01  = GetColor  (m_penTarget01 );}
#line 145 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
if(NotNull  (m_penTarget02 )){m_colTarget02  = GetColor  (m_penTarget02 );}
#line 146 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
if(NotNull  (m_penTarget03 )){m_colTarget03  = GetColor  (m_penTarget03 );}
#line 147 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
if(NotNull  (m_penTarget04 )){m_colTarget04  = GetColor  (m_penTarget04 );}
#line 148 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
if(NotNull  (m_penTarget05 )){m_colTarget05  = GetColor  (m_penTarget05 );}
#line 149 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
if(NotNull  (m_penTarget06 )){m_colTarget06  = GetColor  (m_penTarget06 );}
#line 150 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
if(NotNull  (m_penTarget07 )){m_colTarget07  = GetColor  (m_penTarget07 );}
#line 151 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
if(NotNull  (m_penTarget08 )){m_colTarget08  = GetColor  (m_penTarget08 );}
#line 152 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
if(NotNull  (m_penTarget09 )){m_colTarget09  = GetColor  (m_penTarget09 );}
#line 153 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
if(NotNull  (m_penTarget10 )){m_colTarget10  = GetColor  (m_penTarget10 );}
#line 154 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
if(NotNull  (m_penTarget11 )){m_colTarget11  = GetColor  (m_penTarget11 );}
#line 155 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
if(NotNull  (m_penTarget12 )){m_colTarget12  = GetColor  (m_penTarget12 );}
#line 156 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
if(NotNull  (m_penTarget13 )){m_colTarget13  = GetColor  (m_penTarget13 );}
#line 157 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
if(NotNull  (m_penTarget14 )){m_colTarget14  = GetColor  (m_penTarget14 );}
#line 158 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
if(NotNull  (m_penTarget15 )){m_colTarget15  = GetColor  (m_penTarget15 );}
#line 159 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
if(NotNull  (m_penTarget16 )){m_colTarget16  = GetColor  (m_penTarget16 );}
#line 160 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
if(NotNull  (m_penTarget17 )){m_colTarget17  = GetColor  (m_penTarget17 );}
#line 161 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
if(NotNull  (m_penTarget18 )){m_colTarget18  = GetColor  (m_penTarget18 );}
#line 162 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
if(NotNull  (m_penTarget19 )){m_colTarget19  = GetColor  (m_penTarget19 );}
#line 163 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
if(NotNull  (m_penTarget20 )){m_colTarget20  = GetColor  (m_penTarget20 );}
#line 164 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
}

#line 165 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
FLOAT CColorController::GetRatio() 
#line 166 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
{
#line 167 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
if(m_bIsFadeIn ){return Clamp  (1.0f - m_fLeftFadeTime  / m_fAllFadeTime  , 0.0f , 1.0f);}
#line 168 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
else {return Clamp  (m_fLeftFadeTime  / m_fAllFadeTime  , 0.0f , 1.0f);}
#line 169 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
}

#line 170 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
void CColorController::ColorProcess(CEntityPointer pen,COLOR colOriginal,FLOAT fRatio) 
#line 171 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
{
#line 172 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
if(IsNull  (pen )){return ;}
#line 174 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
COLOR color ;
#line 175 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
if(m_cctType  == CCT_COLORANDALPHA  || m_cctType  == CCT_DAYNIGHTCOLOR )
#line 176 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
{
#line 177 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
color  = LerpColorInline  (colOriginal  , m_colGoal  , fRatio );
#line 178 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
}
#line 179 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
else if(m_cctType  == CCT_ONLYCOLOR )
#line 180 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
{
#line 181 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
UBYTE  ubR0  , ubG0  , ubB0  , ubA0 ;
#line 182 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
UBYTE  ubR1  , ubG1  , ubB1 ;
#line 183 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
ColorToRGBA  (colOriginal  , ubR0  , ubG0  , ubB0  , ubA0 );
#line 184 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
ColorToRGB  (m_colGoal  , ubR1  , ubG1  , ubB1 );
#line 185 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
ubR0  = Lerp  (ubR0  , ubR1  , fRatio );
#line 186 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
ubG0  = Lerp  (ubG0  , ubG1  , fRatio );
#line 187 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
ubB0  = Lerp  (ubB0  , ubB1  , fRatio );
#line 188 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
color  = RGBAToColor  (ubR0  , ubG0  , ubB0  , ubA0 );
#line 189 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
}
#line 190 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
else if(m_cctType  == CCT_ONLYALPHA )
#line 191 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
{
#line 192 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
UBYTE  ubR0  , ubG0  , ubB0  , ubA0 ;
#line 193 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
UBYTE  ubA1 ;
#line 194 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
ColorToRGBA  (colOriginal  , ubR0  , ubG0  , ubB0  , ubA0 );
#line 195 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
ubA1  = m_colGoal  & CT_OPAQUE ;
#line 196 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
ubA0  = Lerp  (ubA0  , ubA1  , fRatio );
#line 197 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
color  = RGBAToColor  (ubR0  , ubG0  , ubB0  , ubA0 );
#line 198 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
}
#line 200 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
SetColor  (pen  , color );
#line 201 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
}

#line 203 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
void CColorController::DayNightProcess() 
#line 204 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
{
#line 205 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
DOUBLE  tmOffset  = GAMETIME_ONEDAY_SECOND  - GAMETIME_MORNING_SECOND ;
#line 206 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
DOUBLE  dGWTSecondFromMorning  = g_fGWTime  + tmOffset ;
#line 208 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
if(dGWTSecondFromMorning  > GAMETIME_ONEDAY_SECOND )
#line 209 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
{
#line 210 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
dGWTSecondFromMorning  -= GAMETIME_ONEDAY_SECOND  * (INDEX) (dGWTSecondFromMorning  / GAMETIME_ONEDAY_SECOND );
#line 211 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
}
#line 215 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
FLOAT fRatio  = 1.0f;
#line 216 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
if(dGWTSecondFromMorning  < GAMETIME_NOONDAY_SECOND )
#line 217 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
{
#line 218 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
fRatio  = ClampUp  (dGWTSecondFromMorning  / (DOUBLE ) m_fFadeOutTime  , 1.0);
#line 219 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
}
#line 221 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
else 
#line 222 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
{
#line 223 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
fRatio  = 1.0f - ClampUp  ((dGWTSecondFromMorning  - GAMETIME_NOONDAY_SECOND ) / (DOUBLE ) m_fFadeInTime  , 1.0);
#line 224 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
}
#line 225 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
if(NotNull  (m_penTarget01 )){ColorProcess  (m_penTarget01  , m_colTarget01  , fRatio );}
#line 226 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
if(NotNull  (m_penTarget02 )){ColorProcess  (m_penTarget02  , m_colTarget02  , fRatio );}
#line 227 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
if(NotNull  (m_penTarget03 )){ColorProcess  (m_penTarget03  , m_colTarget03  , fRatio );}
#line 228 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
if(NotNull  (m_penTarget04 )){ColorProcess  (m_penTarget04  , m_colTarget04  , fRatio );}
#line 229 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
if(NotNull  (m_penTarget05 )){ColorProcess  (m_penTarget05  , m_colTarget05  , fRatio );}
#line 230 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
if(NotNull  (m_penTarget06 )){ColorProcess  (m_penTarget06  , m_colTarget06  , fRatio );}
#line 231 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
if(NotNull  (m_penTarget07 )){ColorProcess  (m_penTarget07  , m_colTarget07  , fRatio );}
#line 232 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
if(NotNull  (m_penTarget08 )){ColorProcess  (m_penTarget08  , m_colTarget08  , fRatio );}
#line 233 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
if(NotNull  (m_penTarget09 )){ColorProcess  (m_penTarget09  , m_colTarget09  , fRatio );}
#line 234 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
if(NotNull  (m_penTarget10 )){ColorProcess  (m_penTarget10  , m_colTarget10  , fRatio );}
#line 235 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
if(NotNull  (m_penTarget11 )){ColorProcess  (m_penTarget11  , m_colTarget11  , fRatio );}
#line 236 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
if(NotNull  (m_penTarget12 )){ColorProcess  (m_penTarget12  , m_colTarget12  , fRatio );}
#line 237 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
if(NotNull  (m_penTarget13 )){ColorProcess  (m_penTarget13  , m_colTarget13  , fRatio );}
#line 238 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
if(NotNull  (m_penTarget14 )){ColorProcess  (m_penTarget14  , m_colTarget14  , fRatio );}
#line 239 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
if(NotNull  (m_penTarget15 )){ColorProcess  (m_penTarget15  , m_colTarget15  , fRatio );}
#line 240 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
if(NotNull  (m_penTarget16 )){ColorProcess  (m_penTarget16  , m_colTarget16  , fRatio );}
#line 241 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
if(NotNull  (m_penTarget17 )){ColorProcess  (m_penTarget17  , m_colTarget17  , fRatio );}
#line 242 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
if(NotNull  (m_penTarget18 )){ColorProcess  (m_penTarget18  , m_colTarget18  , fRatio );}
#line 243 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
if(NotNull  (m_penTarget19 )){ColorProcess  (m_penTarget19  , m_colTarget19  , fRatio );}
#line 244 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
if(NotNull  (m_penTarget20 )){ColorProcess  (m_penTarget20  , m_colTarget20  , fRatio );}
#line 245 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
}
BOOL CColorController::
#line 248 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
Main(const CEntityEvent &__eeInput) {
#undef STATE_CURRENT
#define STATE_CURRENT STATE_CColorController_Main
	ASSERTMSG(__eeInput.ee_slEvent==EVENTCODE_EVoid, "CColorController::Main expects 'EVoid' as input!");	const EVoid &e = (const EVoid &)__eeInput;
#line 252 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
InitAsEditorModel  ();
#line 254 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
SetPhysicsFlags  (EPF_MODEL_IMMATERIAL );
#line 255 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
SetCollisionFlags  (ECF_IMMATERIAL );
#line 258 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
SetModel  (MODEL_CONTROLLER );
#line 259 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
SetModelMainTexture  (TEXTURE_CONTROLLER );
#line 261 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
m_fFadeInTime  = ClampDn  (m_fFadeInTime  , 0.0f);
#line 262 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
m_fFadeOutTime  = ClampDn  (m_fFadeOutTime  , 0.0f);
#line 263 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
if(m_fFadeInTime  <= 0){m_fFadeInTime  = 0.000001f;}
#line 264 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
if(m_fFadeOutTime  <= 0){m_fFadeOutTime  = 0.000001f;}
#line 266 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
m_bIsFadeIn  = TRUE ;
#line 267 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
FillTargetOriginalColor  ();
#line 269 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
if(m_cctType  == CCT_DAYNIGHTCOLOR )
#line 270 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
{
#line 271 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
DayNightProcess  ();
#line 272 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
Jump(STATE_CURRENT, STATE_CColorController_DyaNightLoop, TRUE, EVoid());return TRUE;
#line 273 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
}
#line 274 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
else 
#line 275 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
{
#line 276 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
Jump(STATE_CURRENT, STATE_CColorController_MainLoop, TRUE, EVoid());return TRUE;
#line 277 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
} ASSERT(FALSE); return TRUE;};BOOL CColorController::
#line 280 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
Fade(const CEntityEvent &__eeInput) {
#undef STATE_CURRENT
#define STATE_CURRENT STATE_CColorController_Fade
	ASSERTMSG(__eeInput.ee_slEvent==EVENTCODE_EVoid, "CColorController::Fade expects 'EVoid' as input!");	const EVoid &e = (const EVoid &)__eeInput;
#line 282 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
m_fPrevGWTime  = g_fGWTime ;
#line 283 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
Jump(STATE_CURRENT,0x02640003, FALSE, EInternal());return TRUE;}BOOL CColorController::H0x02640003_Fade_03(const CEntityEvent &__eeInput)
#line 284 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
{
ASSERT(__eeInput.ee_slEvent==EVENTCODE_EInternal);
#undef STATE_CURRENT
#define STATE_CURRENT 0x02640003
if(!(m_fLeftFadeTime  >= 0.0f)){ Jump(STATE_CURRENT,0x02640004, FALSE, EInternal());return TRUE;}
#line 285 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
m_fLeftFadeTime  -= g_fGWTime  - m_fPrevGWTime ;
#line 286 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
m_fPrevGWTime  = g_fGWTime ;
#line 288 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
FLOAT fRatio  = GetRatio  ();
#line 290 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
if(NotNull  (m_penTarget01 )){ColorProcess  (m_penTarget01  , m_colTarget01  , fRatio );}
#line 291 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
if(NotNull  (m_penTarget02 )){ColorProcess  (m_penTarget02  , m_colTarget02  , fRatio );}
#line 292 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
if(NotNull  (m_penTarget03 )){ColorProcess  (m_penTarget03  , m_colTarget03  , fRatio );}
#line 293 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
if(NotNull  (m_penTarget04 )){ColorProcess  (m_penTarget04  , m_colTarget04  , fRatio );}
#line 294 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
if(NotNull  (m_penTarget05 )){ColorProcess  (m_penTarget05  , m_colTarget05  , fRatio );}
#line 295 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
if(NotNull  (m_penTarget06 )){ColorProcess  (m_penTarget06  , m_colTarget06  , fRatio );}
#line 296 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
if(NotNull  (m_penTarget07 )){ColorProcess  (m_penTarget07  , m_colTarget07  , fRatio );}
#line 297 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
if(NotNull  (m_penTarget08 )){ColorProcess  (m_penTarget08  , m_colTarget08  , fRatio );}
#line 298 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
if(NotNull  (m_penTarget09 )){ColorProcess  (m_penTarget09  , m_colTarget09  , fRatio );}
#line 299 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
if(NotNull  (m_penTarget10 )){ColorProcess  (m_penTarget10  , m_colTarget10  , fRatio );}
#line 300 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
if(NotNull  (m_penTarget11 )){ColorProcess  (m_penTarget11  , m_colTarget11  , fRatio );}
#line 301 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
if(NotNull  (m_penTarget12 )){ColorProcess  (m_penTarget12  , m_colTarget12  , fRatio );}
#line 302 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
if(NotNull  (m_penTarget13 )){ColorProcess  (m_penTarget13  , m_colTarget13  , fRatio );}
#line 303 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
if(NotNull  (m_penTarget14 )){ColorProcess  (m_penTarget14  , m_colTarget14  , fRatio );}
#line 304 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
if(NotNull  (m_penTarget15 )){ColorProcess  (m_penTarget15  , m_colTarget15  , fRatio );}
#line 305 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
if(NotNull  (m_penTarget16 )){ColorProcess  (m_penTarget16  , m_colTarget16  , fRatio );}
#line 306 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
if(NotNull  (m_penTarget17 )){ColorProcess  (m_penTarget17  , m_colTarget17  , fRatio );}
#line 307 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
if(NotNull  (m_penTarget18 )){ColorProcess  (m_penTarget18  , m_colTarget18  , fRatio );}
#line 308 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
if(NotNull  (m_penTarget19 )){ColorProcess  (m_penTarget19  , m_colTarget19  , fRatio );}
#line 309 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
if(NotNull  (m_penTarget20 )){ColorProcess  (m_penTarget20  , m_colTarget20  , fRatio );}
#line 311 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
SetTimerAfter(_pTimer  -> TickQuantum );
Jump(STATE_CURRENT, 0x02640001, FALSE, EBegin());return TRUE;}BOOL CColorController::H0x02640001_Fade_01(const CEntityEvent &__eeInput) {
#undef STATE_CURRENT
#define STATE_CURRENT 0x02640001
switch(__eeInput.ee_slEvent) {case EVENTCODE_EBegin: return TRUE;case EVENTCODE_ETimer: Jump(STATE_CURRENT,0x02640002, FALSE, EInternal()); return TRUE;default: return FALSE; }}BOOL CColorController::H0x02640002_Fade_02(const CEntityEvent &__eeInput){
ASSERT(__eeInput.ee_slEvent==EVENTCODE_EInternal);
#undef STATE_CURRENT
#define STATE_CURRENT 0x02640002
;Jump(STATE_CURRENT,0x02640003, FALSE, EInternal());return TRUE;
#line 312 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
}BOOL CColorController::H0x02640004_Fade_04(const CEntityEvent &__eeInput) {
ASSERT(__eeInput.ee_slEvent==EVENTCODE_EInternal);
#undef STATE_CURRENT
#define STATE_CURRENT 0x02640004

#line 313 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
Jump(STATE_CURRENT, STATE_CColorController_MainLoop, TRUE, EVoid());return TRUE; ASSERT(FALSE); return TRUE;};BOOL CColorController::
#line 315 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
MainLoop(const CEntityEvent &__eeInput) {
#undef STATE_CURRENT
#define STATE_CURRENT STATE_CColorController_MainLoop
	ASSERTMSG(__eeInput.ee_slEvent==EVENTCODE_EVoid, "CColorController::MainLoop expects 'EVoid' as input!");	const EVoid &e = (const EVoid &)__eeInput;
#line 317 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
SetTimerAfter(0.2f);
Jump(STATE_CURRENT, 0x02640006, FALSE, EBegin());return TRUE;}BOOL CColorController::H0x02640006_MainLoop_01(const CEntityEvent &__eeInput) {
#undef STATE_CURRENT
#define STATE_CURRENT 0x02640006
switch(__eeInput.ee_slEvent) {case EVENTCODE_EBegin: return TRUE;case EVENTCODE_ETimer: Jump(STATE_CURRENT,0x02640007, FALSE, EInternal()); return TRUE;default: return FALSE; }}BOOL CColorController::H0x02640007_MainLoop_02(const CEntityEvent &__eeInput){
ASSERT(__eeInput.ee_slEvent==EVENTCODE_EInternal);
#undef STATE_CURRENT
#define STATE_CURRENT 0x02640007
;
#line 318 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
FillTargetOriginalColor  ();
#line 319 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
SetTimerAt(THINKTIME_NEVER);
Jump(STATE_CURRENT, 0x02640008, FALSE, EBegin());return TRUE;}BOOL CColorController::H0x02640008_MainLoop_03(const CEntityEvent &__eeInput) {
#undef STATE_CURRENT
#define STATE_CURRENT 0x02640008
switch(__eeInput.ee_slEvent)
#line 320 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
{case(EVENTCODE_EBegin):
#line 322 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
{const EBegin&e= (EBegin&)__eeInput;

#line 323 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
return TRUE;
#line 324 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
}ASSERT(FALSE);break;case(EVENTCODE_EActivate):
#line 326 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
{const EActivate&e= (EActivate&)__eeInput;

#line 327 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
m_bIsFadeIn  = TRUE ;
#line 328 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
m_fLeftFadeTime  = m_fAllFadeTime  = m_fFadeInTime ;
#line 330 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
Jump(STATE_CURRENT, STATE_CColorController_Fade, TRUE, EVoid());return TRUE;
#line 331 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
}ASSERT(FALSE);break;case(EVENTCODE_EDeactivate):
#line 333 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
{const EDeactivate&e= (EDeactivate&)__eeInput;

#line 334 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
m_bIsFadeIn  = FALSE ;
#line 335 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
m_fLeftFadeTime  = m_fAllFadeTime  = m_fFadeOutTime ;
#line 337 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
Jump(STATE_CURRENT, STATE_CColorController_Fade, TRUE, EVoid());return TRUE;
#line 338 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
}ASSERT(FALSE);break;default: return FALSE; break;
#line 339 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
}return TRUE;}BOOL CColorController::H0x02640009_MainLoop_04(const CEntityEvent &__eeInput){
ASSERT(__eeInput.ee_slEvent==EVENTCODE_EInternal);
#undef STATE_CURRENT
#define STATE_CURRENT 0x02640009
; ASSERT(FALSE); return TRUE;};BOOL CColorController::
#line 342 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
DyaNightLoop(const CEntityEvent &__eeInput) {
#undef STATE_CURRENT
#define STATE_CURRENT STATE_CColorController_DyaNightLoop
	ASSERTMSG(__eeInput.ee_slEvent==EVENTCODE_EVoid, "CColorController::DyaNightLoop expects 'EVoid' as input!");	const EVoid &e = (const EVoid &)__eeInput;
#line 344 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
SetTimerAfter(0.2f);
Jump(STATE_CURRENT, 0x0264000b, FALSE, EBegin());return TRUE;}BOOL CColorController::H0x0264000b_DyaNightLoop_01(const CEntityEvent &__eeInput) {
#undef STATE_CURRENT
#define STATE_CURRENT 0x0264000b
switch(__eeInput.ee_slEvent) {case EVENTCODE_EBegin: return TRUE;case EVENTCODE_ETimer: Jump(STATE_CURRENT,0x0264000c, FALSE, EInternal()); return TRUE;default: return FALSE; }}BOOL CColorController::H0x0264000c_DyaNightLoop_02(const CEntityEvent &__eeInput){
ASSERT(__eeInput.ee_slEvent==EVENTCODE_EInternal);
#undef STATE_CURRENT
#define STATE_CURRENT 0x0264000c
;
#line 345 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
FillTargetOriginalColor  ();
#line 346 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
Jump(STATE_CURRENT,0x0264000f, FALSE, EInternal());return TRUE;}BOOL CColorController::H0x0264000f_DyaNightLoop_05(const CEntityEvent &__eeInput)
#line 347 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
{
ASSERT(__eeInput.ee_slEvent==EVENTCODE_EInternal);
#undef STATE_CURRENT
#define STATE_CURRENT 0x0264000f
if(!(TRUE )){ Jump(STATE_CURRENT,0x02640010, FALSE, EInternal());return TRUE;}
#line 348 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
SetTimerAfter(0.5f * FRnd  () + 0.5f);
Jump(STATE_CURRENT, 0x0264000d, FALSE, EBegin());return TRUE;}BOOL CColorController::H0x0264000d_DyaNightLoop_03(const CEntityEvent &__eeInput) {
#undef STATE_CURRENT
#define STATE_CURRENT 0x0264000d
switch(__eeInput.ee_slEvent) {case EVENTCODE_EBegin: return TRUE;case EVENTCODE_ETimer: Jump(STATE_CURRENT,0x0264000e, FALSE, EInternal()); return TRUE;default: return FALSE; }}BOOL CColorController::H0x0264000e_DyaNightLoop_04(const CEntityEvent &__eeInput){
ASSERT(__eeInput.ee_slEvent==EVENTCODE_EInternal);
#undef STATE_CURRENT
#define STATE_CURRENT 0x0264000e
;
#line 349 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
DayNightProcess  ();Jump(STATE_CURRENT,0x0264000f, FALSE, EInternal());return TRUE;
#line 350 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/ColorContoller.es"
}BOOL CColorController::H0x02640010_DyaNightLoop_06(const CEntityEvent &__eeInput) {
ASSERT(__eeInput.ee_slEvent==EVENTCODE_EInternal);
#undef STATE_CURRENT
#define STATE_CURRENT 0x02640010
 ASSERT(FALSE); return TRUE;};