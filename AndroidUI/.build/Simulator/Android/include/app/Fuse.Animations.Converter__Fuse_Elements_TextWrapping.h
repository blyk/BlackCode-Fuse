// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_CONVERTER__FUSE_ELEMENTS_TEXT_WRAPPING_H__
#define __APP_FUSE_ANIMATIONS_CONVERTER__FUSE_ELEMENTS_TEXT_WRAPPING_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace Animations {

struct Converter__Fuse_Elements_TextWrapping;

struct Converter__Fuse_Elements_TextWrapping__uType : ::uClassType
{
    ::app::Uno::Float4(*__fp_In)(Converter__Fuse_Elements_TextWrapping*, int);
    int(*__fp_Out)(Converter__Fuse_Elements_TextWrapping*, ::app::Uno::Float4);
};

Converter__Fuse_Elements_TextWrapping__uType* Converter__Fuse_Elements_TextWrapping__typeof();

struct Converter__Fuse_Elements_TextWrapping : ::uObject
{
    ::app::Uno::Float4 In(int value);
    int Out(::app::Uno::Float4 value);
};

}}}

#include <app/Uno.Float4.h>

namespace app {
namespace Fuse {
namespace Animations {

inline ::app::Uno::Float4 Converter__Fuse_Elements_TextWrapping::In(int value) { return (((Converter__Fuse_Elements_TextWrapping__uType*)this->__obj_type)->__fp_In)(this, value); }
inline int Converter__Fuse_Elements_TextWrapping::Out(::app::Uno::Float4 value) { return (((Converter__Fuse_Elements_TextWrapping__uType*)this->__obj_type)->__fp_Out)(this, value); }

}}}


#endif
