// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MASTER_PROPERTY__FUSE_NAVIGATION_NAVIGATION_DIRECTION_H__
#define __APP_FUSE_ANIMATIONS_MASTER_PROPERTY__FUSE_NAVIGATION_NAVIGATION_DIRECTION_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Navigation_NavigationDirection.h>
#include <app/Fuse.Animations.MasterPropertyGet.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Navigation_NavigationDirection; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct MasterProperty__Fuse_Navigation_NavigationDirection;

struct MasterProperty__Fuse_Navigation_NavigationDirection__uType : ::app::Fuse::Animations::MasterBase__Fuse_Navigation_NavigationDirection__uType
{
    ::app::Fuse::Animations::MasterPropertyGet __interface_1;
};

MasterProperty__Fuse_Navigation_NavigationDirection__uType* MasterProperty__Fuse_Navigation_NavigationDirection__typeof();

void MasterProperty__Fuse_Navigation_NavigationDirection___ObjInit_1(MasterProperty__Fuse_Navigation_NavigationDirection* __this, ::app::Uno::UX::Property__Fuse_Navigation_NavigationDirection* property, ::app::Fuse::Animations::MixerBase* mixerBase);
int MasterProperty__Fuse_Navigation_NavigationDirection__get_RestValue(MasterProperty__Fuse_Navigation_NavigationDirection* __this);
::uObject* MasterProperty__Fuse_Navigation_NavigationDirection__GetPropertyObject(MasterProperty__Fuse_Navigation_NavigationDirection* __this);
void MasterProperty__Fuse_Navigation_NavigationDirection__OnInactive(MasterProperty__Fuse_Navigation_NavigationDirection* __this);

struct MasterProperty__Fuse_Navigation_NavigationDirection : ::app::Fuse::Animations::MasterBase__Fuse_Navigation_NavigationDirection
{
    ::uStrong< ::app::Uno::UX::Property__Fuse_Navigation_NavigationDirection*> Property;

    void _ObjInit_1(::app::Uno::UX::Property__Fuse_Navigation_NavigationDirection* property, ::app::Fuse::Animations::MixerBase* mixerBase) { MasterProperty__Fuse_Navigation_NavigationDirection___ObjInit_1(this, property, mixerBase); }
    ::uObject* GetPropertyObject() { return MasterProperty__Fuse_Navigation_NavigationDirection__GetPropertyObject(this); }
};

}}}


#endif
