#include <app/Fuse.Input.Pointer_PointerRecord.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo.h>
#include <app/Uno.Collections.Dictionary__Fuse_Controls_Internal_DefaultTextR-9aaaac6.h>
#include <app/Uno.Collections.Dictionary__int__Fuse_Input_Pointer_PointerRecord.h>
#include <app/Uno.Collections.Dictionary__int__Uno_Collections_List_Fuse_Inpu-4188694c.h>
#include <app/Uno.Collections.Dictionary__Uno_Content_Fonts_BitmapFont_CharPair__float.h>
#include <app/Uno.Collections.Dictionary2_ValueCollection__char__Uno_Content_-31e5337a.h>
#include <app/Uno.Collections.Dictionary2_ValueCollection__Fuse_Controls_Inte-2ebb5bed.h>
#include <app/Uno.Collections.Dictionary2_ValueCollection__int__Fuse_Input_Po-be17296f.h>
#include <app/Uno.Collections.Dictionary2_ValueCollection__int__Uno_Collectio-49cb5349.h>
#include <app/Uno.Collections.Dictionary2_ValueCollection__Uno_Content_Fonts_-c97d0e60.h>
#include <app/Uno.Collections.List__Fuse_Input_Pointer_PELHolder.h>
#include <app/Uno.Content.Fonts.BitmapFont.h>
#include <app/Uno.Float.h>
#include <app/Uno.Int.h>
#include <app/Uno.InvalidOperationException.h>

namespace app {
namespace Uno {
namespace Collections {

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_ValueCollection__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__uType* Dictionary2_ValueCollection__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__typeof()
{
    static ::uStaticStrong<Dictionary2_ValueCollection__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_ValueCollection__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__uType*)::uAllocClassType(sizeof(Dictionary2_ValueCollection__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__uType), "Uno.Collections.Dictionary2_ValueCollection<char,Uno.Content.Fonts.BitmapFont_GlyphInfo>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_source", offsetof(Dictionary2_ValueCollection__char__Uno_Content_Fonts_BitmapFont_GlyphInfo, _source));

    type->SetFields(1,
        ::uNewField("_source", NULL, offsetof(Dictionary2_ValueCollection__char__Uno_Content_Fonts_BitmapFont_GlyphInfo, _source), ::app::Uno::Collections::Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__typeof()));

