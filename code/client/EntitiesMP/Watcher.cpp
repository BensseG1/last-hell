/*
 * This file is generated by Entity Class Compiler, (c) CroTeam 1997-98
 */

#line 2 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"

#include "StdH.h"

#include "EntitiesMP/EnemyBase.h"

#include <Watcher.h>
#include <Watcher_tables.h>
CEntityEvent *EWatcherInit::MakeCopy(void) { 	CEntityEvent *peeCopy = new EWatcherInit(*this); 	return peeCopy;}
SLONG EWatcherInit::GetSizeOf(void) { 	return sizeof(*this);}
EWatcherInit::EWatcherInit() : CEntityEvent(EVENTCODE_EWatcherInit) {
	ClearToDefault(eidOwner);
}
BOOL EWatcherInit::CheckIDs(void) {	return TRUE && eidOwner.IsValid(); }

CEntityEvent *EWatch::MakeCopy(void) { 	CEntityEvent *peeCopy = new EWatch(*this); 	return peeCopy;}
SLONG EWatch::GetSizeOf(void) { 	return sizeof(*this);}
EWatch::EWatch() : CEntityEvent(EVENTCODE_EWatch) {
	ClearToDefault(eidSeen);
}
BOOL EWatch::CheckIDs(void) {	return TRUE && eidSeen.IsValid(); }

void CWatcher::SetDefaultProperties(void) {
	m_penOwner = NULL;
	m_tmDelay = 6.0f;
	m_fClosestPlayer = UpperLimit(0.0f);
	m_iPlayerToCheck = 0;
	m_iOwnerID = -1;
	m_penPrediction = NULL;
	CRationalEntity::SetDefaultProperties();
}

#line 40 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
class CEnemyBase * CWatcher::GetOwner(void) 
#line 41 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
{
#line 42 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
ASSERT  (m_penOwner  != NULL );
#line 43 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
return (CEnemyBase  *) & * m_penOwner ;
#line 44 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
}

#line 48 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
INDEX CWatcher::GetRandomPlayer(void) 
#line 49 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
{
#line 50 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
INDEX i ;
#line 51 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
INDEX ctMaxPlayers  = GetOwner  () -> en_pwoWorld  -> m_vectorTargetNPC  . size  ();
#line 52 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
INDEX ctActivePlayers  = 0;
#line 53 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
for(i  = 0;i  < ctMaxPlayers ;i  ++)
#line 54 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
{
#line 55 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
CEntity  * pEntity  = GetOwner  () -> en_pwoWorld  -> m_vectorTargetNPC  [ i  ];
#line 56 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
if(pEntity  != NULL )
#line 57 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
{
#line 58 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
ctActivePlayers  ++;
#line 59 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
}
#line 60 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
}
#line 63 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
if(ctActivePlayers  == 0)
#line 64 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
{
#line 66 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
return 0;
#line 67 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
}
#line 70 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
INDEX iChosenActivePlayer  = IRnd  () % ctActivePlayers ;
#line 73 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
INDEX iActivePlayer  = 0;
#line 74 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
for(i  = 0;i  < ctMaxPlayers ;i  ++)
#line 75 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
{
#line 76 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
CEntity  * pEntity  = GetOwner  () -> en_pwoWorld  -> m_vectorTargetNPC  [ i  ];
#line 77 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
if(pEntity  != NULL )
#line 78 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
{
#line 79 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
if(iActivePlayer  == iChosenActivePlayer )
#line 80 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
{
#line 81 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
return i ;
#line 82 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
}
#line 83 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
iActivePlayer  ++;
#line 84 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
}
#line 85 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
}
#line 86 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
ASSERT  (FALSE );
#line 87 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
return 0;
#line 125 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
}

