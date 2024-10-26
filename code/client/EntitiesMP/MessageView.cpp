/*
 * This file is generated by Entity Class Compiler, (c) CroTeam 1997-98
 */

#line 2 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"

#include "StdH.h"
#include <Engine/Interface/UIInternalClasses.h>
#include <Engine/Interface/UIManager.h>
#include <Engine/Contents/function/UIPortalNew.h>
#include <Engine/Interface/UIAutoHelp.h>

#include <MessageView.h>
#include <MessageView_tables.h>
void CMessageView::SetDefaultProperties(void) {
	m_strName = "MessageView";
	m_strDescription = "";
	m_fnmMessage = CTString("");
	m_fDistance = 2.0f;
	m_bActive = TRUE ;
	m_penNext = NULL;
	eViewType = MSGVIEW_CUSTOM ;
	m_bShowOnce = FALSE ;
	m_iStringIDContent1 = -1;
	m_iStringIDContent2 = -1;
	m_iStringIDContent3 = -1;
	m_iStringIDContent4 = -1;
	m_iStringIDContent5 = -1;
	m_iStringIDChoice1 = -1;
	m_iStringIDChoice2 = -1;
	m_iStringIDChoice3 = -1;
	m_iStringIDChoice4 = -1;
	m_iStringIDChoice5 = -1;
	m_strTitle = "Custom Message Box";
	m_iStringTitleID = -1;
	m_strStringTitle = "";
	m_strStringIDContent1 = "";
	m_strStringIDContent2 = "";
	m_strStringIDContent3 = "";
	m_strStringIDContent4 = "";
	m_strStringIDContent5 = "";
	m_strStringIDChoice1 = "";
	m_strStringIDChoice2 = "";
	m_strStringIDChoice3 = "";
	m_strStringIDChoice4 = "";
	m_strStringIDChoice5 = "";
	m_iZone = -1;
	m_iExtra = -1;
	CRationalEntity::SetDefaultProperties();
}

