/* generated by userspace-header-gen.py */
#include <rtems/linkersets.h>
#include "rtems-bsd-tcpdump-data.h"
/* print-isakmp.c */
RTEMS_LINKER_RWSET_CONTENT(bsd_prog_tcpdump, static int ninitiator);
RTEMS_LINKER_RWSET_CONTENT(bsd_prog_tcpdump, static struct cookiecache cookiecache[]);
RTEMS_LINKER_RWSET_CONTENT(bsd_prog_tcpdump, static char const *protoidstr[]);
RTEMS_LINKER_RWSET_CONTENT(bsd_prog_tcpdump, static char const *npstr[]);
RTEMS_LINKER_RWSET_CONTENT(bsd_prog_tcpdump, static u_char const *(*npfunc[])(netdissect_options *, u_char , struct isakmp_gen const *, u_int , u_char const *, uint32_t , uint32_t , uint32_t , int ));
RTEMS_LINKER_RWSET_CONTENT(bsd_prog_tcpdump, static char const *etypestr[]);
RTEMS_LINKER_RWSET_CONTENT(bsd_prog_tcpdump, static char const *ikev1_p_map[]);
RTEMS_LINKER_RWSET_CONTENT(bsd_prog_tcpdump, static char const *ikev2_t_type_map[]);
RTEMS_LINKER_RWSET_CONTENT(bsd_prog_tcpdump, static char const *ah_p_map[]);
RTEMS_LINKER_RWSET_CONTENT(bsd_prog_tcpdump, static char const *prf_p_map[]);
RTEMS_LINKER_RWSET_CONTENT(bsd_prog_tcpdump, static char const *integ_p_map[]);
RTEMS_LINKER_RWSET_CONTENT(bsd_prog_tcpdump, static char const *esn_p_map[]);
RTEMS_LINKER_RWSET_CONTENT(bsd_prog_tcpdump, static char const *dh_p_map[]);
RTEMS_LINKER_RWSET_CONTENT(bsd_prog_tcpdump, static char const *esp_p_map[]);
RTEMS_LINKER_RWSET_CONTENT(bsd_prog_tcpdump, static char const *ipcomp_p_map[]);
