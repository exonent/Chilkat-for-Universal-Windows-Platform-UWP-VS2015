// CkRestW.h: interface for the CkRestW class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat v9.5.0

#ifndef _CkRestW_H
#define _CkRestW_H
	
#include "chilkatDefs.h"

#include "CkString.h"
#include "CkClassWithCallbacksW.h"

class CkTaskW;
class CkByteData;
class CkStreamW;
class CkUrlW;
class CkAuthAwsW;
class CkAuthAzureADW;
class CkAuthAzureStorageW;
class CkAuthGoogleW;
class CkOAuth1W;
class CkSocketW;
class CkBaseProgressW;



#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif
 

// CLASS: CkRestW
class CK_VISIBLE_PUBLIC CkRestW  : public CkClassWithCallbacksW
{
    private:
	bool m_cbOwned;

	// Don't allow assignment or copying these objects.
	CkRestW(const CkRestW &);
	CkRestW &operator=(const CkRestW &);

    public:
	CkRestW(void);
	virtual ~CkRestW(void);

	static CkRestW *createNew(void);
	

	CkRestW(bool bCallbackOwned);
	static CkRestW *createNew(bool bCallbackOwned);

	
	void CK_VISIBLE_PRIVATE inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	CkBaseProgressW *get_EventCallbackObject(void) const;
	void put_EventCallbackObject(CkBaseProgressW *progress);


	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	// The value of the Authorization HTTP request header (if needed).
	void get_Authorization(CkString &str);
	// The value of the Authorization HTTP request header (if needed).
	const wchar_t *authorization(void);
	// The value of the Authorization HTTP request header (if needed).
	void put_Authorization(const wchar_t *newVal);

	// This property is only valid in programming environment and languages that allow
	// for event callbacks.
	// 
	// Specifies the time interval in milliseconds between AbortCheck events. A value
	// of 0 (the default) indicate that no AbortCheck events will fire. Any REST method
	// can be aborted via the AbortCheck event.
	// 
	int get_HeartbeatMs(void);
	// This property is only valid in programming environment and languages that allow
	// for event callbacks.
	// 
	// Specifies the time interval in milliseconds between AbortCheck events. A value
	// of 0 (the default) indicate that no AbortCheck events will fire. Any REST method
	// can be aborted via the AbortCheck event.
	// 
	void put_HeartbeatMs(int newVal);

	// The value of the Host HTTP request header.
	void get_Host(CkString &str);
	// The value of the Host HTTP request header.
	const wchar_t *host(void);
	// The value of the Host HTTP request header.
	void put_Host(const wchar_t *newVal);

	// The maximum amount of time to wait for additional incoming data when receiving,
	// or the max time to wait to send additional data. The default value is 30000 (30
	// seconds). This is not an overall max timeout. Rather, it is the maximum time to
	// wait when receiving or sending has halted.
	int get_IdleTimeoutMs(void);
	// The maximum amount of time to wait for additional incoming data when receiving,
	// or the max time to wait to send additional data. The default value is 30000 (30
	// seconds). This is not an overall max timeout. Rather, it is the maximum time to
	// wait when receiving or sending has halted.
	void put_IdleTimeoutMs(int newVal);

	// The full MIME header (not including the HTTP start line which contains the
	// status code and status text), of the last request sent.
	void get_LastRequestHeader(CkString &str);
	// The full MIME header (not including the HTTP start line which contains the
	// status code and status text), of the last request sent.
	const wchar_t *lastRequestHeader(void);

	// The full start line of the last request sent. (The start line begins with the
	// HTTP verb, such as GET, POST, etc., is followed by the URI path, and ends with
	// the HTTP version.)
	void get_LastRequestStartLine(CkString &str);
	// The full start line of the last request sent. (The start line begins with the
	// HTTP verb, such as GET, POST, etc., is followed by the URI path, and ends with
	// the HTTP version.)
	const wchar_t *lastRequestStartLine(void);

	// The number of response header fields. The first response header field is at
	// index 0.
	int get_NumResponseHeaders(void);

