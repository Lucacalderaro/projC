#ifndef PROJC_GLOBAL_H
#define PROJC_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(PROJC_LIBRARY)
#  define PROJC_EXPORT Q_DECL_EXPORT
#else
#  define PROJC_EXPORT Q_DECL_IMPORT
#endif

#endif // PROJC_GLOBAL_H
