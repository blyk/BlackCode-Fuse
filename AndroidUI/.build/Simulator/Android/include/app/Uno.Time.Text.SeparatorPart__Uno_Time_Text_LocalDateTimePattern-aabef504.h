// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Time\Text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_TIME_TEXT_SEPARATOR_PART__UNO_TIME_TEXT_LOCAL_DATE_TIME_PATTERN_AABEF504_H__
#define __APP_UNO_TIME_TEXT_SEPARATOR_PART__UNO_TIME_TEXT_LOCAL_DATE_TIME_PATTERN_AABEF504_H__

#include <app/Uno.Time.Text.IPatternPart__Uno_Time_Text_LocalDateTimePattern_-12b203a0.h>
#include <app/Uno.Time.Text.PatternPart__Uno_Time_Text_LocalDateTimePattern_L-d61e0367.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Time { namespace Text { struct LocalDateTimePattern_LocalDateTimeBucket; } } } }

namespace app {
namespace Uno {
namespace Time {
namespace Text {

struct SeparatorPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket;

struct SeparatorPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__uType : ::app::Uno::Time::Text::PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__char__uType
{
};

SeparatorPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__uType* SeparatorPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__typeof();

void SeparatorPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket___ObjInit_1(SeparatorPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket* __this, bool obligatory, bool show, ::uChar separator, int skipNextPartsCountIfThisNotSpecified);
void SeparatorPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket___ObjInit_2(SeparatorPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket* __this, bool obligatory, ::uChar separator, int skipNextPartsCountIfThisNotSpecified);
SeparatorPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket* SeparatorPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__New_1(::uStatic* __this, bool obligatory, bool show, ::uChar separator, int skipNextPartsCountIfThisNotSpecified);
SeparatorPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket* SeparatorPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__New_2(::uStatic* __this, bool obligatory, ::uChar separator, int skipNextPartsCountIfThisNotSpecified);
int SeparatorPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__Read(SeparatorPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket* __this, ::uString* line, int position, ::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket* value);
::uString* SeparatorPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__Write(SeparatorPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket* __this, ::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket* value);

struct SeparatorPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket : ::app::Uno::Time::Text::PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__char
{
    ::uChar _separator;
    bool _show;

    void _ObjInit_1(bool obligatory, bool show, ::uChar separator, int skipNextPartsCountIfThisNotSpecified) { SeparatorPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket___ObjInit_1(this, obligatory, show, separator, skipNextPartsCountIfThisNotSpecified); }
    void _ObjInit_2(bool obligatory, ::uChar separator, int skipNextPartsCountIfThisNotSpecified) { SeparatorPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket___ObjInit_2(this, obligatory, separator, skipNextPartsCountIfThisNotSpecified); }
};

}}}}


#endif