	// Only used for multipart requests. Selects the target MIME part for calls to
	// AddHeader, RemoveHeader, SetMultipartBodyBinary, SetMultipartBodyString,
	// SetMultipartBodyStream, etc. The default is an empty string and indicates the
	// top-level header. A string value of "1" would indicate the 1st sub-part in a
	// multipart request. A string value of "1.2" would indicate the 2nd sub-part under
	// the 1st sub-part.
	// 
	// It is unlikely you'll ever encounter the need for nested multipart requests
	// (i.e. part selectors such as "1.2") Also, most REST requests are NOT multipart,
	// and therefore this feature is rarely used. An example of a multipart REST
	// request would be for a Google Drive upload, where the top-level Content-Type is
	// multipart/related, the1st sub-part contains the JSON meta-data, and the 2nd
	// sub-part contains the file data.
	// 
	void get_PartSelector(CkString &str);
	// Only used for multipart requests. Selects the target MIME part for calls to
	// AddHeader, RemoveHeader, SetMultipartBodyBinary, SetMultipartBodyString,
	// SetMultipartBodyStream, etc. The default is an empty string and indicates the
	// top-level header. A string value of "1" would indicate the 1st sub-part in a
	// multipart request. A string value of "1.2" would indicate the 2nd sub-part under
	// the 1st sub-part.
	// 
	// It is unlikely you'll ever encounter the need for nested multipart requests
	// (i.e. part selectors such as "1.2") Also, most REST requests are NOT multipart,
	// and therefore this feature is rarely used. An example of a multipart REST
	// request would be for a Google Drive upload, where the top-level Content-Type is
	// multipart/related, the1st sub-part contains the JSON meta-data, and the 2nd
	// sub-part contains the file data.
	// 
	const wchar_t *partSelector(void);
	// Only used for multipart requests. Selects the target MIME part for calls to
	// AddHeader, RemoveHeader, SetMultipartBodyBinary, SetMultipartBodyString,
	// SetMultipartBodyStream, etc. The default is an empty string and indicates the
	// top-level header. A string value of "1" would indicate the 1st sub-part in a
	// multipart request. A string value of "1.2" would indicate the 2nd sub-part under
	// the 1st sub-part.
	// 
	// It is unlikely you'll ever encounter the need for nested multipart requests
	// (i.e. part selectors such as "1.2") Also, most REST requests are NOT multipart,
	// and therefore this feature is rarely used. An example of a multipart REST
	// request would be for a Google Drive upload, where the top-level Content-Type is
	// multipart/related, the1st sub-part contains the JSON meta-data, and the 2nd
	// sub-part contains the file data.
	// 
	void put_PartSelector(const wchar_t *newVal);

	// The full response MIME header (not including the HTTP start line which contains
	// the status code and status text).
	void get_ResponseHeader(CkString &str);
	// The full response MIME header (not including the HTTP start line which contains
	// the status code and status text).
	const wchar_t *responseHeader(void);

	// The response status code.
	int get_ResponseStatusCode(void);

	// The status message corresponding to the response status code.
	void get_ResponseStatusText(CkString &str);
	// The status message corresponding to the response status code.
	const wchar_t *responseStatusText(void);

	// If true, then methods that upload data are sent non-chunked if possible. For
	// example, if the FullRequestStream method is called where the stream is a file
	// stream, then the size of the content is known and the HTTP request will be sent
	// using a Content-Length header instead of using a Transfer-Encoding: chunked
	// upload. If false, then the chunked transfer encoding is used. The default
	// value of this property is true.
	bool get_StreamNonChunked(void);
	// If true, then methods that upload data are sent non-chunked if possible. For
	// example, if the FullRequestStream method is called where the stream is a file
	// stream, then the size of the content is known and the HTTP request will be sent
	// using a Content-Length header instead of using a Transfer-Encoding: chunked
	// upload. If false, then the chunked transfer encoding is used. The default
	// value of this property is true.
	void put_StreamNonChunked(bool newVal);