#line 128 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
CEntity * CWatcher::FindClosestPlayer(void) 
#line 129 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
{
#line 130 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
CEntity  * penClosestPlayer  = NULL ;
#line 131 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
FLOAT fClosestPlayer  = UpperLimit  (0.0f);
#line 134 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
for(std  :: vector  < CEntity  * > :: iterator  iter  = GetOwner  () -> en_pwoWorld  -> m_vectorTargetNPC  . begin  ();
#line 135 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
iter  != GetOwner  () -> en_pwoWorld  -> m_vectorTargetNPC  . end  ();
#line 136 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
++ iter )
#line 137 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
{
#line 138 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
if((* iter ) != NULL  && (* iter ) -> GetFlags  () & ENF_ALIVE  && ! ((* iter ) -> GetFlags  () & ENF_INVISIBLE ))
#line 139 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
{
#line 141 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
FLOAT fDistance  = ((* iter ) -> GetPlacement  () . pl_PositionVector  - m_penOwner  -> GetPlacement  () . pl_PositionVector ) . Length  ();
#line 143 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
if(fDistance  < fClosestPlayer )
#line 144 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
{
#line 145 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
fClosestPlayer  = fDistance ;
#line 146 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
penClosestPlayer  = (* iter );
#line 147 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
}
#line 148 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
}
#line 149 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
}
#line 151 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
if(penClosestPlayer  == NULL )
#line 152 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
{
#line 154 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
fClosestPlayer  = 10.0f;
#line 155 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
}
#line 156 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
m_fClosestPlayer  = fClosestPlayer ;
#line 157 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
return penClosestPlayer ;
#line 158 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
}

#line 161 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
void CWatcher::SendWatchEvent(CEntity * penPlayer) 
#line 162 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
{
#line 163 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
EWatch  eWatch ;
#line 164 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
eWatch  . eidSeen  = penPlayer ;
#line 165 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
m_penOwner  -> SendEvent  (eWatch );
#line 166 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
}

#line 168 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
void CWatcher::CheckIfPlayerVisible(void) 
#line 169 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
{
#line 171 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
if(GetOwner  () -> m_bBlind )
#line 172 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
{
#line 174 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
return ;
#line 175 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
}
#line 176 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
if(GetOwner  () -> en_pwoWorld  -> m_vectorTargetNPC  . empty  ())
#line 177 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
{
#line 178 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
return ;
#line 179 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
}
#line 182 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
INDEX ctPlayers  = GetOwner  () -> en_pwoWorld  -> m_vectorTargetNPC  . size  ();
#line 185 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
CEntity  * penEntity  = NULL ;
#line 186 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
m_iPlayerToCheck  = (m_iPlayerToCheck  + 1) % ctPlayers ;
#line 187 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
INDEX iFirstChecked  = m_iPlayerToCheck ;
#line 188 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
FOREVER 
#line 189 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
{
#line 190 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
penEntity  = GetOwner  () -> en_pwoWorld  -> m_vectorTargetNPC  [ m_iPlayerToCheck  ];
#line 191 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
if(penEntity  != NULL )
#line 192 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
{
#line 193 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
break ;
#line 194 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
}
#line 195 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
m_iPlayerToCheck  ++;
#line 196 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
m_iPlayerToCheck  %= ctPlayers ;
#line 197 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
if(m_iPlayerToCheck  == iFirstChecked )
#line 198 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
{
#line 199 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
return ;
#line 200 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
}
#line 201 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
}
#line 204 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
if(! (penEntity  -> GetFlags  () & ENF_ALIVE ) || (penEntity  -> GetFlags  () & ENF_INVISIBLE ))
#line 205 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
{
#line 207 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
return ;
#line 208 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
}
#line 211 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
if(GetOwner  () -> SeeEntity  (penEntity  , Cos  (GetOwner  () -> m_fViewAngle  / 2.0f)))
#line 212 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
{
#line 214 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
SendWatchEvent  (penEntity );
#line 215 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
}
#line 216 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
}

#line 219 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
void CWatcher::SetWatchDelays(void) 
#line 220 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
{
#line 221 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
const FLOAT tmMinDelay  = 0.1f;
#line 222 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
const FLOAT tmSeeDelay  = 5.0f;
#line 223 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
const FLOAT tmTick  = _pTimer  -> TickQuantum ;
#line 224 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
FLOAT fSeeDistance  = GetOwner  () -> m_fIgnoreRange ;
#line 225 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
FLOAT fNearDistance  = Min  (GetOwner  () -> m_fStopDistance  , GetOwner  () -> m_fCloseDistance );
#line 228 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
if(m_fClosestPlayer  <= fNearDistance )
#line 229 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
{
#line 231 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
m_tmDelay  = tmMinDelay ;
#line 233 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
}
#line 234 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
else 
#line 235 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
{
#line 237 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
m_tmDelay  = tmMinDelay  + 
#line 238 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
(m_fClosestPlayer  - fNearDistance ) * (tmSeeDelay  - tmMinDelay ) / (fSeeDistance  - fNearDistance );
#line 240 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
m_tmDelay  = floor  (m_tmDelay  / tmTick ) * tmTick ;
#line 241 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
}
#line 242 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
}

