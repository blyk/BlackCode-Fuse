// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_CHANGE__INT_H__
#define __APP_FUSE_ANIMATIONS_CHANGE__INT_H__

#include <app/Fuse.Animations.TrackAnimator.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct AnimatorState; } } }
namespace app { namespace Fuse { namespace Animations { struct Converter__int; } } }
namespace app { namespace Fuse { namespace Animations { struct CreateStateParams; } } }
namespace app { namespace Uno { namespace UX { struct Property__int; } } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace Animations {

struct Change__int;

struct Change__int__uType : ::app::Fuse::Animations::TrackAnimator__uType
{
};

Change__int__uType* Change__int__typeof();

void Change__int___ObjInit_2(Change__int* __this, ::app::Uno::UX::Property__int* target);
::app::Fuse::Animations::AnimatorState* Change__int__CreateState(Change__int* __this, ::app::Fuse::Animations::CreateStateParams* p);
float Change__int__get_DegreesX(Change__int* __this);
::app::Uno::Float2 Change__int__get_DegreesXY(Change__int* __this);
float Change__int__get_DegreesY(Change__int* __this);
float Change__int__get_DegreesZ(Change__int* __this);
bool Change__int__get_IsContinuous(Change__int* __this);
::app::Uno::UX::Property__int* Change__int__get_Target(Change__int* __this);
int Change__int__get_Value(Change__int* __this);
float Change__int__get_X(Change__int* __this);
::app::Uno::Float2 Change__int__get_XY(Change__int* __this);
float Change__int__get_Y(Change__int* __this);
float Change__int__get_Z(Change__int* __this);
Change__int* Change__int__New_1(::uStatic* __this, ::app::Uno::UX::Property__int* target);
void Change__int__set_DegreesX(Change__int* __this, float value);
void Change__int__set_DegreesXY(Change__int* __this, ::app::Uno::Float2 value);
void Change__int__set_DegreesY(Change__int* __this, float value);
void Change__int__set_DegreesZ(Change__int* __this, float value);
void Change__int__set_Target(Change__int* __this, ::app::Uno::UX::Property__int* value);
void Change__int__set_Value(Change__int* __this, int value);
void Change__int__set_X(Change__int* __this, float value);
void Change__int__set_XY(Change__int* __this, ::app::Uno::Float2 value);
void Change__int__set_Y(Change__int* __this, float value);
void Change__int__set_Z(Change__int* __this, float value);

struct Change__int : ::app::Fuse::Animations::TrackAnimator
{
    ::uStrong< ::app::Fuse::Animations::Converter__int*> ContinuousConverter;
    ::uStrong< ::app::Uno::UX::Property__int*> _Target;

    void _ObjInit_2(::app::Uno::UX::Property__int* target) { Change__int___ObjInit_2(this, target); }
    float DegreesX() { return Change__int__get_DegreesX(this); }
    ::app::Uno::Float2 DegreesXY();
    float DegreesY() { return Change__int__get_DegreesY(this); }
    float DegreesZ() { return Change__int__get_DegreesZ(this); }
    bool IsContinuous() { return Change__int__get_IsContinuous(this); }
    ::app::Uno::UX::Property__int* Target() { return Change__int__get_Target(this); }
    int Value() { return Change__int__get_Value(this); }
    float X() { return Change__int__get_X(this); }
    ::app::Uno::Float2 XY();
    float Y() { return Change__int__get_Y(this); }
    float Z() { return Change__int__get_Z(this); }
    void DegreesX(float value) { Change__int__set_DegreesX(this, value); }
    void DegreesXY(::app::Uno::Float2 value);
    void DegreesY(float value) { Change__int__set_DegreesY(this, value); }
    void DegreesZ(float value) { Change__int__set_DegreesZ(this, value); }
    void Target(::app::Uno::UX::Property__int* value) { Change__int__set_Target(this, value); }
    void Value(int value) { Change__int__set_Value(this, value); }
    void X(float value) { Change__int__set_X(this, value); }
    void XY(::app::Uno::Float2 value);
    void Y(float value) { Change__int__set_Y(this, value); }
    void Z(float value) { Change__int__set_Z(this, value); }
};

}}}

#include <app/Uno.Float2.h>

namespace app {
namespace Fuse {
namespace Animations {

inline ::app::Uno::Float2 Change__int::DegreesXY() { return Change__int__get_DegreesXY(this); }
inline ::app::Uno::Float2 Change__int::XY() { return Change__int__get_XY(this); }
inline void Change__int::DegreesXY(::app::Uno::Float2 value) { Change__int__set_DegreesXY(this, value); }
inline void Change__int::XY(::app::Uno::Float2 value) { Change__int__set_XY(this, value); }

}}}


#endif