// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Android{struct Helpers;}}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Android{

// internal static class Helpers :237
// {
uClassType* Helpers_typeof();
void Helpers__EncodeColor_fn(::g::Uno::Float4* c, int* __retval);

struct Helpers : uObject
{
    static int EncodeColor(::g::Uno::Float4 c);
};
// }

}}} // ::g::Fuse::Android
