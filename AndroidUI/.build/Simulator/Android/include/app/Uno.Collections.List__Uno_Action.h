// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__UNO_ACTION_H__
#define __APP_UNO_COLLECTIONS_LIST__UNO_ACTION_H__

#include <app/Uno.Collections.IEnumerable__Uno_Action.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Uno_Action; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Uno_Action;

struct List__Uno_Action__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Uno_Action __interface_0;
};

List__Uno_Action__uType* List__Uno_Action__typeof();

::uObject* List__Uno_Action__GetEnumerator_boxed(List__Uno_Action* __this);
void List__Uno_Action___ObjInit(List__Uno_Action* __this);
void List__Uno_Action___ObjInit_1(List__Uno_Action* __this, int capacity);
void List__Uno_Action__Add(List__Uno_Action* __this, ::uDelegate* item);
void List__Uno_Action__AddRange(List__Uno_Action* __this, ::uObject* items);
void List__Uno_Action__BoundsCheck(List__Uno_Action* __this, int index);
void List__Uno_Action__Clear(List__Uno_Action* __this);
bool List__Uno_Action__Contains(List__Uno_Action* __this, ::uDelegate* item);
void List__Uno_Action__EnsureCapacity(List__Uno_Action* __this);
int List__Uno_Action__get_Count(List__Uno_Action* __this);
::uDelegate* List__Uno_Action__get_Item(List__Uno_Action* __this, int index);
::app::Uno::Collections::List1_Enumerator__Uno_Action List__Uno_Action__GetEnumerator(List__Uno_Action* __this);
int List__Uno_Action__IndexOf(List__Uno_Action* __this, ::uDelegate* item);
void List__Uno_Action__Insert(List__Uno_Action* __this, int index, ::uDelegate* item);
List__Uno_Action* List__Uno_Action__New_1(::uStatic* __this);
List__Uno_Action* List__Uno_Action__New_2(::uStatic* __this, int capacity);
bool List__Uno_Action__Remove(List__Uno_Action* __this, ::uDelegate* item);
void List__Uno_Action__RemoveAt(List__Uno_Action* __this, int index);
void List__Uno_Action__set_Item(List__Uno_Action* __this, int index, ::uDelegate* value);
void List__Uno_Action__Sort(List__Uno_Action* __this, ::uDelegate* comparer);
::uArray* List__Uno_Action__ToArray(List__Uno_Action* __this);

struct List__Uno_Action : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__Uno_Action__GetEnumerator_boxed(this); }
    void _ObjInit() { List__Uno_Action___ObjInit(this); }
    void _ObjInit_1(int capacity) { List__Uno_Action___ObjInit_1(this, capacity); }
    void Add(::uDelegate* item) { List__Uno_Action__Add(this, item); }
    void AddRange(::uObject* items) { List__Uno_Action__AddRange(this, items); }
    void BoundsCheck(int index) { List__Uno_Action__BoundsCheck(this, index); }
    void Clear() { List__Uno_Action__Clear(this); }
    bool Contains(::uDelegate* item) { return List__Uno_Action__Contains(this, item); }
    void EnsureCapacity() { List__Uno_Action__EnsureCapacity(this); }
    int Count() { return List__Uno_Action__get_Count(this); }
    ::uDelegate* Item(int index) { return List__Uno_Action__get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__Uno_Action GetEnumerator();
    int IndexOf(::uDelegate* item) { return List__Uno_Action__IndexOf(this, item); }
    void Insert(int index, ::uDelegate* item) { List__Uno_Action__Insert(this, index, item); }
    bool Remove(::uDelegate* item) { return List__Uno_Action__Remove(this, item); }
    void RemoveAt(int index) { List__Uno_Action__RemoveAt(this, index); }
    void Item(int index, ::uDelegate* value) { List__Uno_Action__set_Item(this, index, value); }
    void Sort(::uDelegate* comparer) { List__Uno_Action__Sort(this, comparer); }
    ::uArray* ToArray() { return List__Uno_Action__ToArray(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Uno_Action.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Uno_Action List__Uno_Action::GetEnumerator() { return List__Uno_Action__GetEnumerator(this); }

}}}


#endif
