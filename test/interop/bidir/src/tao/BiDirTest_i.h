// -*- C++ -*-
//
// $Id: BiDirTest_i.h,v 1.1 2001-11-13 08:32:40 jacorb Exp $

// ****  Code generated by the The ACE ORB (TAO) IDL Compiler ****
// TAO and the TAO IDL Compiler have been developed by:
//       Center for Distributed Object Computing
//       Washington University
//       St. Louis, MO
//       USA
//       http://www.cs.wustl.edu/~schmidt/doc-center.html
// and
//       Distributed Object Computing Laboratory
//       University of California at Irvine
//       Irvine, CA
//       USA
//       http://doc.ece.uci.edu/
//
// Information about TAO is available at:
//     http://www.cs.wustl.edu/~schmidt/TAO.html

#ifndef BIDIRTESTI_H_
#define BIDIRTESTI_H_

#include "BiDirTestS.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
#pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

//Class ClientCallback_i
class  ClientCallback_i : public virtual POA_test::interop::bidir::ClientCallback
{
public:
  //Constructor
  ClientCallback_i (void);

  //Destructor
  virtual ~ClientCallback_i (void);

  virtual void hello (const char * message);
};

//Class CallbackServer_i
class  CallbackServer_i : public virtual POA_test::interop::bidir::CallbackServer
{
public:
  //Constructor
  CallbackServer_i (void);

  //Destructor
  virtual ~CallbackServer_i (void);

  virtual void callback_hello (test::interop::bidir::ClientCallback_ptr cc, const char * message);
};


#endif /* BIDIRTESTI_H_  */
