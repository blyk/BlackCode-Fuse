// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MASTER_PROPERTY__INT3_H__
#define __APP_FUSE_ANIMATIONS_MASTER_PROPERTY__INT3_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.MasterBase__int3.h>
#include <app/Fuse.Animations.MasterPropertyGet.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Uno { namespace UX { struct Property__int3; } } }
namespace app { namespace Uno { struct Int3; } }

namespace app {
namespace Fuse {
namespace Animations {

struct MasterProperty__int3;

struct MasterProperty__int3__uType : ::app::Fuse::Animations::MasterBase__int3__uType
{
    ::app::Fuse::Animations::MasterPropertyGet __interface_1;
};

MasterProperty__int3__uType* MasterProperty__int3__typeof();

void MasterProperty__int3___ObjInit_1(MasterProperty__int3* __this, ::app::Uno::UX::Property__int3* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Uno::Int3 MasterProperty__int3__get_RestValue(MasterProperty__int3* __this);
::uObject* MasterProperty__int3__GetPropertyObject(MasterProperty__int3* __this);
void MasterProperty__int3__OnInactive(MasterProperty__int3* __this);

struct MasterProperty__int3 : ::app::Fuse::Animations::MasterBase__int3
{
    ::uStrong< ::app::Uno::UX::Property__int3*> Property;

    void _ObjInit_1(::app::Uno::UX::Property__int3* property, ::app::Fuse::Animations::MixerBase* mixerBase) { MasterProperty__int3___ObjInit_1(this, property, mixerBase); }
    ::uObject* GetPropertyObject() { return MasterProperty__int3__GetPropertyObject(this); }
};

}}}


#endif
