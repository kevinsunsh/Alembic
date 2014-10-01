/*
 *  Copyright 2010-2014 Fabric Software Inc. All rights reserved.
 */

#ifndef __handle_h__
#define __handle_h__

#include "Alembic.h"

#ifndef _WIN32
# include <stdlib.h>
#endif

template <class T>
struct Handle
{
private:
  T m_data;
  void * m_tmp;
  size_t m_tmpSize;
  uint32_t m_refCount;

public:
  Handle(T data, void * tmp = NULL, size_t tmpSize = 0)
  {
    Fabric::EDK::AtomicUInt32SetValue( 1, &m_refCount );
    m_data = data;
    m_tmp = tmp;
    m_tmpSize = tmpSize;
  }

  void retain()
  {
    Fabric::EDK::AtomicUInt32Increment( &m_refCount );
  }

  void release()
  {
    if ( Fabric::EDK::AtomicUInt32DecrementAndGetValue( &m_refCount ) == 0 )
    {
      if(m_tmp != NULL)
        free(m_tmp);
      delete this;
    }
  }

  T & data()
  {
    return m_data;
  }

  const T & data() const
  {
    return m_data;
  }

  void * tmp(size_t size = 0)
  {
    if(size > 0 && m_tmpSize != size)
    {
      if(m_tmp != NULL)
        free(m_tmp);
      m_tmpSize = size;
      m_tmp = malloc(size);
    }
    return m_tmp;
  }

};

template <class T>
struct PtrHandle
{
private:
  T * m_data;
  void * m_tmp;
  size_t m_tmpSize;
  uint32_t m_refCount;
  bool m_owned;

public:
  PtrHandle(T * data, bool owned = false, void * tmp = NULL, size_t tmpSize = 0)
  {
    Fabric::EDK::AtomicUInt32SetValue( 1, &m_refCount );
    m_data = data;
    m_owned = owned;
    m_tmp = tmp;
    m_tmpSize = tmpSize;
  }

  void retain()
  {
    Fabric::EDK::AtomicUInt32Increment( &m_refCount );
  }

  void release()
  {
    if ( Fabric::EDK::AtomicUInt32DecrementAndGetValue( &m_refCount ) == 0 )
    {
      if(m_data != NULL && m_owned)
        delete(m_data);
      if(m_tmp != NULL)
        free(m_tmp);

      delete this;
    }
  }

  T * data()
  {
    return m_data;
  }

  const T * data() const
  {
    return m_data;
  }

  void * tmp(size_t size = 0)
  {
    if(size > 0 && m_tmpSize != size)
    {
      if(m_tmp != NULL)
        free(m_tmp);
      m_tmpSize = size;
      m_tmp = malloc(size);
    }
    return m_tmp;
  }

};

#endif
