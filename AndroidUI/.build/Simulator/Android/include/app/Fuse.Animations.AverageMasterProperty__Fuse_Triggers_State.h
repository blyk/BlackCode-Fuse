// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_AVERAGE_MASTER_PROPERTY__FUSE_TRIGGERS_STATE_H__
#define __APP_FUSE_ANIMATIONS_AVERAGE_MASTER_PROPERTY__FUSE_TRIGGERS_STATE_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Triggers_State.h>
#include <app/Fuse.Animations.MasterPropertyGet.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__Fuse_Triggers_State; } } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Triggers_State; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct AverageMasterProperty__Fuse_Triggers_State;

struct AverageMasterProperty__Fuse_Triggers_State__uType : ::app::Fuse::Animations::MasterProperty__Fuse_Triggers_State__uType
{
};

AverageMasterProperty__Fuse_Triggers_State__uType* AverageMasterProperty__Fuse_Triggers_State__typeof();

void AverageMasterProperty__Fuse_Triggers_State___ObjInit_2(AverageMasterProperty__Fuse_Triggers_State* __this, ::app::Uno::UX::Property__Fuse_Triggers_State* property, ::app::Fuse::Animations::MixerBase* mixerBase);
AverageMasterProperty__Fuse_Triggers_State* AverageMasterProperty__Fuse_Triggers_State__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Triggers_State* property, ::app::Fuse::Animations::MixerBase* mixerBase);
void AverageMasterProperty__Fuse_Triggers_State__OnActive(AverageMasterProperty__Fuse_Triggers_State* __this);
void AverageMasterProperty__Fuse_Triggers_State__OnComplete(AverageMasterProperty__Fuse_Triggers_State* __this);

struct AverageMasterProperty__Fuse_Triggers_State : ::app::Fuse::Animations::MasterProperty__Fuse_Triggers_State
{
    ::uStrong< ::app::Fuse::Internal::Blender__Fuse_Triggers_State*> blender;

    void _ObjInit_2(::app::Uno::UX::Property__Fuse_Triggers_State* property, ::app::Fuse::Animations::MixerBase* mixerBase) { AverageMasterProperty__Fuse_Triggers_State___ObjInit_2(this, property, mixerBase); }
};

}}}


#endif