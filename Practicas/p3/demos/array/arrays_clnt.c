/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include <memory.h> /* for memset */
#include "arrays.h"

/* Default timeout can be changed using clnt_control() */
static struct timeval TIMEOUT = { 25, 0 };

respuesta_notas *
obtener_notas_1(indices_notas *argp, CLIENT *clnt)
{
	static respuesta_notas clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, obtener_notas,
		(xdrproc_t) xdr_indices_notas, (caddr_t) argp,
		(xdrproc_t) xdr_respuesta_notas, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}