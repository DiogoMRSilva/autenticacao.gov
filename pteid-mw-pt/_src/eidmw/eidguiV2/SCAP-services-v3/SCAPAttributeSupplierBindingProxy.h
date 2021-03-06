/* SCAPAttributeSupplierBindingProxy.h
   Generated by gSOAP 2.8.105 for SCAP-Services.h

gSOAP XML Web services tools
Copyright (C) 2000-2020, Robert van Engelen, Genivia Inc. All Rights Reserved.
The soapcpp2 tool and its generated software are released under the GPL.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
--------------------------------------------------------------------------------
A commercial use license is available from Genivia Inc., contact@genivia.com
--------------------------------------------------------------------------------
*/

#ifndef SCAPAttributeSupplierBindingProxy_H
#define SCAPAttributeSupplierBindingProxy_H
#include "SCAPH.h"

    class SOAP_CMAC AttributeSupplierBindingProxy {
      public:
        /// Context to manage proxy IO and data
        struct soap *soap;
        /// flag indicating that this context is owned by this proxy and should be deleted by the destructor
        bool soap_own;
        /// Endpoint URL of service 'AttributeSupplierBindingProxy' (change as needed)
        const char *soap_endpoint;
        /// Variables globally declared in SCAP-Services.h, if any
        /// Construct a proxy with new managing context
        AttributeSupplierBindingProxy();
        /// Copy constructor
        AttributeSupplierBindingProxy(const AttributeSupplierBindingProxy& rhs);
        /// Construct proxy given a shared managing context
        AttributeSupplierBindingProxy(struct soap*);
        /// Construct proxy given a shared managing context and endpoint URL
        AttributeSupplierBindingProxy(struct soap*, const char *soap_endpoint_url);
        /// Constructor taking an endpoint URL
        AttributeSupplierBindingProxy(const char *soap_endpoint_url);
        /// Constructor taking input and output mode flags for the new managing context
        AttributeSupplierBindingProxy(soap_mode iomode);
        /// Constructor taking endpoint URL and input and output mode flags for the new managing context
        AttributeSupplierBindingProxy(const char *soap_endpoint_url, soap_mode iomode);
        /// Constructor taking input and output mode flags for the new managing context
        AttributeSupplierBindingProxy(soap_mode imode, soap_mode omode);
        /// Destructor deletes deserialized data and its managing context, when the context was allocated by the constructor
        virtual ~AttributeSupplierBindingProxy();
        /// Initializer used by constructors
        virtual void AttributeSupplierBindingProxy_init(soap_mode imode, soap_mode omode);
        /// Return a copy that has a new managing context with the same engine state
        virtual AttributeSupplierBindingProxy *copy();
        /// Copy assignment
        AttributeSupplierBindingProxy& operator=(const AttributeSupplierBindingProxy&);
        /// Delete all deserialized data (uses soap_destroy() and soap_end())
        virtual void destroy();
        /// Delete all deserialized data and reset to default
        virtual void reset();
        /// Disables and removes SOAP Header from message by setting soap->header = NULL
        virtual void soap_noheader();
        /// Add SOAP Header to message
        virtual void soap_header(char *wsa__MessageID, struct wsa__Relationship *wsa__RelatesTo, struct wsa__EndpointReferenceType *wsa__From, struct wsa__EndpointReferenceType *wsa__ReplyTo, struct wsa__EndpointReferenceType *wsa__FaultTo, char *wsa__To, char *wsa__Action);
        /// Get SOAP Header structure (i.e. soap->header, which is NULL when absent)
        virtual ::SOAP_ENV__Header *soap_header();
        /// Get SOAP Fault structure (i.e. soap->fault, which is NULL when absent)
        virtual ::SOAP_ENV__Fault *soap_fault();
        /// Get SOAP Fault subcode QName string (NULL when absent)
        virtual const char *soap_fault_subcode();
        /// Get SOAP Fault string/reason (NULL when absent)
        virtual const char *soap_fault_string();
        /// Get SOAP Fault detail XML string (NULL when absent)
        virtual const char *soap_fault_detail();
        /// Close connection (normally automatic, except for send_X ops)
        virtual int soap_close_socket();
        /// Force close connection (can kill a thread blocked on IO)
        virtual int soap_force_close_socket();
        /// Print fault
        virtual void soap_print_fault(FILE*);
    #ifndef WITH_LEAN
    #ifndef WITH_COMPAT
        /// Print fault to stream
        virtual void soap_stream_fault(std::ostream&);
    #endif
        /// Write fault to buffer
        virtual char *soap_sprint_fault(char *buf, size_t len);
    #endif
        //
        /// Web service synchronous operation 'AttributeSuppliers' with default endpoint and default SOAP Action header, returns SOAP_OK or error code
        virtual int AttributeSuppliers(ns9__AttributeSupplierResponseType &ns9__AttributeSupplierResponse) { return this->AttributeSuppliers(NULL, NULL, ns9__AttributeSupplierResponse); }
        /// Web service synchronous operation 'AttributeSuppliers' to the specified endpoint and SOAP Action header, returns SOAP_OK or error code
        virtual int AttributeSuppliers(const char *soap_endpoint_url, const char *soap_action, ns9__AttributeSupplierResponseType &ns9__AttributeSupplierResponse) { return this->send_AttributeSuppliers(soap_endpoint_url, soap_action) || this->recv_AttributeSuppliers(ns9__AttributeSupplierResponse) ? this->soap->error : SOAP_OK; }
        /// Web service asynchronous operation 'send_AttributeSuppliers' to send a request message to the specified endpoint and SOAP Action header, returns SOAP_OK or error code
        virtual int send_AttributeSuppliers(const char *soap_endpoint_url, const char *soap_action);
        /// Web service asynchronous operation 'recv_AttributeSuppliers' to receive a response message from the connected endpoint, returns SOAP_OK or error code
        virtual int recv_AttributeSuppliers(ns9__AttributeSupplierResponseType &ns9__AttributeSupplierResponse);
        //
        /// Web service synchronous operation 'EntityAttributeSuppliers' with default endpoint and default SOAP Action header, returns SOAP_OK or error code
        virtual int EntityAttributeSuppliers(ns9__AttributeSupplierResponseType &ns9__AttributeSupplierResponse) { return this->EntityAttributeSuppliers(NULL, NULL, ns9__AttributeSupplierResponse); }
        /// Web service synchronous operation 'EntityAttributeSuppliers' to the specified endpoint and SOAP Action header, returns SOAP_OK or error code
        virtual int EntityAttributeSuppliers(const char *soap_endpoint_url, const char *soap_action, ns9__AttributeSupplierResponseType &ns9__AttributeSupplierResponse) { return this->send_EntityAttributeSuppliers(soap_endpoint_url, soap_action) || this->recv_EntityAttributeSuppliers(ns9__AttributeSupplierResponse) ? this->soap->error : SOAP_OK; }
        /// Web service asynchronous operation 'send_EntityAttributeSuppliers' to send a request message to the specified endpoint and SOAP Action header, returns SOAP_OK or error code
        virtual int send_EntityAttributeSuppliers(const char *soap_endpoint_url, const char *soap_action);
        /// Web service asynchronous operation 'recv_EntityAttributeSuppliers' to receive a response message from the connected endpoint, returns SOAP_OK or error code
        virtual int recv_EntityAttributeSuppliers(ns9__AttributeSupplierResponseType &ns9__AttributeSupplierResponse);
    };
#endif
