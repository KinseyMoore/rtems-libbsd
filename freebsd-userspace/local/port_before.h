#include <freebsd/bsd.h>

#include <freebsd/sys/_types.h>

/*
 * Some of the code needs to know it is being built inside libc.
 */
#define _LIBC 1

/*
 *  lib/libc/resolv/res_send.c needs this defined.
 */
#define USE_KQUEUE 1

/*
 *  lib/libc/resolv/res_send.c also needs this defined.
 */
#define ISC_SOCKLEN_T   socklen_t

/*
#ifndef _bsd_off_t
#define _bsd_off_t off_t
#endif
*/

#ifndef __ssize_t
#define __ssize_t ssize_t
#endif

/*
 * lib/libc/net/getservent.c needs _ALIGNBYTES and there seems to be no
 * clean way to get it from the FreeBSD kernel code.
 *
 * Duplicated from freebsd/sys/param.h
 */
#ifndef _ALIGNBYTES
#define _ALIGNBYTES     (sizeof(long) - 1)
#endif

