// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\FallbackTextEdit\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{namespace FallbackTextEdit{struct LineCacheLine;}}}}
namespace g{namespace Fuse{namespace Controls{namespace Internal{struct WordWrapInfo;}}}}
namespace g{namespace Fuse{namespace Controls{namespace Internal{struct WrappedLine;}}}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace FallbackTextEdit{

// internal sealed class LineCacheLine :12
// {
uType* LineCacheLine_typeof();
void LineCacheLine__ctor__fn(LineCacheLine* __this, uString* text, uObject* transform);
void LineCacheLine__GetTotalHeight_fn(LineCacheLine* __this, ::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, float* __retval);
void LineCacheLine__GetWrappedLines_fn(LineCacheLine* __this, ::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, uArray** __retval);
void LineCacheLine__InsertChar_fn(LineCacheLine* __this, int* p, uChar* c);
void LineCacheLine__Invalidate_fn(LineCacheLine* __this);
void LineCacheLine__New1_fn(uString* text, uObject* transform, LineCacheLine** __retval);
void LineCacheLine__PosToBounds_fn(LineCacheLine* __this, ::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, int* textAlignment, float* boundsWidth, int* p, ::g::Uno::Float2* __retval);
void LineCacheLine__PosToWrappedLine_fn(LineCacheLine* __this, ::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, int* p, ::g::Fuse::Controls::Internal::WrappedLine** __retval);
void LineCacheLine__get_Text_fn(LineCacheLine* __this, uString** __retval);
void LineCacheLine__set_Text_fn(LineCacheLine* __this, uString* value);
void LineCacheLine__get_Transform_fn(LineCacheLine* __this, uObject** __retval);
void LineCacheLine__set_Transform_fn(LineCacheLine* __this, uObject* value);
void LineCacheLine__get_VisualText_fn(LineCacheLine* __this, uString** __retval);

struct LineCacheLine : uObject
{
    uStrong<uString*> _text;
    uStrong<uObject*> _transform;
    uStrong< ::g::Fuse::Controls::Internal::WordWrapInfo*> _wordWrapInfoCache;
    uStrong<uArray*> _wrappedLinesCache;

    void ctor_(uString* text, uObject* transform);
    float GetTotalHeight(::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo);
    uArray* GetWrappedLines(::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo);
    void InsertChar(int p, uChar c);
    void Invalidate();
    ::g::Uno::Float2 PosToBounds(::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, int textAlignment, float boundsWidth, int p);
    ::g::Fuse::Controls::Internal::WrappedLine* PosToWrappedLine(::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, int p);
    uString* Text();
    void Text(uString* value);
    uObject* Transform();
    void Transform(uObject* value);
    uString* VisualText();
    static LineCacheLine* New1(uString* text, uObject* transform);
};
// }

}}}} // ::g::Fuse::Controls::FallbackTextEdit
