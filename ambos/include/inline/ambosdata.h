/* Automatically generated header (sfdc 1.11)! Do not edit! */

#ifndef _INLINE_AMBOSDATA_H
#define _INLINE_AMBOSDATA_H

#ifndef _SFDC_VARARG_DEFINED
#define _SFDC_VARARG_DEFINED
#ifdef __HAVE_IPTR_ATTR__
typedef APTR _sfdc_vararg __attribute__((iptr));
#else
typedef ULONG _sfdc_vararg;
#endif /* __HAVE_IPTR_ATTR__ */
#endif /* _SFDC_VARARG_DEFINED */

#ifndef __INLINE_MACROS_H
#include <inline/macros.h>
#endif /* !__INLINE_MACROS_H */

#ifndef AMBOSDATA_BASE_NAME
#define AMBOSDATA_BASE_NAME AmBoSDataBase
#endif /* !AMBOSDATA_BASE_NAME */

#define Private() \
      LP0(0x1e, ULONG, Private ,\
      , AMBOSDATA_BASE_NAME)

#define ADataSet(___Tags) \
      LP1(0x24, APTR, ADataSet , struct TagItem *, ___Tags, a1,\
      , AMBOSDATA_BASE_NAME)

#ifndef NO_INLINE_STDARG
#define ADataSetTags(___Tags, ...) \
    ({_sfdc_vararg _tags[] = { ___Tags, __VA_ARGS__ }; ADataSet((struct TagItem *) _tags); })
#endif /* !NO_INLINE_STDARG */

#define AGetAttr(___Object, ___Tags) \
      LP2(0x2a, APTR, AGetAttr , APTR, ___Object, a1, struct TagItem *, ___Tags, a2,\
      , AMBOSDATA_BASE_NAME)

#ifndef NO_INLINE_STDARG
#define AGetAttrTags(___Object, ___Tags, ...) \
    ({_sfdc_vararg _tags[] = { ___Tags, __VA_ARGS__ }; AGetAttr((___Object), (struct TagItem *) _tags); })
#endif /* !NO_INLINE_STDARG */

#define ASetAttr(___Object, ___Tags) \
      LP2(0x30, APTR, ASetAttr , APTR, ___Object, a1, struct TagItem *, ___Tags, a2,\
      , AMBOSDATA_BASE_NAME)

#ifndef NO_INLINE_STDARG
#define ASetAttrTags(___Object, ___Tags, ...) \
    ({_sfdc_vararg _tags[] = { ___Tags, __VA_ARGS__ }; ASetAttr((___Object), (struct TagItem *) _tags); })
#endif /* !NO_INLINE_STDARG */

#endif /* !_INLINE_AMBOSDATA_H */
