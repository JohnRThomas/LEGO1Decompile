#include "legoscripts.h"

MxAtomId* LegoScripts::script_copter_;
MxAtomId* LegoScripts::script_dunecar_;
MxAtomId* LegoScripts::script_jetski_;
MxAtomId* LegoScripts::script_racecar_;
MxAtomId* LegoScripts::script_carrace_;
MxAtomId* LegoScripts::script_carracer_;
MxAtomId* LegoScripts::script_jetrace_;
MxAtomId* LegoScripts::script_jetracer_;
MxAtomId* LegoScripts::script_isle_;
MxAtomId* LegoScripts::script_elevbott_;
MxAtomId* LegoScripts::script_infodoor_;
MxAtomId* LegoScripts::script_infomain_;
MxAtomId* LegoScripts::script_infoscor_;
MxAtomId* LegoScripts::script_regbook_;
MxAtomId* LegoScripts::script_histbook_;
MxAtomId* LegoScripts::script_hospital_;
MxAtomId* LegoScripts::script_police_;
MxAtomId* LegoScripts::script_garage_;
MxAtomId* LegoScripts::script_act2main_;
MxAtomId* LegoScripts::script_act3_;
MxAtomId* LegoScripts::script_jukebox_;
MxAtomId* LegoScripts::script_pz5_;
MxAtomId* LegoScripts::script_intro_;
MxAtomId* LegoScripts::script_test_;
MxAtomId* LegoScripts::script_jukeboxw_;
MxAtomId* LegoScripts::script_sndanim_;
MxAtomId* LegoScripts::script_credits_;
MxAtomId* LegoScripts::script_nocd_;

LegoScripts::LegoScripts()
{

}

void LegoScripts::Load()
{
    script_copter_ = new MxAtomId("\\lego\\scripts\\build\\copter", Unk_LookupMode3);
    script_dunecar_ = new MxAtomId("\\lego\\scripts\\build\\dunecar", Unk_LookupMode3);
    script_jetski_ = new MxAtomId("\\lego\\scripts\\build\\jetski", Unk_LookupMode3);
    script_racecar_ = new MxAtomId("\\lego\\scripts\\build\\racecar", Unk_LookupMode3);
    script_carrace_ = new MxAtomId("\\lego\\scripts\\race\\carrace", Unk_LookupMode3);
    script_carracer_ = new MxAtomId("\\lego\\scripts\\race\\carracer", Unk_LookupMode3);
    script_jetrace_ = new MxAtomId("\\lego\\scripts\\race\\jetrace", Unk_LookupMode3);
    script_jetracer_ = new MxAtomId("\\lego\\scripts\\race\\jetracer", Unk_LookupMode3);
    script_isle_ = new MxAtomId("\\lego\\scripts\\isle\\isle", Unk_LookupMode3);
    script_elevbott_ = new MxAtomId("\\lego\\scripts\\infocntr\\elevbott", Unk_LookupMode3);
    script_infodoor_ = new MxAtomId("\\lego\\scripts\\infocntr\\infodoor", Unk_LookupMode3);
    script_infomain_ = new MxAtomId("\\lego\\scripts\\infocntr\\infomain", Unk_LookupMode3);
    script_infoscor_ = new MxAtomId("\\lego\\scripts\\infocntr\\infoscor", Unk_LookupMode3);
    script_regbook_ = new MxAtomId("\\lego\\scripts\\infocntr\\regbook", Unk_LookupMode3);
    script_histbook_ = new MxAtomId("\\lego\\scripts\\infocntr\\histbook", Unk_LookupMode3);
    script_hospital_ = new MxAtomId("\\lego\\scripts\\hospital\\hospital", Unk_LookupMode3);
    script_police_ = new MxAtomId("\\lego\\scripts\\police\\police", Unk_LookupMode3);
    script_garage_ = new MxAtomId("\\lego\\scripts\\garage\\garage", Unk_LookupMode3);
    script_act2main_ = new MxAtomId("\\lego\\scripts\\act2\\act2main", Unk_LookupMode3);
    script_act3_ = new MxAtomId("\\lego\\scripts\\act3\\act3", Unk_LookupMode3);
    script_jukebox_ = new MxAtomId("\\lego\\scripts\\isle\\jukebox", Unk_LookupMode3);
    script_pz5_ = new MxAtomId("\\lego\\scripts\\isle\\pz5", Unk_LookupMode3);
    script_intro_ = new MxAtomId("\\lego\\scripts\\intro", Unk_LookupMode3);
    script_test_ = new MxAtomId("\\lego\\scripts\\test\\test", Unk_LookupMode3);
    script_jukeboxw_ = new MxAtomId("\\lego\\scripts\\isle\\jukeboxw", Unk_LookupMode3);
    script_sndanim_ = new MxAtomId("\\lego\\scripts\\sndanim", Unk_LookupMode3);
    script_credits_ = new MxAtomId("\\lego\\scripts\\credits", Unk_LookupMode3);
    script_nocd_ = new MxAtomId("\\lego\\scripts\\nocd", Unk_LookupMode3);
}
