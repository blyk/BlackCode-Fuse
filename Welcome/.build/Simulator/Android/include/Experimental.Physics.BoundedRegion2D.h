// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Physics\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Experimental.Physics.MotionSimulation-1.h>
#include <Experimental.Physics.Simulation.h>
#include <Uno.Float2.h>
#include <Uno.Object.h>

namespace g{
namespace Experimental{
namespace Physics{

// public abstract interface BoundedRegion2D :8
// {
uInterfaceType* BoundedRegion2D_typeof();

struct BoundedRegion2D
{
    void(*fp_EndUser)(uObject*, ::g::Uno::Float2*);
    void(*fp_get_IsUser)(uObject*, bool*);
    void(*fp_get_MaxPosition)(uObject*, ::g::Uno::Float2*);
    void(*fp_set_MaxPosition)(uObject*, ::g::Uno::Float2*);
    void(*fp_get_MinPosition)(uObject*, ::g::Uno::Float2*);
    void(*fp_set_MinPosition)(uObject*, ::g::Uno::Float2*);
    void(*fp_MoveTo)(uObject*, ::g::Uno::Float2*);
    void(*fp_get_OverflowExtent)(uObject*, ::g::Uno::Float2*);
    void(*fp_set_OverflowExtent)(uObject*, ::g::Uno::Float2*);
    void(*fp_StartUser)(uObject*);
    void(*fp_StepUser)(uObject*, ::g::Uno::Float2*);
    static void EndUser(const uInterface& __this, ::g::Uno::Float2 velocity) { __this.VTable<BoundedRegion2D>()->fp_EndUser(__this, &velocity); }
    static bool IsUser(const uInterface& __this) { bool __retval; return __this.VTable<BoundedRegion2D>()->fp_get_IsUser(__this, &__retval), __retval; }
    static ::g::Uno::Float2 MaxPosition(const uInterface& __this) { ::g::Uno::Float2 __retval; return __this.VTable<BoundedRegion2D>()->fp_get_MaxPosition(__this, &__retval), __retval; }
    static void MaxPosition(const uInterface& __this, ::g::Uno::Float2 value) { __this.VTable<BoundedRegion2D>()->fp_set_MaxPosition(__this, &value); }
    static ::g::Uno::Float2 MinPosition(const uInterface& __this) { ::g::Uno::Float2 __retval; return __this.VTable<BoundedRegion2D>()->fp_get_MinPosition(__this, &__retval), __retval; }
    static void MinPosition(const uInterface& __this, ::g::Uno::Float2 value) { __this.VTable<BoundedRegion2D>()->fp_set_MinPosition(__this, &value); }
    static void MoveTo(const uInterface& __this, ::g::Uno::Float2 position) { __this.VTable<BoundedRegion2D>()->fp_MoveTo(__this, &position); }
    static ::g::Uno::Float2 OverflowExtent(const uInterface& __this) { ::g::Uno::Float2 __retval; return __this.VTable<BoundedRegion2D>()->fp_get_OverflowExtent(__this, &__retval), __retval; }
    static void OverflowExtent(const uInterface& __this, ::g::Uno::Float2 value) { __this.VTable<BoundedRegion2D>()->fp_set_OverflowExtent(__this, &value); }
    static void StartUser(const uInterface& __this) { __this.VTable<BoundedRegion2D>()->fp_StartUser(__this); }
    static void StepUser(const uInterface& __this, ::g::Uno::Float2 offset) { __this.VTable<BoundedRegion2D>()->fp_StepUser(__this, &offset); }
};
// }

}}} // ::g::Experimental::Physics
