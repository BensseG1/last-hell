/*
 * This file is generated by Entity Class Compiler, (c) CroTeam 1997-98
 */

#line 3 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Dummy.es"

#include "stdH.h"

#include <Dummy.h>
#include <Dummy_tables.h>
void CDummy::SetDefaultProperties(void) {
	CEntity::SetDefaultProperties();
}
BOOL CDummy::
#line 19 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Dummy.es"
Main(const CEntityEvent &__eeInput) {
#undef STATE_CURRENT
#define STATE_CURRENT STATE_CDummy_Main
	ASSERTMSG(__eeInput.ee_slEvent==EVENTCODE_EVoid, "CDummy::Main expects 'EVoid' as input!");	const EVoid &e = (const EVoid &)__eeInput;
#line 21 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Dummy.es"
InitAsVoid  ();
#line 22 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Dummy.es"
Return(STATE_CURRENT,EVoid());
#line 22 "F:/SD-Source/mandra/Reco_Csrc/EntitiesMP/Dummy.es"
return TRUE; ASSERT(FALSE); return TRUE;};