/* soapStub.h
   Generated by gSOAP 2.8.35 for calc.h

gSOAP XML Web services tools
Copyright (C) 2000-2016, Robert van Engelen, Genivia Inc. All Rights Reserved.
The soapcpp2 tool and its generated software are released under the GPL.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
--------------------------------------------------------------------------------
A commercial use license is available from Genivia Inc., contact@genivia.com
--------------------------------------------------------------------------------
*/

#define SOAP_NAMESPACE_OF_ns2	"urn:calc"

#ifndef soapStub_H
#define soapStub_H
#include "stdsoap2.h"
#if GSOAP_VERSION != 20835
# error "GSOAP VERSION 20835 MISMATCH IN GENERATED CODE VERSUS LIBRARY CODE: PLEASE REINSTALL PACKAGE"
#endif

#ifdef __cplusplus
extern "C" {
#endif

/******************************************************************************\
 *                                                                            *
 * Types with Custom Serializers                                              *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Structs and Unions                                                         *
 *                                                                            *
\******************************************************************************/

struct ns2__addResponse;	/* calc.h:280 */
struct ns2__add;	/* calc.h:280 */
struct ns2__add2Response;	/* calc.h:336 */
struct ns2__add2;	/* calc.h:336 */

/* calc.h:280 */
#ifndef SOAP_TYPE_ns2__addResponse
#define SOAP_TYPE_ns2__addResponse (9)
/* complex XSD type 'ns2:addResponse': */
struct ns2__addResponse {
        /** Optional element 'result' of XSD type 'xsd:string' */
        char **result;
};
#endif

/* calc.h:280 */
#ifndef SOAP_TYPE_ns2__add
#define SOAP_TYPE_ns2__add (10)
/* complex XSD type 'ns2:add': */
struct ns2__add {
        /** Optional element 'a' of XSD type 'xsd:string' */
        char *a;
};
#endif

/* calc.h:336 */
#ifndef SOAP_TYPE_ns2__add2Response
#define SOAP_TYPE_ns2__add2Response (12)
/* complex XSD type 'ns2:add2Response': */
struct ns2__add2Response {
        /** Optional element 'result' of XSD type 'xsd:string' */
        char **result;
};
#endif

/* calc.h:336 */
#ifndef SOAP_TYPE_ns2__add2
#define SOAP_TYPE_ns2__add2 (13)
/* complex XSD type 'ns2:add2': */
struct ns2__add2 {
        /** Optional element 'a' of XSD type 'xsd:string' */
        char *a;
};
#endif

/* calc.h:397 */
#ifndef WITH_NOGLOBAL
#ifndef SOAP_TYPE_SOAP_ENV__Header
#define SOAP_TYPE_SOAP_ENV__Header (14)
/* SOAP_ENV__Header: */
struct SOAP_ENV__Header {
#ifdef WITH_NOEMPTYSTRUCT
	char dummy;	/* empty struct is a GNU extension */
#endif
};
#endif
#endif

/* calc.h:397 */
#ifndef WITH_NOGLOBAL
#ifndef SOAP_TYPE_SOAP_ENV__Code
#define SOAP_TYPE_SOAP_ENV__Code (15)
/* Type SOAP_ENV__Code is a recursive data type, (in)directly referencing itself through its (base or derived class) members */
/* SOAP_ENV__Code: */
struct SOAP_ENV__Code {
        /** Optional element 'SOAP-ENV:Value' of XSD type 'xsd:QName' */
        char *SOAP_ENV__Value;
        /** Optional element 'SOAP-ENV:Subcode' of XSD type 'SOAP-ENV:Code' */
        struct SOAP_ENV__Code *SOAP_ENV__Subcode;
};
#endif
#endif

/* calc.h:397 */
#ifndef WITH_NOGLOBAL
#ifndef SOAP_TYPE_SOAP_ENV__Detail
#define SOAP_TYPE_SOAP_ENV__Detail (17)
/* SOAP_ENV__Detail: */
struct SOAP_ENV__Detail {
        char *__any;
        /** Any type of element 'fault' assigned to fault with its SOAP_TYPE_T assigned to __type */
        /** Do not create a cyclic data structure throught this member unless SOAP encoding or SOAP_XML_GRAPH are used for id-ref serialization */
        int __type;
        void *fault;
};
#endif
#endif

/* calc.h:397 */
#ifndef WITH_NOGLOBAL
#ifndef SOAP_TYPE_SOAP_ENV__Reason
#define SOAP_TYPE_SOAP_ENV__Reason (20)
/* SOAP_ENV__Reason: */
struct SOAP_ENV__Reason {
        /** Optional element 'SOAP-ENV:Text' of XSD type 'xsd:string' */
        char *SOAP_ENV__Text;
};
#endif
#endif

/* calc.h:397 */
#ifndef WITH_NOGLOBAL
#ifndef SOAP_TYPE_SOAP_ENV__Fault
#define SOAP_TYPE_SOAP_ENV__Fault (21)
/* SOAP_ENV__Fault: */
struct SOAP_ENV__Fault {
        /** Optional element 'faultcode' of XSD type 'xsd:QName' */
        char *faultcode;
        /** Optional element 'faultstring' of XSD type 'xsd:string' */
        char *faultstring;
        /** Optional element 'faultactor' of XSD type 'xsd:string' */
        char *faultactor;
        /** Optional element 'detail' of XSD type 'SOAP-ENV:Detail' */
        struct SOAP_ENV__Detail *detail;
        /** Optional element 'SOAP-ENV:Code' of XSD type 'SOAP-ENV:Code' */
        struct SOAP_ENV__Code *SOAP_ENV__Code;
        /** Optional element 'SOAP-ENV:Reason' of XSD type 'SOAP-ENV:Reason' */
        struct SOAP_ENV__Reason *SOAP_ENV__Reason;
        /** Optional element 'SOAP-ENV:Node' of XSD type 'xsd:string' */
        char *SOAP_ENV__Node;
        /** Optional element 'SOAP-ENV:Role' of XSD type 'xsd:string' */
        char *SOAP_ENV__Role;
        /** Optional element 'SOAP-ENV:Detail' of XSD type 'SOAP-ENV:Detail' */
        struct SOAP_ENV__Detail *SOAP_ENV__Detail;
};
#endif
#endif

/******************************************************************************\
 *                                                                            *
 * Typedefs                                                                   *
 *                                                                            *
\******************************************************************************/


/* calc.h:121 */
#ifndef SOAP_TYPE__QName
#define SOAP_TYPE__QName (5)
typedef char *_QName;
#endif

/* calc.h:121 */
#ifndef SOAP_TYPE__XML
#define SOAP_TYPE__XML (6)
typedef char *_XML;
#endif

/******************************************************************************\
 *                                                                            *
 * Serializable Types                                                         *
 *                                                                            *
\******************************************************************************/


/* char has binding name 'byte' for type 'xsd:byte' */
#ifndef SOAP_TYPE_byte
#define SOAP_TYPE_byte (3)
#endif

/* int has binding name 'int' for type 'xsd:int' */
#ifndef SOAP_TYPE_int
#define SOAP_TYPE_int (1)
#endif

/* struct SOAP_ENV__Fault has binding name 'SOAP_ENV__Fault' for type '' */
#ifndef SOAP_TYPE_SOAP_ENV__Fault
#define SOAP_TYPE_SOAP_ENV__Fault (21)
#endif

/* struct SOAP_ENV__Reason has binding name 'SOAP_ENV__Reason' for type '' */
#ifndef SOAP_TYPE_SOAP_ENV__Reason
#define SOAP_TYPE_SOAP_ENV__Reason (20)
#endif

/* struct SOAP_ENV__Detail has binding name 'SOAP_ENV__Detail' for type '' */
#ifndef SOAP_TYPE_SOAP_ENV__Detail
#define SOAP_TYPE_SOAP_ENV__Detail (17)
#endif

/* struct SOAP_ENV__Code has binding name 'SOAP_ENV__Code' for type '' */
#ifndef SOAP_TYPE_SOAP_ENV__Code
#define SOAP_TYPE_SOAP_ENV__Code (15)
#endif

/* struct SOAP_ENV__Header has binding name 'SOAP_ENV__Header' for type '' */
#ifndef SOAP_TYPE_SOAP_ENV__Header
#define SOAP_TYPE_SOAP_ENV__Header (14)
#endif

/* struct ns2__add2 has binding name 'ns2__add2' for type 'ns2:add2' */
#ifndef SOAP_TYPE_ns2__add2
#define SOAP_TYPE_ns2__add2 (13)
#endif

/* struct ns2__add2Response has binding name 'ns2__add2Response' for type 'ns2:add2Response' */
#ifndef SOAP_TYPE_ns2__add2Response
#define SOAP_TYPE_ns2__add2Response (12)
#endif

/* struct ns2__add has binding name 'ns2__add' for type 'ns2:add' */
#ifndef SOAP_TYPE_ns2__add
#define SOAP_TYPE_ns2__add (10)
#endif

/* struct ns2__addResponse has binding name 'ns2__addResponse' for type 'ns2:addResponse' */
#ifndef SOAP_TYPE_ns2__addResponse
#define SOAP_TYPE_ns2__addResponse (9)
#endif

/* struct SOAP_ENV__Reason * has binding name 'PointerToSOAP_ENV__Reason' for type '' */
#ifndef SOAP_TYPE_PointerToSOAP_ENV__Reason
#define SOAP_TYPE_PointerToSOAP_ENV__Reason (23)
#endif

/* struct SOAP_ENV__Detail * has binding name 'PointerToSOAP_ENV__Detail' for type '' */
#ifndef SOAP_TYPE_PointerToSOAP_ENV__Detail
#define SOAP_TYPE_PointerToSOAP_ENV__Detail (22)
#endif

/* struct SOAP_ENV__Code * has binding name 'PointerToSOAP_ENV__Code' for type '' */
#ifndef SOAP_TYPE_PointerToSOAP_ENV__Code
#define SOAP_TYPE_PointerToSOAP_ENV__Code (16)
#endif

/* char ** has binding name 'PointerTostring' for type 'xsd:string' */
#ifndef SOAP_TYPE_PointerTostring
#define SOAP_TYPE_PointerTostring (7)
#endif

/* _XML has binding name '_XML' for type '' */
#ifndef SOAP_TYPE__XML
#define SOAP_TYPE__XML (6)
#endif

/* _QName has binding name '_QName' for type 'xsd:QName' */
#ifndef SOAP_TYPE__QName
#define SOAP_TYPE__QName (5)
#endif

/* char * has binding name 'string' for type 'xsd:string' */
#ifndef SOAP_TYPE_string
#define SOAP_TYPE_string (4)
#endif

/******************************************************************************\
 *                                                                            *
 * Externals                                                                  *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Server-Side Operations                                                     *
 *                                                                            *
\******************************************************************************/

    /** Web service operation 'ns2__add' (returns SOAP_OK or error code) */
    SOAP_FMAC5 int SOAP_FMAC6 ns2__add(struct soap*, char *a, char **result);
    /** Web service operation 'ns2__add2' (returns SOAP_OK or error code) */
    SOAP_FMAC5 int SOAP_FMAC6 ns2__add2(struct soap*, char *a, char **result);

/******************************************************************************\
 *                                                                            *
 * Server-Side Skeletons to Invoke Service Operations                         *
 *                                                                            *
\******************************************************************************/

SOAP_FMAC5 int SOAP_FMAC6 soap_serve(struct soap*);

SOAP_FMAC5 int SOAP_FMAC6 soap_serve_request(struct soap*);

SOAP_FMAC5 int SOAP_FMAC6 soap_serve_ns2__add(struct soap*);

SOAP_FMAC5 int SOAP_FMAC6 soap_serve_ns2__add2(struct soap*);

#ifdef __cplusplus
}
#endif

#endif

/* End of soapStub.h */
