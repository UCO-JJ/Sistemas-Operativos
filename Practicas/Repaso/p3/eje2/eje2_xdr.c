/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "eje2.h"

bool_t
xdr_persona (XDR *xdrs, persona *objp)
{
	register int32_t *buf;

	 if (!xdr_string (xdrs, &objp->nombre, MAXIMO))
		 return FALSE;
	 if (!xdr_string (xdrs, &objp->apellido, MAXIMO))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->edad))
		 return FALSE;
	 if (!xdr_string (xdrs, &objp->provincia, MAXIMO))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_vector_personas (XDR *xdrs, vector_personas *objp)
{
	register int32_t *buf;

	 if (!xdr_array (xdrs, (char **)&objp->vector.vector_val, (u_int *) &objp->vector.vector_len, MAXIMO,
		sizeof (persona), (xdrproc_t) xdr_persona))
		 return FALSE;
	return TRUE;
}