#line 245 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
void CWatcher::Watch(void) 
#line 246 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
{
#line 248 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
FLOAT fOrgDistance  = m_fClosestPlayer ;
#line 250 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
CEntity  * penClosest  = NULL ;
#line 252 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
penClosest  = FindClosestPlayer  ();
#line 254 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
FLOAT fSeeDistance  = GetOwner  () -> m_fIgnoreRange ;
#line 255 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
FLOAT fStopDistance  = Max  (fSeeDistance  * 1.5f , GetOwner  () -> m_fActivityRange );
#line 258 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
if(fOrgDistance  < fStopDistance  && m_fClosestPlayer  >= fStopDistance )
#line 259 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
{
#line 261 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
m_penOwner  -> SendEvent  (EStop  ());
#line 263 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
}
#line 264 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
else if(fOrgDistance  >= fStopDistance  && m_fClosestPlayer  < fStopDistance )
#line 265 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
{
#line 267 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
m_penOwner  -> SendEvent  (EStart  ());
#line 268 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
}
#line 272 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
if(m_fClosestPlayer  < fSeeDistance )
#line 273 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
{
#line 275 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
CheckIfPlayerVisible  ();
#line 276 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
}
#line 280 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
FLOAT fSenseRange  = GetOwner  () -> m_fSenseRange ;
#line 281 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
if(penClosest  != NULL  && fSenseRange  > 0 && m_fClosestPlayer  < fSenseRange )
#line 282 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
{
#line 284 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
SendWatchEvent  (penClosest );
#line 285 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
}
#line 288 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
SetWatchDelays  ();
#line 289 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
}

#line 292 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
CEntity * CWatcher::CheckCloserPlayer(CEntity * penCurrentTarget,FLOAT fRange) 
#line 293 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
{
#line 295 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
if(GetOwner  () -> m_bBlind ){
#line 297 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
return NULL ;
#line 298 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
}
#line 300 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
CEntity  * penClosestPlayer  = NULL ;
#line 301 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
FLOAT fClosestPlayer  = 
#line 302 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
(penCurrentTarget  -> GetPlacement  () . pl_PositionVector  - m_penOwner  -> GetPlacement  () . pl_PositionVector ) . Length  ();
#line 303 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
fClosestPlayer  = Min  (fClosestPlayer  , fRange );
#line 337 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
for(std  :: vector  < CEntity  * > :: iterator  iter  = GetOwner  () -> en_pwoWorld  -> m_vectorTargetNPC  . begin  ();
#line 338 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
iter  != GetOwner  () -> en_pwoWorld  -> m_vectorTargetNPC  . end  ();
#line 339 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
++ iter )
#line 340 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
{
#line 341 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
if((* iter  == NULL  || (* iter ) == penCurrentTarget ))
#line 342 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
{
#line 343 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
continue ;
#line 344 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
}
#line 346 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
if((* iter ) -> GetFlags  () & ENF_ALIVE  && ! ((* iter ) -> GetFlags  () & ENF_INVISIBLE ))
#line 347 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
{
#line 349 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
FLOAT fDistance  = ((* iter ) -> GetPlacement  () . pl_PositionVector  - m_penOwner  -> GetPlacement  () . pl_PositionVector ) . Length  ();
#line 351 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
if(fDistance  < fClosestPlayer  && 
#line 352 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
GetOwner  () -> SeeEntity  ((* iter ) , Cos  (GetOwner  () -> m_fViewAngle  / 2.0f)))
#line 353 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
{
#line 354 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
fClosestPlayer  = fDistance ;
#line 355 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
penClosestPlayer  = (* iter );
#line 356 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
}
#line 357 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
}
#line 358 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
}
#line 381 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
return penClosestPlayer ;
#line 382 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
}

#line 386 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
CEntity * CWatcher::CheckAnotherPlayer(CEntity * penCurrentTarget) 
#line 387 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
{
#line 432 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
return NULL ;
#line 433 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
}

