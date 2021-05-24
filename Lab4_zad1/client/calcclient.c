/*
	calcclient.c

	Example calculator service client in C

	Compilation in C (see samples/calc/calc.h):
	$ soapcpp2 -c calc.h
	$ cc -o calcclient calcclient.c stdsoap2.c soapC.c soapClient.c
	where stdsoap2.c is in the 'gsoap' directory, or use libgsoap:
	$ cc -o calcclient calcclient.c soapC.c soapClient.c -lgsoap

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

const char server[] = "http://localhost:1234";
/* = "http://localhost:8080"; to test against samples/webserver */

int main(int argc, char **argv)
{ 
    if (argc < 3)
  {
    printf("Podaj dwie liczby przy uruchomieniu\n");
    exit(1);
  }
    //struct soap soap;
  double a, b, result;
  struct soap *soap = soap_new1(SOAP_XML_INDENT);
  //soap_init(&soap);//, SOAP_XML_INDENT);

  //printf("Podaj dwie liczby: \n");
  a = strtod(argv[1], NULL);
  b = strtod(argv[2], NULL);
  
  printf("Podane liczby: %f %f\n",a,b);
  soap_call_ns2__add(soap, "http://localhost:1234", "", a, b, &result);


  if (soap->error)
  { soap_print_fault(soap, stderr);
    exit(1);
  }
  else
    printf("Wynik = %g\n", result);
  soap_destroy(soap);
  soap_end(soap);
  soap_done(soap);
  return 0;
}
