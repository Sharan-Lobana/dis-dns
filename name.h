/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _NAME_H_RPCGEN
#define _NAME_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


struct name {
	char content[64];
};
typedef struct name name;

#define MARKSPROG 0x3012225
#define MARKSVERS 1

#if defined(__STDC__) || defined(__cplusplus)
#define NAMEPROC 1
extern  int * nameproc_1(name *, CLIENT *);
extern  int * nameproc_1_svc(name *, struct svc_req *);
extern int marksprog_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define NAMEPROC 1
extern  int * nameproc_1();
extern  int * nameproc_1_svc();
extern int marksprog_1_freeresult ();
#endif /* K&R C */
#define L1N1VERS 2

#if defined(__STDC__) || defined(__cplusplus)
#define L1N1PROC 1
extern  name * l1n1proc_2(name *, CLIENT *);
extern  name * l1n1proc_2_svc(name *, struct svc_req *);
extern int marksprog_2_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define L1N1PROC 1
extern  name * l1n1proc_2();
extern  name * l1n1proc_2_svc();
extern int marksprog_2_freeresult ();
#endif /* K&R C */
#define L1N2VERS 3

#if defined(__STDC__) || defined(__cplusplus)
#define L1N2PROC 1
extern  int * l1n2proc_3(name *, CLIENT *);
extern  int * l1n2proc_3_svc(name *, struct svc_req *);
extern int marksprog_3_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define L1N2PROC 1
extern  int * l1n2proc_3();
extern  int * l1n2proc_3_svc();
extern int marksprog_3_freeresult ();
#endif /* K&R C */
#define L2N1VERS 4

#if defined(__STDC__) || defined(__cplusplus)
#define L2N1PROC 1
extern  int * l2n1proc_4(name *, CLIENT *);
extern  int * l2n1proc_4_svc(name *, struct svc_req *);
extern int marksprog_4_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define L2N1PROC 1
extern  int * l2n1proc_4();
extern  int * l2n1proc_4_svc();
extern int marksprog_4_freeresult ();
#endif /* K&R C */
#define L2N2VERS 5

#if defined(__STDC__) || defined(__cplusplus)
#define L2N2PROC 1
extern  int * l2n2proc_5(name *, CLIENT *);
extern  int * l2n2proc_5_svc(name *, struct svc_req *);
extern int marksprog_5_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define L2N2PROC 1
extern  int * l2n2proc_5();
extern  int * l2n2proc_5_svc();
extern int marksprog_5_freeresult ();
#endif /* K&R C */
#define L2N3VERS 6

#if defined(__STDC__) || defined(__cplusplus)
#define L2N3PROC 1
extern  int * l2n3proc_6(name *, CLIENT *);
extern  int * l2n3proc_6_svc(name *, struct svc_req *);
extern int marksprog_6_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define L2N3PROC 1
extern  int * l2n3proc_6();
extern  int * l2n3proc_6_svc();
extern int marksprog_6_freeresult ();
#endif /* K&R C */
#define L2N4VERS 7

#if defined(__STDC__) || defined(__cplusplus)
#define L2N4PROC 1
extern  int * l2n4proc_7(name *, CLIENT *);
extern  int * l2n4proc_7_svc(name *, struct svc_req *);
extern int marksprog_7_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define L2N4PROC 1
extern  int * l2n4proc_7();
extern  int * l2n4proc_7_svc();
extern int marksprog_7_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_name (XDR *, name*);

#else /* K&R C */
extern bool_t xdr_name ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_NAME_H_RPCGEN */
