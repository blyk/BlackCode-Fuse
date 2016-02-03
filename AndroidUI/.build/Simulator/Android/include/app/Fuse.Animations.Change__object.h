// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_CHANGE__OBJECT_H__
#define __APP_FUSE_ANIMATIONS_CHANGE__OBJECT_H__

#include <app/Fuse.Animations.TrackAnimator.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct AnimatorState; } } }
namespace app { namespace Fuse { namespace Animations { struct Converter__object; } } }
namespace app { namespace Fuse { namespace Animations { struct CreateStateParams; } } }
namespace app { namespace Uno { namespace UX { struct Property__object; } } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace Animations {

struct Change__object;

struct Change__object__uType : ::app::Fuse::Animations::TrackAnimator__uType
{
};

Change__object__uType* Change__object__typeof();

void Change__object___ObjInit_2(Change__object* __this, ::app::Uno::UX::Property__object* target);
::app::Fuse::Animations::AnimatorState* Change__object__CreateState(Change__object* __this, ::app::Fuse::Animations::CreateStateParams* p);
float Change__object__get_DegreesX(Change__object* __this);
::app::Uno::Float2 Change__object__get_DegreesXY(Change__object* __this);
float Change__object__get_DegreesY(Change__object* __this);
float Change__object__get_DegreesZ(Change__object* __this);
bool Change__object__get_IsContinuous(Change__object* __this);
::app::Uno::UX::Property__object* Change__object__get_Target(Change__object* __this);
::uObject* Change__object__get_Value(Change__object* __this);
float Change__object__get_X(Change__object* __this);
::app::Uno::Float2 Change__object__get_XY(Change__object* __this);
float Change__object__get_Y(Change__object* __this);
float Change__object__get_Z(Change__object* __this);
Change__object* Change__object__New_1(::uStatic* __this, ::app::Uno::UX::Property__object* target);
void Change__object__set_DegreesX(Change__object* __this, float value);
void Change__object__set_DegreesXY(Change__object* __this, ::app::Uno::Float2 value);
void Change__object__set_DegreesY(Change__object* __this, float value);
void Change__object__set_DegreesZ(Change__object* __this, float value);
void Change__object__set_Target(Change__object* __this, ::app::Uno::UX::Property__object* value);
void Change__object__set_Value(Change__object* __this, ::uObject* value);
void Change__object__set_X(Change__object* __this, float value);
void Change__object__set_XY(Change__object* __this, ::app::Uno::Float2 value);
void Change__object__set_Y(Change__object* __this, float value);
void Change__object__set_Z(Change__object* __this, float value);

struct Change__object : ::app::Fuse::Animations::TrackAnimator
{
    ::uStrong< ::app::Fuse::Animations::Converter__object*> ContinuousConverter;
    ::uStrong< ::app::Uno::UX::Property__object*> _Target;

    void _ObjInit_2(::app::Uno::UX::Property__object* target) { Change__object___ObjInit_2(this, target); }
    float DegreesX() { return Change__object__get_DegreesX(this); }
    ::app::Uno::Float2 DegreesXY();
    float DegreesY() { return Change__object__get_DegreesY(this); }
    float DegreesZ() { return Change__object__get_DegreesZ(this); }
    bool IsContinuous() { return Change__object__get_IsContinuous(this); }
    ::app::Uno::UX::Property__object* Target() { return Change__object__get_Target(this); }
    ::uObject* Value() { return Change__object__get_Value(this); }
    float X() { return Change__object__get_X(this); }
    ::app::Uno::Float2 XY();
    float Y() { return Change__object__get_Y(this); }
    float Z() { return Change__object__get_Z(this); }
    void DegreesX(float value) { Change__object__set_DegreesX(this, value); }
    void DegreesXY(::app::Uno::Float2 value);
    void DegreesY(float value) { Change__object__set_DegreesY(this, value); }
    void DegreesZ(float value) { Change__object__set_DegreesZ(this, value); }
    void Target(::app::Uno::UX::Property__object* value) { Change__object__set_Target(this, value); }
    void Value(::uObject* value) { Change__object__set_Value(this, value); }
    void X(float value) { Change__object__set_X(this, value); }
    void XY(::app::Uno::Float2 value);
    void Y(float value) { Change__object__set_Y(this, value); }
    void Z(float value) { Change__object__set_Z(this, value); }
};

}}}

#include <app/Uno.Float2.h>

namespace app {
namespace Fuse {
namespace Animations {

inline ::app::Uno::Float2 Change__object::DegreesXY() { return Change__object__get_DegreesXY(this); }
inline ::app::Uno::Float2 Change__object::XY() { return Change__object__get_XY(this); }
inline void Change__object::DegreesXY(::app::Uno::Float2 value) { Change__object__set_DegreesXY(this, value); }
inline void Change__object::XY(::app::Uno::Float2 value) { Change__object__set_XY(this, value); }

}}}


#endif