	// If the Connect method fails, this property can be checked to determine the
	// reason for failure.
	// 
	// Possible values are:
	// 0 = success
	// 
	// Normal (non-SSL) sockets:
	// 1 = empty hostname
	// 2 = DNS lookup failed
	// 3 = DNS timeout
	// 4 = Aborted by application.
	// 5 = Internal failure.
	// 6 = Connect Timed Out
	// 7 = Connect Rejected (or failed for some other reason)
	// 
	// SSL/TLS:
	// 100 = TLS internal error.
	// 101 = Failed to send client hello.
	// 102 = Unexpected handshake message.
	// 103 = Failed to read server hello.
	// 104 = No server certificate.
	// 105 = Unexpected TLS protocol version.
	// 106 = Server certificate verify failed (the server certificate is expired or the cert's signature verification failed).
	// 107 = Unacceptable TLS protocol version.
	// 109 = Failed to read handshake messages.
	// 110 = Failed to send client certificate handshake message.
	// 111 = Failed to send client key exchange handshake message.
	// 112 = Client certificate's private key not accessible.
	// 113 = Failed to send client cert verify handshake message.
	// 114 = Failed to send change cipher spec handshake message.
	// 115 = Failed to send finished handshake message.
	// 116 = Server's Finished message is invalid.
	// 
	int get_ConnectFailReason(void);

	// This property only applies to the FullRequest* methods, which are methods that
	// both send an HTTP request and receive the response. (It also only applies to
	// programming languages that support event callbacks.) It determines whether
	// percentage completion is tracked for the sending of the HTTP request, or for the
	// downloading the HTTP response. The default value is false, which is to measure
	// the percent completion when receiving the response.
	// 
	// For example: If the REST request is to download a file, then this property
	// should remain at the default value of false. If the REST request is to upload
	// a file (using a Full* method), then set this property to true. Also note if a
	// server sends an HTTP response in the chunked encoding, it is not possible to
	// measure percent completion because the HTTP client has no way of knowing the
	// total size of the HTTP response.
	// 
	bool get_PercentDoneOnSend(void);
	// This property only applies to the FullRequest* methods, which are methods that
	// both send an HTTP request and receive the response. (It also only applies to
	// programming languages that support event callbacks.) It determines whether
	// percentage completion is tracked for the sending of the HTTP request, or for the
	// downloading the HTTP response. The default value is false, which is to measure
	// the percent completion when receiving the response.
	// 
	// For example: If the REST request is to download a file, then this property
	// should remain at the default value of false. If the REST request is to upload
	// a file (using a Full* method), then set this property to true. Also note if a
	// server sends an HTTP response in the chunked encoding, it is not possible to
	// measure percent completion because the HTTP client has no way of knowing the
	// total size of the HTTP response.
	// 
	void put_PercentDoneOnSend(bool newVal);



	// ----------------------
	// Methods
	// ----------------------
	// Adds an HTTP request header. If the header field already exists, then it is
	// replaced.
	bool AddHeader(const wchar_t *name, const wchar_t *value);

	// Adds a query parameter. If the query parameter already exists, then it is
	// replaced.
	bool AddQueryParam(const wchar_t *name, const wchar_t *value);

	// Adds the query parameters from the ARG1. The ARG1 is a query string of the
	// format field1=value1&field2=value2&field3=value3... where each value is URL
	// encoded.
	bool AddQueryParams(const wchar_t *queryString);

	// Removes all HTTP request headers.
	bool ClearAllHeaders(void);

	// Clears all query parameters.
	bool ClearAllQueryParams(void);

	// Clears the response body stream set by calling SetResponseBodyStream.
	void ClearResponseBodyStream(void);

	// Establishes an initial connection to a REST server. The ARG1 can be a domain
	// name or an IP address. Both IPv4 and IPv6 addresses are supported. The ARG2 is
	// the port, which is typically 80 or 443. If SSL/TLS is required, then ARG3 should
	// be set to true. The ARG4 indicates whether connection should automatically be
	// established as needed for subsequent REST requests.
	// 
	// Note: This method is for simple connections that do not require any proxies
	// (HTTP or SOCKS), or SSH tunneling. If a proxy, SSH tunnel, or any other advanced
	// socket feature is required, the Chilkat Socket API can be used to establish the
	// connection. The UseConnection method can then be called to use the
	// pre-established socket connection.
	// 
	bool Connect(const wchar_t *hostname, int port, bool tls, bool autoReconnect);

	// Creates an asynchronous task to call the Connect method with the arguments
	// provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *ConnectAsync(const wchar_t *hostname, int port, bool tls, bool autoReconnect);

	// Closes the connection with the HTTP server if one is open. This method can be
	// called to ensure the connection is closed. The ARG1 is the maximum time in
	// milliseconds to wait for a clean close. If the connection is through an SSH
	// tunnel, this closes the logical channel within the SSH tunnel, and not the
	// connection with the SSH server itself.
	bool Disconnect(int maxWaitMs);

