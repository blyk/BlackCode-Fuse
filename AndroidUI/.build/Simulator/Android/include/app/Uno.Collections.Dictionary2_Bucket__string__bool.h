// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_BUCKET__STRING__BOOL_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_BUCKET__STRING__BOOL_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_Bucket__string__bool;

struct Dictionary2_Bucket__string__bool__uType : ::uStructType
{
};

Dictionary2_Bucket__string__bool__uType* Dictionary2_Bucket__string__bool__typeof();

struct Dictionary2_Bucket__string__bool
{
    ::uStrong< ::uString*> Key;
    bool Value;
    int State;
};

}}}


#endif