/*
	calcserver.c

	Example calculator service in C

	Compilation in C (see samples/calc/calc.h):
	$ soapcpp2 -c calc.h
	$ cc -o calcserver calcserver.c stdsoap2.c soapC.c soapServer.c
	where stdsoap2.c is in the 'gsoap' directory, or use libgsoap:
	$ cc -o calcserver calcserver.c soapC.c soapServer.c -lgsoap

--------------------------------------------------------------------------------
gSOAP XML Web services tools
Copyright (C) 2001-2008, Robert van Engelen, Genivia, Inc. All Rights Reserved.
This software is released under one of the following two licenses:
GPL or Genivia's license for commercial use.
--------------------------------------------------------------------------------
GPL license.

This program is free software; you can redistribute it and/or modify it under
the terms of the GNU General Public License as published by the Free Software
Foundation; either version 2 of the License, or (at your option) any later
version.

This program is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
PARTICULAR PURPOSE. See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License along with
this program; if not, write to the Free Software Foundation, Inc., 59 Temple
Place, Suite 330, Boston, MA 02111-1307 USA

Author contact information:
engelen@genivia.com / engelen@acm.org
--------------------------------------------------------------------------------
A commercial use license is available from Genivia, Inc., contact@genivia.com
--------------------------------------------------------------------------------
*/

#include "soapH.h"
#include "calc.nsmap"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int port = 1234;
char wynik[256];
int flag=0;
int main()
{
  SOAP_SOCKET m;                               /* master socket */
  struct soap *soap = soap_new();               /* new context */
  soap->send_timeout = 5;
  soap->recv_timeout = 30; /* 5 sec socket idle timeout */
                 /* 30 sec message transfer timeout */
  m = soap_bind(soap, NULL, port, 1);         /* backlog=1 for iterative servers, multi-threaded services should use 100 */
  if (soap_valid_socket(m))
  {
    while (soap_valid_socket(soap_accept(soap)))
    {
      soap_serve(soap);   /* serve request */
      soap_destroy(soap); /* delete deserialized objects */
      soap_end(soap);     /* delete heap and temp data */
    }
  }
  soap_print_fault(soap, stderr);
  soap_destroy(soap); /* delete deserialized objects */
  soap_end(soap);     /* delete heap and temp data */
  soap_free(soap);    /* we're done with the context */
  return 0;
}

int ns2__add(struct soap *soap, char *a, char **result)
{ 
    printf("Podane dane: %s",a);

    int i=0;
    int x =0;
    while(a[x] != '\0')
    {
        
        sprintf((char*)(wynik+i),"%02X", a[x]);
        x++;
        i+=2;
    }
    wynik[i+1]='\0';
    printf("w hex: %s\n",wynik);
    flag =1;

  return SOAP_OK;
} 
int ns2__add2(struct soap *soap, char *a, char **result)
{ 
    char pusty[1];
    pusty[0]='\0';
    if(flag==1)
    {
    *result = wynik;
    flag=0;
    }
    else
    {
        
       *result =  pusty;
    }

  return SOAP_OK;
} 