#line 437 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
SLONG CWatcher::GetUsedMemory(void) 
#line 438 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
{
#line 439 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
return (sizeof  (CWatcher ) - sizeof  (CRationalEntity ) + CRationalEntity  :: GetUsedMemory  ());
#line 440 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
}
BOOL CWatcher::
#line 443 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
Main(const CEntityEvent &__eeInput) {
#undef STATE_CURRENT
#define STATE_CURRENT STATE_CWatcher_Main
	ASSERTMSG(__eeInput.ee_slEvent==EVENTCODE_EWatcherInit, "CWatcher::Main expects 'EWatcherInit' as input!");	const EWatcherInit &eInit = (const EWatcherInit &)__eeInput;
#line 446 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
ASSERT  ((CEntity  *) eInit  . eidOwner  != NULL );
#line 447 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
m_penOwner  = eInit  . eidOwner ;
#line 449 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
m_iOwnerID  = m_penOwner  -> en_ulID ;
#line 452 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
InitAsVoid  ();
#line 453 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
SetPhysicsFlags  (EPF_MODEL_IMMATERIAL );
#line 454 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
SetCollisionFlags  (ECF_IMMATERIAL );
#line 457 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
if(! _pNetwork  -> m_bSingleMode )
#line 458 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
{
#line 460 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
if(GetSP  () -> sp_gmGameMode  == CSessionProperties  :: GM_FLYOVER )
#line 461 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
{
#line 463 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
Jump(STATE_CURRENT, STATE_CWatcher_Dummy, TRUE, EVoid());return TRUE;
#line 465 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
}
#line 466 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
}
#line 471 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
m_iPlayerToCheck  = GetRandomPlayer  () - 1;
#line 475 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
STATE_CWatcher_Inactive, TRUE;
Jump(STATE_CURRENT, 0x02bc0002, FALSE, EBegin());return TRUE;}BOOL CWatcher::H0x02bc0002_Main_01(const CEntityEvent &__eeInput) {
#undef STATE_CURRENT
#define STATE_CURRENT 0x02bc0002
switch(__eeInput.ee_slEvent) {case EVENTCODE_EBegin: Call(STATE_CURRENT, STATE_CWatcher_Inactive, TRUE, EVoid());return TRUE;case EVENTCODE_EEnd: Jump(STATE_CURRENT,0x02bc0003, FALSE, __eeInput); return TRUE;default: return FALSE; }}BOOL CWatcher::H0x02bc0003_Main_02(const CEntityEvent &__eeInput){
#undef STATE_CURRENT
#define STATE_CURRENT 0x02bc0003
const EEnd&__e= (EEnd&)__eeInput;
;
#line 478 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
Destroy  ();
#line 480 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
Return(STATE_CURRENT,EVoid());
#line 480 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
return TRUE; ASSERT(FALSE); return TRUE;};BOOL CWatcher::
#line 484 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
Active(const CEntityEvent &__eeInput) {
#undef STATE_CURRENT
#define STATE_CURRENT STATE_CWatcher_Active
	ASSERTMSG(__eeInput.ee_slEvent==EVENTCODE_EVoid, "CWatcher::Active expects 'EVoid' as input!");	const EVoid &e = (const EVoid &)__eeInput;
#line 487 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
Jump(STATE_CURRENT,0x02bc0007, FALSE, EInternal());return TRUE;}BOOL CWatcher::H0x02bc0007_Active_03(const CEntityEvent &__eeInput)
#line 488 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
{
ASSERT(__eeInput.ee_slEvent==EVENTCODE_EInternal);
#undef STATE_CURRENT
#define STATE_CURRENT 0x02bc0007
if(!(TRUE )){ Jump(STATE_CURRENT,0x02bc0008, FALSE, EInternal());return TRUE;}
#line 490 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
Watch  ();
#line 492 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
SetTimerAfter(m_tmDelay );
Jump(STATE_CURRENT, 0x02bc0005, FALSE, EBegin());return TRUE;}BOOL CWatcher::H0x02bc0005_Active_01(const CEntityEvent &__eeInput) {
#undef STATE_CURRENT
#define STATE_CURRENT 0x02bc0005
switch(__eeInput.ee_slEvent)
#line 493 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
{case(EVENTCODE_EBegin):{const EBegin&e= (EBegin&)__eeInput;
return TRUE;}ASSERT(FALSE);break;case(EVENTCODE_ETimer):{const ETimer&e= (ETimer&)__eeInput;
UnsetTimer();Jump(STATE_CURRENT,0x02bc0006, FALSE, EInternal());return TRUE;}ASSERT(FALSE);break;case(EVENTCODE_EStop):{const EStop&e= (EStop&)__eeInput;
Jump(STATE_CURRENT, STATE_CWatcher_Inactive, TRUE, EVoid());return TRUE;}ASSERT(FALSE);break;case(EVENTCODE_EStart):{const EStart&e= (EStart&)__eeInput;
UnsetTimer();Jump(STATE_CURRENT,0x02bc0006, FALSE, EInternal());return TRUE;}ASSERT(FALSE);break;case(EVENTCODE_ETeleport):{const ETeleport&e= (ETeleport&)__eeInput;
UnsetTimer();Jump(STATE_CURRENT,0x02bc0006, FALSE, EInternal());return TRUE;}ASSERT(FALSE);break;default: return FALSE; break;
#line 501 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
}return TRUE;}BOOL CWatcher::H0x02bc0006_Active_02(const CEntityEvent &__eeInput){
ASSERT(__eeInput.ee_slEvent==EVENTCODE_EInternal);
#undef STATE_CURRENT
#define STATE_CURRENT 0x02bc0006
Jump(STATE_CURRENT,0x02bc0007, FALSE, EInternal());return TRUE;
#line 502 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
}BOOL CWatcher::H0x02bc0008_Active_04(const CEntityEvent &__eeInput) {
ASSERT(__eeInput.ee_slEvent==EVENTCODE_EInternal);
#undef STATE_CURRENT
#define STATE_CURRENT 0x02bc0008
 ASSERT(FALSE); return TRUE;};BOOL CWatcher::
