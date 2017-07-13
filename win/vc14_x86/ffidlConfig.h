/* ffidlConfig.h.  Generated from ffidlConfig.h.in by configure.  */
/* ffidlConfig.h.in.  Generated from configure.ac by autoheader.  */

/* Define if building universal (internal helper macro) */
/* #undef AC_APPLE_UNIVERSAL_BUILD */

/* The normal alignment of `char', in bytes. */
#define ALIGNOF_CHAR 1

/* The normal alignment of `double', in bytes. */
#define ALIGNOF_DOUBLE 8

/* The normal alignment of `float', in bytes. */
#define ALIGNOF_FLOAT 4

/* The normal alignment of `int', in bytes. */
#define ALIGNOF_INT 4

/* The normal alignment of `long', in bytes. */
#define ALIGNOF_LONG 4

/* The normal alignment of `long double', in bytes. */
#define ALIGNOF_LONG_DOUBLE 4

/* The normal alignment of `long long', in bytes. */
#define ALIGNOF_LONG_LONG 8

/* The normal alignment of `short', in bytes. */
#define ALIGNOF_SHORT 2

/* The normal alignment of `void *', in bytes. */
#define ALIGNOF_VOID_P 4

/* Build windows export dll */
#define BUILD_Ffidl 1

/* Canonical host name */
#define CANONICAL_HOST "i686-pc-mingw32"

/* Defined when cygwin/mingw does not support EXCEPTION DISPOSITION */
#define EXCEPTION_DISPOSITION int

/* Defined when compiler supports casting to union type. */
#define HAVE_CAST_TO_UNION 1

/* Compiler support for module scope symbols */
/* #undef HAVE_HIDDEN */

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Do we have <limits.h>? */
/* #undef HAVE_LIMITS_H */

/* Define to 1 if the type `long double' works and has more range or precision
   than `double'. */
#define HAVE_LONG_DOUBLE 1

/* Define to 1 if the type `long double' works and has more range or precision
   than `double'. */
#define HAVE_LONG_DOUBLE_WIDER 1

/* Define to 1 if the system has the type `long long'. */
#define HAVE_LONG_LONG 1

/* Define to 1 if you have the `lseek64' function. */
#define HAVE_LSEEK64 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Do we have <net/errno.h>? */
/* #undef HAVE_NET_ERRNO_H */

/* Defined when mingw does not support SEH */
#define HAVE_NO_SEH 1

/* Define to 1 if you have the `open64' function. */
/* #undef HAVE_OPEN64 */

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Is 'struct dirent64' in <sys/types.h>? */
/* #undef HAVE_STRUCT_DIRENT64 */

/* Is 'struct stat64' in <sys/stat.h>? */
/* #undef HAVE_STRUCT_STAT64 */

/* Define to 1 if you have the <sys/param.h> header file. */
/* #undef HAVE_SYS_PARAM_H */

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Is off64_t in <sys/types.h>? */
/* #undef HAVE_TYPE_OFF64_T */

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Defined when cygwin/mingw ignores VOID define in winnt.h */
#define HAVE_WINNT_IGNORE_VOID 1

/* ffidl::stubsymbol can lookup in Tk stubs tables */
#define LOOKUP_TK_STUBS 1

/* No Compiler support for module scope symbols */
#define MODULE_SCOPE extern

/* Do we have <dirent.h>? */
/* #undef NO_DIRENT_H */

/* Do we have <dlfcn.h>? */
/* #undef NO_DLFCN_H */

/* Do we have <errno.h>? */
/* #undef NO_ERRNO_H */

/* Do we have <float.h>? */
/* #undef NO_FLOAT_H */

/* Do we have <limits.h>? */
/* #undef NO_LIMITS_H */

/* Do we have <stdlib.h>? */
/* #undef NO_STDLIB_H */

/* Do we have <string.h>? */
/* #undef NO_STRING_H */

/* Do we have <sys/wait.h>? */
/* #undef NO_SYS_WAIT_H */

/* Do we have <values.h>? */
/* #undef NO_VALUES_H */

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT ""

/* Define to the full name of this package. */
#define PACKAGE_NAME "Ffidl"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "Ffidl 0.7"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "ffidl"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "0.7"

/* The size of `char', as computed by sizeof. */
#define SIZEOF_CHAR 1

/* The size of `double', as computed by sizeof. */
#define SIZEOF_DOUBLE 8

/* The size of `float', as computed by sizeof. */
#define SIZEOF_FLOAT 4

/* The size of `int', as computed by sizeof. */
#define SIZEOF_INT 4

/* The size of `long', as computed by sizeof. */
#define SIZEOF_LONG 4

/* The size of `long double', as computed by sizeof. */
#define SIZEOF_LONG_DOUBLE 12

/* The size of `long long', as computed by sizeof. */
#define SIZEOF_LONG_LONG 8

/* The size of `short', as computed by sizeof. */
#define SIZEOF_SHORT 2

/* The size of `void *', as computed by sizeof. */
#define SIZEOF_VOID_P 4

/* Is this a static build? */
/* #undef STATIC_BUILD */

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Is memory debugging enabled? */
/* #undef TCL_MEM_DEBUG */

/* Are we building with threads enabled? */
#define TCL_THREADS 1

/* Are wide integers to be implemented with C 'long's? */
/* #undef TCL_WIDE_INT_IS_LONG */

/* UNDER_CE version */
/* #undef UNDER_CE */

/* Implement callbacks */
#define USE_CALLBACKS 1

/* Use ffcall for foreign function calls */
/* #undef USE_FFCALL */

/* Use libffi for foreign function calls */
#define USE_LIBFFI 1

/* Use Tcl*Dlopen() API to load code */
/* #undef USE_TCL_DLOPEN */

/* Use Tcl_LoadFile() API to load code */
/* #undef USE_TCL_LOADFILE */

/* Use Tcl stubs */
#define USE_TCL_STUBS 1

/* Do we want to use the threaded memory allocator? */
/* #undef USE_THREAD_ALLOC */

/* Define WORDS_BIGENDIAN to 1 if your processor stores words with the most
   significant byte first (like Motorola and SPARC, unlike Intel). */
#if defined AC_APPLE_UNIVERSAL_BUILD
# if defined __BIG_ENDIAN__
#  define WORDS_BIGENDIAN 1
# endif
#else
# ifndef WORDS_BIGENDIAN
/* #  undef WORDS_BIGENDIAN */
# endif
#endif

/* Add the _ISOC99_SOURCE flag when building */
/* #undef _ISOC99_SOURCE */

/* Add the _LARGEFILE64_SOURCE flag when building */
/* #undef _LARGEFILE64_SOURCE */

/* Add the _LARGEFILE_SOURCE64 flag when building */
/* #undef _LARGEFILE_SOURCE64 */

/* # needed in sys/socket.h Should OS/390 do the right thing with sockets? */
/* #undef _OE_SOCKETS */

/* Do we really want to follow the standard? Yes we do! */
/* #undef _POSIX_PTHREAD_SEMANTICS */

/* Do we want the reentrant OS API? */
/* #undef _REENTRANT */

/* Do we want the thread-safe OS API? */
/* #undef _THREAD_SAFE */

/* _WIN32_WCE version */
/* #undef _WIN32_WCE */

/* Do we want to use the XOPEN network library? */
/* #undef _XOPEN_SOURCE_EXTENDED */

/* Define to 1 if type `char' is unsigned and you are not using gcc.  */
#ifndef __CHAR_UNSIGNED__
/* # undef __CHAR_UNSIGNED__ */
#endif