	// Creates an asynchronous task to call the Disconnect method with the arguments
	// provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *DisconnectAsync(int maxWaitMs);

	// Sends a complete REST request (header + body) and receives the full response. It
	// is assumed that the request body is binary, and the response body is a string
	// (such as JSON or XML). The response body is returned.
	// 
	// This method is the equivalent of making the following calls in sequence:
	// SendReqBinaryBody, ReadResponseHeader, ReadRespBodyString.
	// 
	bool FullRequestBinary(const wchar_t *httpVerb, const wchar_t *uriPath, CkByteData &bodyBytes, CkString &outStr);
	// Sends a complete REST request (header + body) and receives the full response. It
	// is assumed that the request body is binary, and the response body is a string
	// (such as JSON or XML). The response body is returned.
	// 
	// This method is the equivalent of making the following calls in sequence:
	// SendReqBinaryBody, ReadResponseHeader, ReadRespBodyString.
	// 
	const wchar_t *fullRequestBinary(const wchar_t *httpVerb, const wchar_t *uriPath, CkByteData &bodyBytes);

	// Creates an asynchronous task to call the FullRequestBinary method with the
	// arguments provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *FullRequestBinaryAsync(const wchar_t *httpVerb, const wchar_t *uriPath, CkByteData &bodyBytes);

	// Sends a complete application/x-www-form-urlencoded HTTP request and receives the
	// full response. The request body is composed of the URL encoded query params. It
	// is assumed that the response body is a string (such as JSON or XML). The
	// response body is returned.
	// 
	// This method is the equivalent of making the following calls in sequence:
	// SendReqFormUrlEncoded, ReadResponseHeader, ReadRespBodyString.
	// 
	bool FullRequestFormUrlEncoded(const wchar_t *httpVerb, const wchar_t *uriPath, CkString &outStr);
	// Sends a complete application/x-www-form-urlencoded HTTP request and receives the
	// full response. The request body is composed of the URL encoded query params. It
	// is assumed that the response body is a string (such as JSON or XML). The
	// response body is returned.
	// 
	// This method is the equivalent of making the following calls in sequence:
	// SendReqFormUrlEncoded, ReadResponseHeader, ReadRespBodyString.
	// 
	const wchar_t *fullRequestFormUrlEncoded(const wchar_t *httpVerb, const wchar_t *uriPath);

	// Creates an asynchronous task to call the FullRequestFormUrlEncoded method with
	// the arguments provided. (Async methods are available starting in Chilkat
	// v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *FullRequestFormUrlEncodedAsync(const wchar_t *httpVerb, const wchar_t *uriPath);

	// Sends a complete multipart REST request (header + multipart body) and receives
	// the full response. It is assumed that the response body is a string (such as
	// JSON or XML). The response body is returned.
	// 
	// This method is the equivalent of making the following calls in sequence:
	// SendReqMultipart, ReadResponseHeader, ReadRespBodyString.
	// 
	bool FullRequestMultipart(const wchar_t *httpVerb, const wchar_t *uriPath, CkString &outStr);
	// Sends a complete multipart REST request (header + multipart body) and receives
	// the full response. It is assumed that the response body is a string (such as
	// JSON or XML). The response body is returned.
	// 
	// This method is the equivalent of making the following calls in sequence:
	// SendReqMultipart, ReadResponseHeader, ReadRespBodyString.
	// 
	const wchar_t *fullRequestMultipart(const wchar_t *httpVerb, const wchar_t *uriPath);

	// Creates an asynchronous task to call the FullRequestMultipart method with the
	// arguments provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *FullRequestMultipartAsync(const wchar_t *httpVerb, const wchar_t *uriPath);

	// Sends a complete REST request and receives the full response. It is assumed that
	// the response body is a string (such as JSON or XML). The response body is
	// returned.
	// 
	// This method is the equivalent of making the following calls in sequence:
	// SendReqNoBody, ReadResponseHeader, ReadRespBodyString.
	// 
	bool FullRequestNoBody(const wchar_t *httpVerb, const wchar_t *uriPath, CkString &outStr);
	// Sends a complete REST request and receives the full response. It is assumed that
	// the response body is a string (such as JSON or XML). The response body is
	// returned.
	// 
	// This method is the equivalent of making the following calls in sequence:
	// SendReqNoBody, ReadResponseHeader, ReadRespBodyString.
	// 
	const wchar_t *fullRequestNoBody(const wchar_t *httpVerb, const wchar_t *uriPath);

