// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_ENUMERATOR__STRING__EXPERIMENTAL_CA_75291C79_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_ENUMERATOR__STRING__EXPERIMENTAL_CA_75291C79_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Uno_Collections_KeyValuePair_strin-781fb800.h>
#include <app/Uno.Collections.KeyValuePair__string__Experimental_Cache_DiskCacheEntry.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__string__Experimental_Cache_DiskCacheEntry; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_Enumerator__string__Experimental_Cache_DiskCacheEntry;

struct Dictionary2_Enumerator__string__Experimental_Cache_DiskCacheEntry__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Uno_Collections_KeyValuePair_string_Experimental_Cache_DiskCacheEntry_ __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

Dictionary2_Enumerator__string__Experimental_Cache_DiskCacheEntry__uType* Dictionary2_Enumerator__string__Experimental_Cache_DiskCacheEntry__typeof();

void Dictionary2_Enumerator__string__Experimental_Cache_DiskCacheEntry___ObjInit(Dictionary2_Enumerator__string__Experimental_Cache_DiskCacheEntry* __this, ::app::Uno::Collections::Dictionary__string__Experimental_Cache_DiskCacheEntry* source);
void Dictionary2_Enumerator__string__Experimental_Cache_DiskCacheEntry__Dispose(Dictionary2_Enumerator__string__Experimental_Cache_DiskCacheEntry* __this);
::app::Uno::Collections::KeyValuePair__string__Experimental_Cache_DiskCacheEntry Dictionary2_Enumerator__string__Experimental_Cache_DiskCacheEntry__get_Current(Dictionary2_Enumerator__string__Experimental_Cache_DiskCacheEntry* __this);
bool Dictionary2_Enumerator__string__Experimental_Cache_DiskCacheEntry__MoveNext(Dictionary2_Enumerator__string__Experimental_Cache_DiskCacheEntry* __this);
Dictionary2_Enumerator__string__Experimental_Cache_DiskCacheEntry Dictionary2_Enumerator__string__Experimental_Cache_DiskCacheEntry__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__string__Experimental_Cache_DiskCacheEntry* source);
void Dictionary2_Enumerator__string__Experimental_Cache_DiskCacheEntry__Uno_Collections_IEnumerator_Reset(Dictionary2_Enumerator__string__Experimental_Cache_DiskCacheEntry* __this);

struct Dictionary2_Enumerator__string__Experimental_Cache_DiskCacheEntry
{
    ::uStrong< ::app::Uno::Collections::Dictionary__string__Experimental_Cache_DiskCacheEntry*> _source;
    ::app::Uno::Collections::KeyValuePair__string__Experimental_Cache_DiskCacheEntry _current;
    int _iterator;
    int _version;

    void _ObjInit(::app::Uno::Collections::Dictionary__string__Experimental_Cache_DiskCacheEntry* source) { Dictionary2_Enumerator__string__Experimental_Cache_DiskCacheEntry___ObjInit(this, source); }
    void Dispose() { Dictionary2_Enumerator__string__Experimental_Cache_DiskCacheEntry__Dispose(this); }
    ::app::Uno::Collections::KeyValuePair__string__Experimental_Cache_DiskCacheEntry Current() { return Dictionary2_Enumerator__string__Experimental_Cache_DiskCacheEntry__get_Current(this); }
    bool MoveNext() { return Dictionary2_Enumerator__string__Experimental_Cache_DiskCacheEntry__MoveNext(this); }
};

}}}


#endif