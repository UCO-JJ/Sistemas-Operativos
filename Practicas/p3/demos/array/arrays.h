/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _ARRAYS_H_RPCGEN
#define _ARRAYS_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif

#define MAXIMO 10

struct indices_notas {
	struct {
		u_int indices_len;
		int *indices_val;
	} indices;
};
typedef struct indices_notas indices_notas;

struct respuesta_notas {
	struct {
		u_int notas_len;
		float *notas_val;
	} notas;
};
typedef struct respuesta_notas respuesta_notas;

#define ARRAYS 0x30000003
#define ARRAYS_VER 1

#if defined(__STDC__) || defined(__cplusplus)
#define obtener_notas 1
extern  respuesta_notas * obtener_notas_1(indices_notas *, CLIENT *);
extern  respuesta_notas * obtener_notas_1_svc(indices_notas *, struct svc_req *);
extern int arrays_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define obtener_notas 1
extern  respuesta_notas * obtener_notas_1();
extern  respuesta_notas * obtener_notas_1_svc();
extern int arrays_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_indices_notas (XDR *, indices_notas*);
extern  bool_t xdr_respuesta_notas (XDR *, respuesta_notas*);

#else /* K&R C */
extern bool_t xdr_indices_notas ();
extern bool_t xdr_respuesta_notas ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_ARRAYS_H_RPCGEN */