	// Creates an asynchronous task to call the FullRequestNoBody method with the
	// arguments provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *FullRequestNoBodyAsync(const wchar_t *httpVerb, const wchar_t *uriPath);

	// Sends a complete REST request and receives the full response. It is assumed that
	// the response body is a string (such as JSON or XML). The response body is
	// returned.
	// 
	// This method is the equivalent of making the following calls in sequence:
	// SendReqStream, ReadResponseHeader, ReadRespBodyString.
	// 
	bool FullRequestStream(const wchar_t *httpVerb, const wchar_t *uriPath, CkStreamW &stream, CkString &outStr);
	// Sends a complete REST request and receives the full response. It is assumed that
	// the response body is a string (such as JSON or XML). The response body is
	// returned.
	// 
	// This method is the equivalent of making the following calls in sequence:
	// SendReqStream, ReadResponseHeader, ReadRespBodyString.
	// 
	const wchar_t *fullRequestStream(const wchar_t *httpVerb, const wchar_t *uriPath, CkStreamW &stream);

	// Creates an asynchronous task to call the FullRequestStream method with the
	// arguments provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *FullRequestStreamAsync(const wchar_t *httpVerb, const wchar_t *uriPath, CkStreamW &stream);

	// Sends a complete REST request (header + body string) and receives the full
	// response. It is assumed that both the request and response bodies are strings
	// (such as JSON or XML). The response body is returned.
	// 
	// This method is the equivalent of making the following calls in sequence:
	// SendReqStringBody, ReadResponseHeader, ReadRespBodyString.
	// 
	bool FullRequestString(const wchar_t *httpVerb, const wchar_t *uriPath, const wchar_t *bodyText, CkString &outStr);
	// Sends a complete REST request (header + body string) and receives the full
	// response. It is assumed that both the request and response bodies are strings
	// (such as JSON or XML). The response body is returned.
	// 
	// This method is the equivalent of making the following calls in sequence:
	// SendReqStringBody, ReadResponseHeader, ReadRespBodyString.
	// 
	const wchar_t *fullRequestString(const wchar_t *httpVerb, const wchar_t *uriPath, const wchar_t *bodyText);

	// Creates an asynchronous task to call the FullRequestString method with the
	// arguments provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *FullRequestStringAsync(const wchar_t *httpVerb, const wchar_t *uriPath, const wchar_t *bodyText);

	// Reads the response body. Should only be called after ReadResponseHeader has been
	// called, and should only be called when it is already known that the response
	// body is binary, such as for JPG images or other non-text binary file types.
	bool ReadRespBodyBinary(CkByteData &outBytes);

	// Creates an asynchronous task to call the ReadRespBodyBinary method with the
	// arguments provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *ReadRespBodyBinaryAsync(void);

	// Reads the response body to the ARG1. If ARG2 is true, then the ARG1's
	// StringCharset property will automatically get set based on the charset, if any,
	// indicated in the response header. If the response is binary, then ARG2 is
	// ignored.
	bool ReadRespBodyStream(CkStreamW &stream, bool autoSetStreamCharset);

	// Creates an asynchronous task to call the ReadRespBodyStream method with the
	// arguments provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *ReadRespBodyStreamAsync(CkStreamW &stream, bool autoSetStreamCharset);

	// Reads the response body. Should only be called after ReadResponseHeader has been
	// called, and should only be called when it is already known that the response
	// body will be a string (such as XML, JSON, etc.)
	bool ReadRespBodyString(CkString &outStr);
	// Reads the response body. Should only be called after ReadResponseHeader has been
	// called, and should only be called when it is already known that the response
	// body will be a string (such as XML, JSON, etc.)
	const wchar_t *readRespBodyString(void);

	// Creates an asynchronous task to call the ReadRespBodyString method with the
	// arguments provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *ReadRespBodyStringAsync(void);

