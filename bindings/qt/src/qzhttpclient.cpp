/*
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Read the zproject/README.md for information about making permanent changes. #
################################################################################
*/

#include "qczmq.h"

///
//  Copy-construct to return the proper wrapped c types
QZhttpClient::QZhttpClient (zhttp_client_t *self, QObject *qObjParent) : QObject (qObjParent)
{
    this->self = self;
}


///
//  Create a new http client
QZhttpClient::QZhttpClient (bool verbose, QObject *qObjParent) : QObject (qObjParent)
{
    this->self = zhttp_client_new (verbose);
}

///
//  Destroy an http client
QZhttpClient::~QZhttpClient ()
{
    zhttp_client_destroy (&self);
}

///
//  Send a get request to the url, headers is optional.
//      Use arg to identify response when making multiple requests simultaneously.
//      Timeout is in milliseconds, use -1 or 0 to wait indefinitely.
int QZhttpClient::get (const QString &url, QZlistx *headers, int timeout, zhttp_client_fn handler, void *arg)
{
    int rv = zhttp_client_get (self, url.toUtf8().data(), headers->self, timeout, handler, arg);
    return rv;
}

///
//  Send a post request to the url, headers is optional.
//  Use arg to identify response when making multiple requests simultaneously.
//  Timeout is in milliseconds, use -1 or 0 to wait indefinitely.
int QZhttpClient::post (const QString &url, QZlistx *headers, QZchunk *body, int timeout, zhttp_client_fn handler, void *arg)
{
    int rv = zhttp_client_post (self, url.toUtf8().data(), headers->self, body->self, timeout, handler, arg);
    return rv;
}

///
//  Invoke callback function for received responses.
//  Should be call after zpoller wait method.
//  Returns 0 if OK, -1 on failure.
int QZhttpClient::execute ()
{
    int rv = zhttp_client_execute (self);
    return rv;
}

///
//  Wait until a response is ready to be consumed.
//  Use when you need a synchronize response.
//
//  The timeout should be zero or greater, or -1 to wait indefinitely.
//
//  Returns 0 if a response is ready, -1 and otherwise. errno will be set to EAGAIN if no response is ready.
int QZhttpClient::wait (int timeout)
{
    int rv = zhttp_client_wait (self, timeout);
    return rv;
}

///
//  Self test of this class.
void QZhttpClient::test (bool verbose)
{
    zhttp_client_test (verbose);

}
/*
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Read the zproject/README.md for information about making permanent changes. #
################################################################################
*/