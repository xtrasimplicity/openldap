/* $OpenLDAP$ */
/*
 * Copyright 1998-2002 The OpenLDAP Foundation, All Rights Reserved.
 * COPYING RESTRICTIONS APPLY, see COPYRIGHT file
 */
#include "portable.h"

#ifdef HAVE_WINSOCK2
#include <winsock2.h>
#elif HAVE_WINSOCK
#include <winsock.h>
#endif /* HAVE_WINSOCK(2) */

#undef __RETSTR
#define __RETSTR( x ) case x: return #x;

char *ber_pvt_wsa_err2string( int err )
{
	switch( err )
	{
		__RETSTR( WSAEINTR )
		__RETSTR( WSAEBADF )
		__RETSTR( WSAEACCES )
		__RETSTR( WSAEFAULT )
		__RETSTR( WSAEINVAL )
		__RETSTR( WSAEMFILE )
		__RETSTR( WSAEWOULDBLOCK )
		__RETSTR( WSAEINPROGRESS )
		__RETSTR( WSAEALREADY )
		__RETSTR( WSAENOTSOCK )
		__RETSTR( WSAEDESTADDRREQ )
		__RETSTR( WSAEMSGSIZE )
		__RETSTR( WSAEPROTOTYPE )
		__RETSTR( WSAENOPROTOOPT )
		__RETSTR( WSAEPROTONOSUPPORT )
		__RETSTR( WSAESOCKTNOSUPPORT )
		__RETSTR( WSAEOPNOTSUPP )
		__RETSTR( WSAEPFNOSUPPORT )
		__RETSTR( WSAEAFNOSUPPORT )
		__RETSTR( WSAEADDRINUSE )
		__RETSTR( WSAEADDRNOTAVAIL )
		__RETSTR( WSAENETDOWN )
		__RETSTR( WSAENETUNREACH )
		__RETSTR( WSAENETRESET )
		__RETSTR( WSAECONNABORTED )
		__RETSTR( WSAECONNRESET )
		__RETSTR( WSAENOBUFS )
		__RETSTR( WSAEISCONN )
		__RETSTR( WSAENOTCONN )
		__RETSTR( WSAESHUTDOWN )
		__RETSTR( WSAETOOMANYREFS )
		__RETSTR( WSAETIMEDOUT )
		__RETSTR( WSAECONNREFUSED )
		__RETSTR( WSAELOOP )
		__RETSTR( WSAENAMETOOLONG )
		__RETSTR( WSAEHOSTDOWN )
		__RETSTR( WSAEHOSTUNREACH )
		__RETSTR( WSAENOTEMPTY )
		__RETSTR( WSAEPROCLIM )
		__RETSTR( WSAEUSERS )
		__RETSTR( WSAEDQUOT )
		__RETSTR( WSAESTALE )
		__RETSTR( WSAEREMOTE )
		__RETSTR( WSASYSNOTREADY )
		__RETSTR( WSAVERNOTSUPPORTED )
		__RETSTR( WSANOTINITIALISED )
		__RETSTR( WSAEDISCON )

#ifdef HAVE_WINSOCK2
		__RETSTR( WSAENOMORE )
		__RETSTR( WSAECANCELLED )
		__RETSTR( WSAEINVALIDPROCTABLE )
		__RETSTR( WSAEINVALIDPROVIDER )
		__RETSTR( WSASYSCALLFAILURE )
		__RETSTR( WSASERVICE_NOT_FOUND )
		__RETSTR( WSATYPE_NOT_FOUND )
		__RETSTR( WSA_E_NO_MORE )
		__RETSTR( WSA_E_CANCELLED )
		__RETSTR( WSAEREFUSED )
#endif // HAVE_WINSOCK2	

		__RETSTR( WSAHOST_NOT_FOUND )
		__RETSTR( WSATRY_AGAIN )
		__RETSTR( WSANO_RECOVERY )
		__RETSTR( WSANO_DATA )
	}
	return "unknown WSA error";
}