#line 506 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
Inactive(const CEntityEvent &__eeInput) {
#undef STATE_CURRENT
#define STATE_CURRENT STATE_CWatcher_Inactive
	ASSERTMSG(__eeInput.ee_slEvent==EVENTCODE_EVoid, "CWatcher::Inactive expects 'EVoid' as input!");	const EVoid &e = (const EVoid &)__eeInput;
#line 508 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
SetTimerAt(THINKTIME_NEVER);
Jump(STATE_CURRENT, 0x02bc000a, FALSE, EBegin());return TRUE;}BOOL CWatcher::H0x02bc000a_Inactive_01(const CEntityEvent &__eeInput) {
#undef STATE_CURRENT
#define STATE_CURRENT 0x02bc000a
switch(__eeInput.ee_slEvent)
#line 509 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
{case(EVENTCODE_EBegin):{const EBegin&e= (EBegin&)__eeInput;
return TRUE;}ASSERT(FALSE);break;case(EVENTCODE_EStart):{const EStart&e= (EStart&)__eeInput;
Jump(STATE_CURRENT, STATE_CWatcher_Active, TRUE, EVoid());return TRUE;}ASSERT(FALSE);break;default: return FALSE; break;
#line 512 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
}return TRUE;}BOOL CWatcher::H0x02bc000b_Inactive_02(const CEntityEvent &__eeInput){
ASSERT(__eeInput.ee_slEvent==EVENTCODE_EInternal);
#undef STATE_CURRENT
#define STATE_CURRENT 0x02bc000b
 ASSERT(FALSE); return TRUE;};BOOL CWatcher::
#line 516 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
Dummy(const CEntityEvent &__eeInput) {
#undef STATE_CURRENT
#define STATE_CURRENT STATE_CWatcher_Dummy
	ASSERTMSG(__eeInput.ee_slEvent==EVENTCODE_EVoid, "CWatcher::Dummy expects 'EVoid' as input!");	const EVoid &e = (const EVoid &)__eeInput;
#line 519 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
SetTimerAt(THINKTIME_NEVER);
Jump(STATE_CURRENT, 0x02bc000d, FALSE, EBegin());return TRUE;}BOOL CWatcher::H0x02bc000d_Dummy_01(const CEntityEvent &__eeInput) {
#undef STATE_CURRENT
#define STATE_CURRENT 0x02bc000d
switch(__eeInput.ee_slEvent){case(EVENTCODE_EBegin):{const EBegin&e= (EBegin&)__eeInput;
return TRUE;}ASSERT(FALSE);break;default:{return TRUE;}ASSERT(FALSE);break;
#line 522 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Watcher.es"
}return TRUE;}BOOL CWatcher::H0x02bc000e_Dummy_02(const CEntityEvent &__eeInput){
ASSERT(__eeInput.ee_slEvent==EVENTCODE_EInternal);
#undef STATE_CURRENT
#define STATE_CURRENT 0x02bc000e
; ASSERT(FALSE); return TRUE;};