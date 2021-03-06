// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.18.8\Filters\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Entities.RenderNode.h>
#include <Fuse.Scripting.INameScope.h>
#include <Uno.Float4.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h>
namespace g{namespace Fuse{namespace Entities{namespace Filters{struct Blur;}}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Uno{namespace Graphics{struct IndexBuffer;}}}
namespace g{namespace Uno{namespace Graphics{struct Texture2D;}}}
namespace g{namespace Uno{namespace Graphics{struct VertexBuffer;}}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Entities{
namespace Filters{

// public sealed class Blur :12
// {
::g::Fuse::Entities::RenderNode_type* Blur_typeof();
void Blur__ctor_2_fn(Blur* __this);
void Blur__get_ClearColor_fn(Blur* __this, ::g::Uno::Float4* __retval);
void Blur__set_ClearColor_fn(Blur* __this, ::g::Uno::Float4* value);
void Blur__DirectionalBlur_fn(Blur* __this, ::g::Uno::Graphics::Texture2D* tex, ::g::Uno::Float2* dir);
void Blur__get_Glow_fn(Blur* __this, bool* __retval);
void Blur__set_Glow_fn(Blur* __this, bool* value);
void Blur__init_DrawCalls_fn(Blur* __this);
void Blur__New2_fn(Blur** __retval);
void Blur__OnDraw_fn(Blur* __this, ::g::Fuse::DrawContext* dc);
void Blur__get_Passes_fn(Blur* __this, int* __retval);
void Blur__set_Passes_fn(Blur* __this, int* value);
void Blur__get_Quality_fn(Blur* __this, float* __retval);
void Blur__set_Quality_fn(Blur* __this, float* value);

struct Blur : ::g::Fuse::Entities::RenderNode
{
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_4fa3ba3f;
    int _passes;
    float _quality;
    uStrong< ::g::Uno::Graphics::IndexBuffer*> DirectionalBlur_VertexData_4fa3ba3f_2_5_2;
    uStrong< ::g::Uno::Graphics::VertexBuffer*> DirectionalBlur_VertexData_4fa3ba3f_2_5_3;
    ::g::Uno::Float4 _ClearColor;
    bool _Glow;

    void ctor_2();
    ::g::Uno::Float4 ClearColor();
    void ClearColor(::g::Uno::Float4 value);
    void DirectionalBlur(::g::Uno::Graphics::Texture2D* tex, ::g::Uno::Float2 dir);
    bool Glow();
    void Glow(bool value);
    void init_DrawCalls();
    int Passes();
    void Passes(int value);
    float Quality();
    void Quality(float value);
    static Blur* New2();
};
// }

}}}} // ::g::Fuse::Entities::Filters