#line 73 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
void CMessageView::OpenMessageView() 
#line 74 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
{
#line 75 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
CUIManager  * pUIManager  = SE_Get_UIManagerPtr  ();
#line 77 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
if(eViewType  == MSGVIEW_CUSTOM )
#line 78 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
{
#line 79 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
if(! pUIManager  -> DoesMessageBoxLExist  (MSGLCMD_STORY_INTRO ))
#line 80 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
{
#line 82 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
if(m_iStringTitleID  != - 1)
#line 83 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
{
#line 85 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
pUIManager  -> CreateMessageBoxL  (_S  (m_iStringTitleID  , "") , UI_NONE  , MSGLCMD_STORY_INTRO );
#line 88 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
if(m_iStringIDContent1  != - 1)
#line 89 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
{
#line 90 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
pUIManager  -> AddMessageBoxLString  (MSGLCMD_STORY_INTRO  , TRUE  , _S  (m_iStringIDContent1  , ""));
#line 91 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
}
#line 93 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
if(m_iStringIDContent2  != - 1)
#line 94 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
{
#line 95 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
pUIManager  -> AddMessageBoxLString  (MSGLCMD_STORY_INTRO  , TRUE  , _S  (m_iStringIDContent2  , ""));
#line 96 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
}
#line 98 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
if(m_iStringIDContent3  != - 1)
#line 99 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
{
#line 100 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
pUIManager  -> AddMessageBoxLString  (MSGLCMD_STORY_INTRO  , TRUE  , _S  (m_iStringIDContent3  , ""));
#line 101 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
}
#line 103 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
if(m_iStringIDContent4  != - 1)
#line 104 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
{
#line 105 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
pUIManager  -> AddMessageBoxLString  (MSGLCMD_STORY_INTRO  , TRUE  , _S  (m_iStringIDContent4  , ""));
#line 106 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
}
#line 108 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
if(m_iStringIDContent5  != - 1)
#line 109 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
{
#line 110 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
pUIManager  -> AddMessageBoxLString  (MSGLCMD_STORY_INTRO  , TRUE  , _S  (m_iStringIDContent5  , ""));
#line 111 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
}
#line 114 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
if(m_iStringIDChoice1  != - 1)
#line 115 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
{
#line 116 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
pUIManager  -> AddMessageBoxLString  (MSGLCMD_STORY_INTRO  , FALSE  , _S  (m_iStringIDChoice1  , ""));
#line 117 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
}
#line 119 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
if(m_iStringIDChoice2  != - 1)
#line 120 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
{
#line 121 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
pUIManager  -> AddMessageBoxLString  (MSGLCMD_STORY_INTRO  , FALSE  , _S  (m_iStringIDChoice2  , ""));
#line 122 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
}
#line 124 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
if(m_iStringIDChoice3  != - 1)
#line 125 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
{
#line 126 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
pUIManager  -> AddMessageBoxLString  (MSGLCMD_STORY_INTRO  , FALSE  , _S  (m_iStringIDChoice3  , ""));
#line 127 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
}
#line 129 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
if(m_iStringIDChoice4  != - 1)
#line 130 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
{
#line 131 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
pUIManager  -> AddMessageBoxLString  (MSGLCMD_STORY_INTRO  , FALSE  , _S  (m_iStringIDChoice4  , ""));
#line 132 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
}
#line 134 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
if(m_iStringIDChoice5  != - 1)
#line 135 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
{
#line 136 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
pUIManager  -> AddMessageBoxLString  (MSGLCMD_STORY_INTRO  , FALSE  , _S  (m_iStringIDChoice5  , ""));
#line 137 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
}
#line 139 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
if(m_bShowOnce )
#line 140 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
{
#line 142 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
if(m_bActive )
#line 143 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
{
#line 144 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
m_bActive  = FALSE ;
#line 145 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
}
#line 146 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
}
#line 147 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
}
#line 148 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
}
#line 149 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
}
#line 150 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
else if(eViewType  == MSGVIEW_STRING )
#line 151 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
{
#line 152 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
if(! pUIManager  -> DoesMessageBoxLExist  (MSGLCMD_STORY_INTRO ))
#line 153 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
{
#line 155 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
if(m_strStringTitle  . Length  () > 0)
#line 156 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
{
#line 158 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
pUIManager  -> CreateMessageBoxL  (m_strStringTitle  , UI_NONE  , MSGLCMD_STORY_INTRO );
#line 161 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
if(m_strStringIDContent1  . Length  () > 0)
#line 162 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
{
#line 163 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
pUIManager  -> AddMessageBoxLString  (MSGLCMD_STORY_INTRO  , TRUE  , m_strStringIDContent1 );
#line 164 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
}
#line 166 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
if(m_strStringIDContent2  . Length  () > 0)
#line 167 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
{
#line 168 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
pUIManager  -> AddMessageBoxLString  (MSGLCMD_STORY_INTRO  , TRUE  , m_strStringIDContent2 );
#line 169 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
}
#line 171 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
if(m_strStringIDContent3  . Length  () > 0)
#line 172 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
{
#line 173 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
pUIManager  -> AddMessageBoxLString  (MSGLCMD_STORY_INTRO  , TRUE  , m_strStringIDContent3 );
#line 174 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
}
#line 176 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
if(m_strStringIDContent4  . Length  () > 0)
#line 177 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
{
#line 178 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
pUIManager  -> AddMessageBoxLString  (MSGLCMD_STORY_INTRO  , TRUE  , m_strStringIDContent4 );
#line 179 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
}
#line 181 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
if(m_strStringIDContent5  . Length  () > 0)
#line 182 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
{
#line 183 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
pUIManager  -> AddMessageBoxLString  (MSGLCMD_STORY_INTRO  , TRUE  , m_strStringIDContent5 );
#line 184 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
}
#line 187 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
if(m_strStringIDChoice1  . Length  () > 0)
#line 188 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
{
#line 189 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
pUIManager  -> AddMessageBoxLString  (MSGLCMD_STORY_INTRO  , FALSE  , m_strStringIDChoice1 );
#line 190 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
}
#line 192 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
if(m_strStringIDChoice2  . Length  () > 0)
#line 193 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
{
#line 194 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
pUIManager  -> AddMessageBoxLString  (MSGLCMD_STORY_INTRO  , FALSE  , m_strStringIDChoice2 );
#line 195 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
}
#line 197 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
if(m_strStringIDChoice3  . Length  () > 0)
#line 198 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
{
#line 199 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
pUIManager  -> AddMessageBoxLString  (MSGLCMD_STORY_INTRO  , FALSE  , m_strStringIDChoice3 );
#line 200 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
}
#line 202 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
if(m_strStringIDChoice4  . Length  () > 0)
#line 203 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
{
#line 204 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
pUIManager  -> AddMessageBoxLString  (MSGLCMD_STORY_INTRO  , FALSE  , m_strStringIDChoice4 );
#line 205 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
}
#line 207 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
if(m_strStringIDChoice5  . Length  () > 0)
#line 208 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
{
#line 209 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
pUIManager  -> AddMessageBoxLString  (MSGLCMD_STORY_INTRO  , FALSE  , m_strStringIDChoice5 );
#line 210 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
}
#line 212 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
if(m_bShowOnce )
#line 213 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
{
#line 215 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
if(m_bActive )
#line 216 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
{
#line 217 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
m_bActive  = FALSE ;
#line 218 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
}
#line 219 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
}
#line 220 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
}
#line 221 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
}
#line 222 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
}
#line 223 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
else if(eViewType  == MSGVIEW_NOTICE )
#line 224 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
{
#line 225 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
if(m_strStringIDContent1  . Length  () > 0)
#line 226 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
{
#line 227 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
_UIAutoHelp  -> SetGMNotice  (_S  (m_iStringIDContent1  , ""));
#line 228 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
if(m_bShowOnce )
#line 229 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
{
#line 230 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
m_bActive  = FALSE ;
#line 231 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
}
#line 232 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
}
#line 233 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
}
#line 234 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
}
BOOL CMessageView::
#line 238 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
Main(const CEntityEvent &__eeInput) {
#undef STATE_CURRENT
#define STATE_CURRENT STATE_CMessageView_Main
	ASSERTMSG(__eeInput.ee_slEvent==EVENTCODE_EVoid, "CMessageView::Main expects 'EVoid' as input!");	const EVoid &e = (const EVoid &)__eeInput;
#line 240 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
InitAsEditorModel  ();
#line 241 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
SetPhysicsFlags  (EPF_MODEL_IMMATERIAL );
#line 242 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
SetCollisionFlags  (ECF_IMMATERIAL );
#line 245 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
SetModel  (MODEL_MARKER );
#line 246 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
SetModelMainTexture  (TEXTURE_MARKER );
#line 247 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
SetTimerAt(THINKTIME_NEVER);
Jump(STATE_CURRENT, 0x03810000, FALSE, EBegin());return TRUE;}BOOL CMessageView::H0x03810000_Main_01(const CEntityEvent &__eeInput) {
#undef STATE_CURRENT
#define STATE_CURRENT 0x03810000
switch(__eeInput.ee_slEvent)
#line 248 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
{case(EVENTCODE_ETrigger):
#line 250 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
{const ETrigger&eTrigger= (ETrigger&)__eeInput;

#line 251 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
if(! m_bActive )
#line 252 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
{
#line 253 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
return TRUE;
#line 254 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
}
#line 256 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
OpenMessageView  ();
#line 258 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
return TRUE;
#line 259 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
}ASSERT(FALSE);break;case(EVENTCODE_EActivate):
#line 261 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
{const EActivate&e= (EActivate&)__eeInput;

#line 262 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
m_bActive  = TRUE ;
#line 263 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
return TRUE;
#line 264 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
}ASSERT(FALSE);break;case(EVENTCODE_EDeactivate):
#line 266 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
{const EDeactivate&e= (EDeactivate&)__eeInput;

#line 267 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
m_bActive  = FALSE ;
#line 268 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
return TRUE;
#line 269 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
}ASSERT(FALSE);break;default: return FALSE; break;
#line 270 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
}return TRUE;}BOOL CMessageView::H0x03810001_Main_02(const CEntityEvent &__eeInput){
ASSERT(__eeInput.ee_slEvent==EVENTCODE_EInternal);
#undef STATE_CURRENT
#define STATE_CURRENT 0x03810001

#line 271 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
Return(STATE_CURRENT,EVoid());
#line 271 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/MessageView.es"
return TRUE; ASSERT(FALSE); return TRUE;};