	// Reads the HTTP response header. If the HTTP response includes a body, then the
	// application must call the desired method to read the response body. Otherwise,
	// the HTTP request / response is finished after reading the response header (such
	// as for a GET request). The contents of the response header are available in
	// various properties and methods.
	// 
	// The HTTP response status code is returned (such as 200 for a typical success
	// response). If an error occurred such that no response was received, then a value
	// of -1 is returned.
	// 
	int ReadResponseHeader(void);

	// Creates an asynchronous task to call the ReadResponseHeader method with the
	// arguments provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *ReadResponseHeaderAsync(void);

	// If the response was a redirect and contains a Location header field, this method
	// returns the redirect URL.
	// The caller is responsible for deleting the object returned by this method.
	CkUrlW *RedirectUrl(void);

	// Removes all headers having the given ARG1.
	bool RemoveHeader(const wchar_t *name);

	// Removes all query params having the given ARG1.
	bool RemoveQueryParam(const wchar_t *name);

	// Returns the value of the response header indicated by ARG1.
	bool ResponseHdrByName(const wchar_t *name, CkString &outStr);
	// Returns the value of the response header indicated by ARG1.
	const wchar_t *responseHdrByName(const wchar_t *name);

	// Returns the name of the Nth response header field. (Chilkat always uses 0-based
	// indexing. The first header field is at index 0.)
	bool ResponseHdrName(int index, CkString &outStr);
	// Returns the name of the Nth response header field. (Chilkat always uses 0-based
	// indexing. The first header field is at index 0.)
	const wchar_t *responseHdrName(int index);

	// Returns the value of the Nth response header field. (Chilkat always uses 0-based
	// indexing. The first header field is at index 0.)
	bool ResponseHdrValue(int index, CkString &outStr);
	// Returns the value of the Nth response header field. (Chilkat always uses 0-based
	// indexing. The first header field is at index 0.)
	const wchar_t *responseHdrValue(int index);

	// Sends a REST request that cotnains a binary body. The ARG1 is the HTTP verb
	// (also known as the HTTP method), such as "PUT". The ARG2 is the path of the
	// resource URI. The ARG3 contains the bytes of the HTTP request body.
	bool SendReqBinaryBody(const wchar_t *httpVerb, const wchar_t *uriPath, CkByteData &body);

	// Creates an asynchronous task to call the SendReqBinaryBody method with the
	// arguments provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *SendReqBinaryBodyAsync(const wchar_t *httpVerb, const wchar_t *uriPath, CkByteData &body);

	// Sends an application/x-www-form-urlencoded HTTP request where the body is
	// composed of the URL encoded query params. The ARG1 is the HTTP verb (also known
	// as the HTTP method), such as "POST". The ARG2 is the path of the resource URI.
	// If the Content-Type header was set, it is ignored and instead the Content-Type
	// of the request will be "application/x-www-form-urlencoded".
	bool SendReqFormUrlEncoded(const wchar_t *httpVerb, const wchar_t *uriPath);

	// Creates an asynchronous task to call the SendReqFormUrlEncoded method with the
	// arguments provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *SendReqFormUrlEncodedAsync(const wchar_t *httpVerb, const wchar_t *uriPath);

	// Sends a multipart REST request. The ARG1 is the HTTP verb (also known as the
	// HTTP method), such as "GET". The ARG2 is the path of the resource URI.
	bool SendReqMultipart(const wchar_t *httpVerb, const wchar_t *uriPath);

	// Creates an asynchronous task to call the SendReqMultipart method with the
	// arguments provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *SendReqMultipartAsync(const wchar_t *httpVerb, const wchar_t *uriPath);

	// Sends a REST request that cotnains no body. The ARG1 is the HTTP verb (also
	// known as the HTTP method), such as "GET". The ARG2 is the path of the resource
	// URI.
	bool SendReqNoBody(const wchar_t *httpVerb, const wchar_t *uriPath);

	// Creates an asynchronous task to call the SendReqNoBody method with the arguments
	// provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *SendReqNoBodyAsync(const wchar_t *httpVerb, const wchar_t *uriPath);

	// Sends a REST request that cotnains a binary or text body that is obtained by
	// reading from the ARG3. The ARG1 is the HTTP verb (also known as the HTTP
	// method), such as "PUT". The ARG2 is the path of the resource URI.
	bool SendReqStreamBody(const wchar_t *httpVerb, const wchar_t *uriPath, CkStreamW &stream);