    type->SetFunctions(2,
        ::uNewFunction("get_Count", Dictionary2_ValueCollection__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__get_Count, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("GetEnumerator", Dictionary2_ValueCollection__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__GetEnumerator, 0, false, ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__typeof()));

    ::uRegisterType(type);
    return type;
}

void Dictionary2_ValueCollection__char__Uno_Content_Fonts_BitmapFont_GlyphInfo___ObjInit(Dictionary2_ValueCollection__char__Uno_Content_Fonts_BitmapFont_GlyphInfo* __this, ::app::Uno::Collections::Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo* source)
{
    __this->_source = source;
}

int Dictionary2_ValueCollection__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__get_Count(Dictionary2_ValueCollection__char__Uno_Content_Fonts_BitmapFont_GlyphInfo* __this)
{
    return ::uPtr< ::app::Uno::Collections::Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo*>(__this->_source)->Count();
}

::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__char__Uno_Content_Fonts_BitmapFont_GlyphInfo Dictionary2_ValueCollection__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__GetEnumerator(Dictionary2_ValueCollection__char__Uno_Content_Fonts_BitmapFont_GlyphInfo* __this)
{
    return ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__New_1(NULL, __this->_source);
}

Dictionary2_ValueCollection__char__Uno_Content_Fonts_BitmapFont_GlyphInfo* Dictionary2_ValueCollection__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo* source)
{
    Dictionary2_ValueCollection__char__Uno_Content_Fonts_BitmapFont_GlyphInfo* inst = (Dictionary2_ValueCollection__char__Uno_Content_Fonts_BitmapFont_GlyphInfo*)::uAllocObject(sizeof(Dictionary2_ValueCollection__char__Uno_Content_Fonts_BitmapFont_GlyphInfo), Dictionary2_ValueCollection__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__typeof());
    inst->_ObjInit(source);
    return inst;
}

void Dictionary2_ValueCollection__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__Uno_Collections_ICollection_Add(Dictionary2_ValueCollection__char__Uno_Content_Fonts_BitmapFont_GlyphInfo* __this, ::app::Uno::Content::Fonts::BitmapFont_GlyphInfo item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

void Dictionary2_ValueCollection__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__Uno_Collections_ICollection_Clear(Dictionary2_ValueCollection__char__Uno_Content_Fonts_BitmapFont_GlyphInfo* __this)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__Uno_Collections_ICollection_Contains(Dictionary2_ValueCollection__char__Uno_Content_Fonts_BitmapFont_GlyphInfo* __this, ::app::Uno::Content::Fonts::BitmapFont_GlyphInfo item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__Uno_Collections_ICollection_Remove(Dictionary2_ValueCollection__char__Uno_Content_Fonts_BitmapFont_GlyphInfo* __this, ::app::Uno::Content::Fonts::BitmapFont_GlyphInfo item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_ValueCollection__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont__uType* Dictionary2_ValueCollection__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont__typeof()
{
    static ::uStaticStrong<Dictionary2_ValueCollection__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_ValueCollection__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont__uType*)::uAllocClassType(sizeof(Dictionary2_ValueCollection__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont__uType), "Uno.Collections.Dictionary2_ValueCollection<Fuse.Controls.Internal.DefaultTextRenderer_FontKey,Uno.Content.Fonts.BitmapFont>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_source", offsetof(Dictionary2_ValueCollection__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont, _source));

    type->SetFields(1,
        ::uNewField("_source", NULL, offsetof(Dictionary2_ValueCollection__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont, _source), ::app::Uno::Collections::Dictionary__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont__typeof()));

    type->SetFunctions(2,
        ::uNewFunction("get_Count", Dictionary2_ValueCollection__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont__get_Count, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("GetEnumerator", Dictionary2_ValueCollection__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont__GetEnumerator, 0, false, ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont__typeof()));

    ::uRegisterType(type);
    return type;
}

void Dictionary2_ValueCollection__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont___ObjInit(Dictionary2_ValueCollection__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont* __this, ::app::Uno::Collections::Dictionary__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont* source)
{
    __this->_source = source;
}

int Dictionary2_ValueCollection__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont__get_Count(Dictionary2_ValueCollection__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont* __this)
{
    return ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont*>(__this->_source)->Count();
}

::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont Dictionary2_ValueCollection__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont__GetEnumerator(Dictionary2_ValueCollection__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont* __this)
{
    return ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont__New_1(NULL, __this->_source);
}

Dictionary2_ValueCollection__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont* Dictionary2_ValueCollection__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont* source)
{
    Dictionary2_ValueCollection__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont* inst = (Dictionary2_ValueCollection__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont*)::uAllocObject(sizeof(Dictionary2_ValueCollection__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont), Dictionary2_ValueCollection__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont__typeof());
    inst->_ObjInit(source);
    return inst;
}

void Dictionary2_ValueCollection__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont__Uno_Collections_ICollection_Add(Dictionary2_ValueCollection__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont* __this, ::app::Uno::Content::Fonts::BitmapFont* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

void Dictionary2_ValueCollection__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont__Uno_Collections_ICollection_Clear(Dictionary2_ValueCollection__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont* __this)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont__Uno_Collections_ICollection_Contains(Dictionary2_ValueCollection__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont* __this, ::app::Uno::Content::Fonts::BitmapFont* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont__Uno_Collections_ICollection_Remove(Dictionary2_ValueCollection__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont* __this, ::app::Uno::Content::Fonts::BitmapFont* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_ValueCollection__int__Fuse_Input_Pointer_PointerRecord__uType* Dictionary2_ValueCollection__int__Fuse_Input_Pointer_PointerRecord__typeof()
{
    static ::uStaticStrong<Dictionary2_ValueCollection__int__Fuse_Input_Pointer_PointerRecord__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_ValueCollection__int__Fuse_Input_Pointer_PointerRecord__uType*)::uAllocClassType(sizeof(Dictionary2_ValueCollection__int__Fuse_Input_Pointer_PointerRecord__uType), "Uno.Collections.Dictionary2_ValueCollection<int,Fuse.Input.Pointer_PointerRecord>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_source", offsetof(Dictionary2_ValueCollection__int__Fuse_Input_Pointer_PointerRecord, _source));

    type->SetFields(1,
        ::uNewField("_source", NULL, offsetof(Dictionary2_ValueCollection__int__Fuse_Input_Pointer_PointerRecord, _source), ::app::Uno::Collections::Dictionary__int__Fuse_Input_Pointer_PointerRecord__typeof()));

    type->SetFunctions(2,
        ::uNewFunction("get_Count", Dictionary2_ValueCollection__int__Fuse_Input_Pointer_PointerRecord__get_Count, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("GetEnumerator", Dictionary2_ValueCollection__int__Fuse_Input_Pointer_PointerRecord__GetEnumerator, 0, false, ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__int__Fuse_Input_Pointer_PointerRecord__typeof()));

    ::uRegisterType(type);
    return type;
}

void Dictionary2_ValueCollection__int__Fuse_Input_Pointer_PointerRecord___ObjInit(Dictionary2_ValueCollection__int__Fuse_Input_Pointer_PointerRecord* __this, ::app::Uno::Collections::Dictionary__int__Fuse_Input_Pointer_PointerRecord* source)
{
    __this->_source = source;
}

int Dictionary2_ValueCollection__int__Fuse_Input_Pointer_PointerRecord__get_Count(Dictionary2_ValueCollection__int__Fuse_Input_Pointer_PointerRecord* __this)
{
    return ::uPtr< ::app::Uno::Collections::Dictionary__int__Fuse_Input_Pointer_PointerRecord*>(__this->_source)->Count();
}

::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__int__Fuse_Input_Pointer_PointerRecord Dictionary2_ValueCollection__int__Fuse_Input_Pointer_PointerRecord__GetEnumerator(Dictionary2_ValueCollection__int__Fuse_Input_Pointer_PointerRecord* __this)
{
    return ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__int__Fuse_Input_Pointer_PointerRecord__New_1(NULL, __this->_source);
}

Dictionary2_ValueCollection__int__Fuse_Input_Pointer_PointerRecord* Dictionary2_ValueCollection__int__Fuse_Input_Pointer_PointerRecord__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__int__Fuse_Input_Pointer_PointerRecord* source)
{
    Dictionary2_ValueCollection__int__Fuse_Input_Pointer_PointerRecord* inst = (Dictionary2_ValueCollection__int__Fuse_Input_Pointer_PointerRecord*)::uAllocObject(sizeof(Dictionary2_ValueCollection__int__Fuse_Input_Pointer_PointerRecord), Dictionary2_ValueCollection__int__Fuse_Input_Pointer_PointerRecord__typeof());
    inst->_ObjInit(source);
    return inst;
}

void Dictionary2_ValueCollection__int__Fuse_Input_Pointer_PointerRecord__Uno_Collections_ICollection_Add(Dictionary2_ValueCollection__int__Fuse_Input_Pointer_PointerRecord* __this, ::app::Fuse::Input::Pointer_PointerRecord* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

void Dictionary2_ValueCollection__int__Fuse_Input_Pointer_PointerRecord__Uno_Collections_ICollection_Clear(Dictionary2_ValueCollection__int__Fuse_Input_Pointer_PointerRecord* __this)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__int__Fuse_Input_Pointer_PointerRecord__Uno_Collections_ICollection_Contains(Dictionary2_ValueCollection__int__Fuse_Input_Pointer_PointerRecord* __this, ::app::Fuse::Input::Pointer_PointerRecord* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__int__Fuse_Input_Pointer_PointerRecord__Uno_Collections_ICollection_Remove(Dictionary2_ValueCollection__int__Fuse_Input_Pointer_PointerRecord* __this, ::app::Fuse::Input::Pointer_PointerRecord* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_ValueCollection__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___uType* Dictionary2_ValueCollection__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___typeof()
{
    static ::uStaticStrong<Dictionary2_ValueCollection__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_ValueCollection__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___uType*)::uAllocClassType(sizeof(Dictionary2_ValueCollection__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___uType), "Uno.Collections.Dictionary2_ValueCollection<int,Uno.Collections.List<Fuse.Input.Pointer_PELHolder>>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_source", offsetof(Dictionary2_ValueCollection__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_, _source));

    type->SetFields(1,
        ::uNewField("_source", NULL, offsetof(Dictionary2_ValueCollection__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_, _source), ::app::Uno::Collections::Dictionary__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___typeof()));

    type->SetFunctions(2,
        ::uNewFunction("get_Count", Dictionary2_ValueCollection__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___get_Count, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("GetEnumerator", Dictionary2_ValueCollection__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___GetEnumerator, 0, false, ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___typeof()));

    ::uRegisterType(type);
    return type;
}

void Dictionary2_ValueCollection__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder____ObjInit(Dictionary2_ValueCollection__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_* __this, ::app::Uno::Collections::Dictionary__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_* source)
{
    __this->_source = source;
}

int Dictionary2_ValueCollection__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___get_Count(Dictionary2_ValueCollection__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_* __this)
{
    return ::uPtr< ::app::Uno::Collections::Dictionary__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_*>(__this->_source)->Count();
}

::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_ Dictionary2_ValueCollection__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___GetEnumerator(Dictionary2_ValueCollection__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_* __this)
{
    return ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___New_1(NULL, __this->_source);
}

Dictionary2_ValueCollection__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_* Dictionary2_ValueCollection__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_* source)
{
    Dictionary2_ValueCollection__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_* inst = (Dictionary2_ValueCollection__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_*)::uAllocObject(sizeof(Dictionary2_ValueCollection__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_), Dictionary2_ValueCollection__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___typeof());
    inst->_ObjInit(source);
    return inst;
}

void Dictionary2_ValueCollection__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___Uno_Collections_ICollection_Add(Dictionary2_ValueCollection__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_* __this, ::app::Uno::Collections::List__Fuse_Input_Pointer_PELHolder* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

void Dictionary2_ValueCollection__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___Uno_Collections_ICollection_Clear(Dictionary2_ValueCollection__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_* __this)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___Uno_Collections_ICollection_Contains(Dictionary2_ValueCollection__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_* __this, ::app::Uno::Collections::List__Fuse_Input_Pointer_PELHolder* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___Uno_Collections_ICollection_Remove(Dictionary2_ValueCollection__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_* __this, ::app::Uno::Collections::List__Fuse_Input_Pointer_PELHolder* item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_ValueCollection__Uno_Content_Fonts_BitmapFont_CharPair__float__uType* Dictionary2_ValueCollection__Uno_Content_Fonts_BitmapFont_CharPair__float__typeof()
{
    static ::uStaticStrong<Dictionary2_ValueCollection__Uno_Content_Fonts_BitmapFont_CharPair__float__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_ValueCollection__Uno_Content_Fonts_BitmapFont_CharPair__float__uType*)::uAllocClassType(sizeof(Dictionary2_ValueCollection__Uno_Content_Fonts_BitmapFont_CharPair__float__uType), "Uno.Collections.Dictionary2_ValueCollection<Uno.Content.Fonts.BitmapFont_CharPair,float>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_source", offsetof(Dictionary2_ValueCollection__Uno_Content_Fonts_BitmapFont_CharPair__float, _source));

    type->SetFields(1,
        ::uNewField("_source", NULL, offsetof(Dictionary2_ValueCollection__Uno_Content_Fonts_BitmapFont_CharPair__float, _source), ::app::Uno::Collections::Dictionary__Uno_Content_Fonts_BitmapFont_CharPair__float__typeof()));

    type->SetFunctions(2,
        ::uNewFunction("get_Count", Dictionary2_ValueCollection__Uno_Content_Fonts_BitmapFont_CharPair__float__get_Count, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("GetEnumerator", Dictionary2_ValueCollection__Uno_Content_Fonts_BitmapFont_CharPair__float__GetEnumerator, 0, false, ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__Uno_Content_Fonts_BitmapFont_CharPair__float__typeof()));

    ::uRegisterType(type);
    return type;
}

void Dictionary2_ValueCollection__Uno_Content_Fonts_BitmapFont_CharPair__float___ObjInit(Dictionary2_ValueCollection__Uno_Content_Fonts_BitmapFont_CharPair__float* __this, ::app::Uno::Collections::Dictionary__Uno_Content_Fonts_BitmapFont_CharPair__float* source)
{
    __this->_source = source;
}

int Dictionary2_ValueCollection__Uno_Content_Fonts_BitmapFont_CharPair__float__get_Count(Dictionary2_ValueCollection__Uno_Content_Fonts_BitmapFont_CharPair__float* __this)
{
    return ::uPtr< ::app::Uno::Collections::Dictionary__Uno_Content_Fonts_BitmapFont_CharPair__float*>(__this->_source)->Count();
}

::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__Uno_Content_Fonts_BitmapFont_CharPair__float Dictionary2_ValueCollection__Uno_Content_Fonts_BitmapFont_CharPair__float__GetEnumerator(Dictionary2_ValueCollection__Uno_Content_Fonts_BitmapFont_CharPair__float* __this)
{
    return ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__Uno_Content_Fonts_BitmapFont_CharPair__float__New_1(NULL, __this->_source);
}

Dictionary2_ValueCollection__Uno_Content_Fonts_BitmapFont_CharPair__float* Dictionary2_ValueCollection__Uno_Content_Fonts_BitmapFont_CharPair__float__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__Uno_Content_Fonts_BitmapFont_CharPair__float* source)
{
    Dictionary2_ValueCollection__Uno_Content_Fonts_BitmapFont_CharPair__float* inst = (Dictionary2_ValueCollection__Uno_Content_Fonts_BitmapFont_CharPair__float*)::uAllocObject(sizeof(Dictionary2_ValueCollection__Uno_Content_Fonts_BitmapFont_CharPair__float), Dictionary2_ValueCollection__Uno_Content_Fonts_BitmapFont_CharPair__float__typeof());
    inst->_ObjInit(source);
    return inst;
}

void Dictionary2_ValueCollection__Uno_Content_Fonts_BitmapFont_CharPair__float__Uno_Collections_ICollection_Add(Dictionary2_ValueCollection__Uno_Content_Fonts_BitmapFont_CharPair__float* __this, float item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

void Dictionary2_ValueCollection__Uno_Content_Fonts_BitmapFont_CharPair__float__Uno_Collections_ICollection_Clear(Dictionary2_ValueCollection__Uno_Content_Fonts_BitmapFont_CharPair__float* __this)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__Uno_Content_Fonts_BitmapFont_CharPair__float__Uno_Collections_ICollection_Contains(Dictionary2_ValueCollection__Uno_Content_Fonts_BitmapFont_CharPair__float* __this, float item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool Dictionary2_ValueCollection__Uno_Content_Fonts_BitmapFont_CharPair__float__Uno_Collections_ICollection_Remove(Dictionary2_ValueCollection__Uno_Content_Fonts_BitmapFont_CharPair__float* __this, float item)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

}}}