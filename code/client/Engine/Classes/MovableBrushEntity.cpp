/*
 * This file is generated by Entity Class Compiler, (c) CroTeam 1997-98
 */


#include "StdH.h"
#include <Engine/Entities/InternalClasses.h>

#include <Classes/MovableBrushEntity.h>
#include <Classes/MovableBrushEntity_tables.h>
void CMovableBrushEntity::SetDefaultProperties(void) {
	CMovableEntity::SetDefaultProperties();
}
void CMovableBrushEntity::DoMoving(void) 
{
CMovableEntity  :: DoMoving  ();
}
void CMovableBrushEntity::Read_t(CTStream * istr,BOOL bNetwork) 
{
CMovableEntity  :: Read_t  (istr  , bNetwork );
}
void CMovableBrushEntity::Write_t(CTStream * ostr,BOOL bNetwork) 
{
CMovableEntity  :: Write_t  (ostr  , bNetwork );
}
BOOL CMovableBrushEntity::
Dummy(const CEntityEvent &__eeInput) {
#undef STATE_CURRENT
#define STATE_CURRENT STATE_CMovableBrushEntity_Dummy
	ASSERTMSG(__eeInput.ee_slEvent==EVENTCODE_EVoid, "CMovableBrushEntity::Dummy expects 'EVoid' as input!");
	const EVoid &e = (const EVoid &)__eeInput;
 ASSERT(FALSE);
 return TRUE;
}
;
