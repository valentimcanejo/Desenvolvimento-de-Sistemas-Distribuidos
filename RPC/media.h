/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _MEDIA_H_RPCGEN
#define _MEDIA_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


struct numbers {
	int nota1;
	int nota2;
	int final;
	int media;
};
typedef struct numbers numbers;

#define ADD_PROG 12
#define ADD_VERS 5

#if defined(__STDC__) || defined(__cplusplus)
#define add 5
extern  int * add_5(numbers *, CLIENT *);
extern  int * add_5_svc(numbers *, struct svc_req *);
extern int add_prog_5_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define add 5
extern  int * add_5();
extern  int * add_5_svc();
extern int add_prog_5_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_numbers (XDR *, numbers*);

#else /* K&R C */
extern bool_t xdr_numbers ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_MEDIA_H_RPCGEN */
