// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__UNO_PLATFORM_KEY_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__UNO_PLATFORM_KEY_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Uno_Platform_Key.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List__Uno_Platform_Key; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Uno_Platform_Key;

struct List1_Enumerator__Uno_Platform_Key__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Uno_Platform_Key __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__Uno_Platform_Key__uType* List1_Enumerator__Uno_Platform_Key__typeof();

void List1_Enumerator__Uno_Platform_Key___ObjInit(List1_Enumerator__Uno_Platform_Key* __this, ::app::Uno::Collections::List__Uno_Platform_Key* source);
void List1_Enumerator__Uno_Platform_Key__Dispose(List1_Enumerator__Uno_Platform_Key* __this);
int List1_Enumerator__Uno_Platform_Key__get_Current(List1_Enumerator__Uno_Platform_Key* __this);
bool List1_Enumerator__Uno_Platform_Key__MoveNext(List1_Enumerator__Uno_Platform_Key* __this);
List1_Enumerator__Uno_Platform_Key List1_Enumerator__Uno_Platform_Key__New_1(::uStatic* __this, ::app::Uno::Collections::List__Uno_Platform_Key* source);
void List1_Enumerator__Uno_Platform_Key__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Uno_Platform_Key* __this);

struct List1_Enumerator__Uno_Platform_Key
{
    ::uStrong< ::app::Uno::Collections::List__Uno_Platform_Key*> _source;
    int _version;
    int _iterator;
    int _current;

    void _ObjInit(::app::Uno::Collections::List__Uno_Platform_Key* source) { List1_Enumerator__Uno_Platform_Key___ObjInit(this, source); }
    void Dispose() { List1_Enumerator__Uno_Platform_Key__Dispose(this); }
    int Current() { return List1_Enumerator__Uno_Platform_Key__get_Current(this); }
    bool MoveNext() { return List1_Enumerator__Uno_Platform_Key__MoveNext(this); }
};

}}}


#endif