	// Creates an asynchronous task to call the SendReqStreamBody method with the
	// arguments provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *SendReqStreamBodyAsync(const wchar_t *httpVerb, const wchar_t *uriPath, CkStreamW &stream);

	// Sends a REST request that cotnains a text body, such as XML or JSON. The ARG1 is
	// the HTTP verb (also known as the HTTP method), such as "PUT". The ARG2 is the
	// path of the resource URI. The ARG3 contains the text of the HTTP request body.
	bool SendReqStringBody(const wchar_t *httpVerb, const wchar_t *uriPath, const wchar_t *bodyText);

	// Creates an asynchronous task to call the SendReqStringBody method with the
	// arguments provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskW *SendReqStringBodyAsync(const wchar_t *httpVerb, const wchar_t *uriPath, const wchar_t *bodyText);

	// Sets the authorization service provider for Amazon AWS REST requests. An
	// application that sets an AWS authentication provider need not explicitly set the
	// Authorization property. Each REST request is automatically signed and
	// authenticated using the ARG1.
	bool SetAuthAws(CkAuthAwsW &authProvider);

	// Sets the Azure AD (Active Directory) authorization service provider.
	bool SetAuthAzureAD(CkAuthAzureADW &authProvider);

	// Sets the authorization service provider for Azure Storage Service requests.
	bool SetAuthAzureStorage(CkAuthAzureStorageW &authProvider);

	// Sets the ARG1 and ARG2 to be used for Basic authentication. This method should
	// be called when Basic authentication is required. It should only be used with
	// secure SSL/TLS connections. Calling this method will cause the "Authorization:
	// Basic ..." header to be automatically added to all requests. In many cases, a
	// REST API will support Basic authentication where the ARG1 is a client ID or
	// account ID, and the ARG2 is a client secret or token.
	bool SetAuthBasic(const wchar_t *username, const wchar_t *password);

	// Sets the authorization service provider for Google API requests.
	bool SetAuthGoogle(CkAuthGoogleW &authProvider);

	// Sets the authentication provider for REST API requests needing OAuth 1.0 (and
	// OAuth 1.0a) authentication. If ARG2 is true, then the OAuth1 authentication
	// information and signature is passed in query parameters. Otherwise it is passed
	// in an Authorization header.
	bool SetAuthOAuth1(CkOAuth1W &authProvider, bool useQueryParams);

	// Only used for multipart requests. Sets the binary content of the multipart body
	// indicated by the PartSelector.
	bool SetMultipartBodyBinary(CkByteData &bodyData);

	// Only used for multipart requests. Sets the stream source of the multipart body
	// indicated by the PartSelector.
	bool SetMultipartBodyStream(CkStreamW &stream);

	// Only used for multipart requests. Sets the text content of the multipart body
	// indicated by the PartSelector.
	bool SetMultipartBodyString(const wchar_t *bodyText);

	// Only applies to the Full* methods, such as FullRequestNoBody, FullRequestBinary,
	// FullRequestStream, etc. When set, the response body is streamed directly to
	// ARG3, if (and only if) the HTTP response status code equals ARG1.
	// 
	// If the response body was streamed to ARG3, then the string return value of the
	// Full* method instead becomes "OK" for success. If an attempt was made to stream
	// the response body but it failed, then "FAIL" is returned. If the response body
	// was not streamed because the response status code was not equal to ARG1, then
	// the returned string contains the server's error response.
	// 
	// If ARG2 is true, then the ARG1's StringCharset property will automatically get
	// set based on the charset, if any, indicated in the response header. If the
	// response is binary, then ARG2 is ignored.
	// 
	bool SetResponseBodyStream(int expectedStatus, bool autoSetStreamCharset, CkStreamW &responseStream);

	// Sets the connection to be used for sending the REST request. The ARG1 should be
	// an already-connected socket. It may be a TLS connection, an unencrypted
	// connection, through an HTTP proxy, a SOCKS proxy, or even through SSH tunnels.
	// All of the connection related functionality is handled by the Chilkat Socket
	// API.
	// 
	// The ARG2 indicates whether connection should automatically be established as
	// needed for subsequent REST requests.
	// 
	bool UseConnection(CkSocketW &connection, bool autoReconnect);





	// END PUBLIC INTERFACE


};
#if !defined(__sun__) && !defined(__sun)
#pragma pack (pop)
#endif


	
#endif