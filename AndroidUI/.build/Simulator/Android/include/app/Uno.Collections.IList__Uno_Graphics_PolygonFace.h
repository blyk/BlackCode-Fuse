// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_I_LIST__UNO_GRAPHICS_POLYGON_FACE_H__
#define __APP_UNO_COLLECTIONS_I_LIST__UNO_GRAPHICS_POLYGON_FACE_H__

#include <app/Uno.Collections.ICollection__Uno_Graphics_PolygonFace.h>
#include <app/Uno.Collections.IEnumerable__Uno_Graphics_PolygonFace.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Collections {

::uInterfaceType* IList__Uno_Graphics_PolygonFace__typeof();

struct IList__Uno_Graphics_PolygonFace
{
    int(*__fp_get_Item)(void*, int);
    void(*__fp_RemoveAt)(void*, int);

    static int Item(::uObject* __this, int index) { return ((IList__Uno_Graphics_PolygonFace*)uGetInterfacePtr(__this, IList__Uno_Graphics_PolygonFace__typeof()))->__fp_get_Item((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), index); }
    static void RemoveAt(::uObject* __this, int index) { ((IList__Uno_Graphics_PolygonFace*)uGetInterfacePtr(__this, IList__Uno_Graphics_PolygonFace__typeof()))->__fp_RemoveAt((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), index); }
};

}}}


#endif
