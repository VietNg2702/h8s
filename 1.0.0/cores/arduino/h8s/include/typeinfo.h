/*------------------------------------------------------------------------------*/
/* H8S,H8/300 SERIES C/C++ Compiler Ver. 7.0                                    */
/* Copyright (C) 1994,2007 Renesas Technology Corp. and Renesas Solutions Corp. */
/* Copyright (C) 2000 Hitachi, Ltd.                                             */
/* Copyright (C) 1994,2007 Hitachi Information & Control Solutions, Ltd.        */
/* All rights reserved.                                                         */
/*------------------------------------------------------------------------------*/

#ifndef _TYPEINFO_H
#define _TYPEINFO_H

#include <exception.h>

#ifdef __EDG_RUNTIME_USES_NAMESPACES
namespace std {
#endif /* ifdef __EDG_RUNTIME_USES_NAMESPACES */

  /*
  If bool is not supported, use a typedef for bool.
  */
  #ifdef _BOOL
  typedef bool __bool;
  #else /* ifndef _BOOL */
  typedef int __bool;
  #endif /* ifdef _BOOL */

/* The following pragma is used so that the compiler knows that this definition
   of type_info is the one that corresponds to the type returned by typeid. */
#pragma define_type_info
  class type_info {
  public:
    virtual ~type_info();
    __bool operator==(const type_info&) const;
    __bool operator!=(const type_info&) const;
    __bool before(const type_info&) const;
    const char* name() const;
  private:
    type_info& operator=(const type_info&);  // Not actually defined
#if 0
#else /* 0 */
  protected:
    // Protected instead of private to suppress the "no accessible
    // constructor" warning
#endif /* 0 */
    type_info(const type_info&);  // Not actually defined
#ifdef __EDG_IA64_ABI
  private:
    const char *__type_name;
#endif /* ifdef __EDG_IA64_ABI */
  };

  class bad_cast : public exception {
  public:
    bad_cast() throw();
    bad_cast(const bad_cast&) throw();
    bad_cast& operator=(const bad_cast&) throw();
    virtual ~bad_cast() throw();
    virtual const char* what() const throw();
  };

  class bad_typeid : public exception {
  public:
    bad_typeid() throw();
    bad_typeid(const bad_typeid&) throw();
    bad_typeid& operator=(const bad_typeid&) throw();
    virtual ~bad_typeid() throw();
    virtual const char* what() const throw();
  };

#ifdef __EDG_RUNTIME_USES_NAMESPACES
}  /* namespace std */

#ifdef __EDG_IMPLICIT_USING_STD
/* Implicitly include a using directive for the STD namespace when this
   preprocessing flag is TRUE. */
using namespace std;
#endif /* ifdef __EDG_IMPLICIT_USING_STD */

#endif /* ifdef __EDG_RUNTIME_USES_NAMESPACES */

#endif /* _TYPEINFO_H */
