// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_ARRAY_ENUMERATOR__OUTRACKS_S_BC81546_H__
#define __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_ARRAY_ENUMERATOR__OUTRACKS_S_BC81546_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Outracks_Simulator_DialogButton.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { struct DialogButton; } } }

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {
namespace Internal {

struct ArrayEnumerator__Outracks_Simulator_DialogButton;

struct ArrayEnumerator__Outracks_Simulator_DialogButton__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerator__Outracks_Simulator_DialogButton __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

ArrayEnumerator__Outracks_Simulator_DialogButton__uType* ArrayEnumerator__Outracks_Simulator_DialogButton__typeof();

void ArrayEnumerator__Outracks_Simulator_DialogButton___ObjInit(ArrayEnumerator__Outracks_Simulator_DialogButton* __this, ::uArray* source);
void ArrayEnumerator__Outracks_Simulator_DialogButton__Dispose(ArrayEnumerator__Outracks_Simulator_DialogButton* __this);
::app::Outracks::Simulator::DialogButton* ArrayEnumerator__Outracks_Simulator_DialogButton__get_Current(ArrayEnumerator__Outracks_Simulator_DialogButton* __this);
bool ArrayEnumerator__Outracks_Simulator_DialogButton__MoveNext(ArrayEnumerator__Outracks_Simulator_DialogButton* __this);
ArrayEnumerator__Outracks_Simulator_DialogButton* ArrayEnumerator__Outracks_Simulator_DialogButton__New_1(::uStatic* __this, ::uArray* source);
void ArrayEnumerator__Outracks_Simulator_DialogButton__Reset(ArrayEnumerator__Outracks_Simulator_DialogButton* __this);

struct ArrayEnumerator__Outracks_Simulator_DialogButton : ::uObject
{
    ::uStrong< ::uArray*> _source;
    int _iterator;
    ::uStrong< ::app::Outracks::Simulator::DialogButton*> _current;

    void _ObjInit(::uArray* source) { ArrayEnumerator__Outracks_Simulator_DialogButton___ObjInit(this, source); }
    void Dispose() { ArrayEnumerator__Outracks_Simulator_DialogButton__Dispose(this); }
    ::app::Outracks::Simulator::DialogButton* Current() { return ArrayEnumerator__Outracks_Simulator_DialogButton__get_Current(this); }
    bool MoveNext() { return ArrayEnumerator__Outracks_Simulator_DialogButton__MoveNext(this); }
    void Reset() { ArrayEnumerator__Outracks_Simulator_DialogButton__Reset(this); }
};

}}}}}


#endif
