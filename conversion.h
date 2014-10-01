/*
 *  Copyright 2010-2014 Fabric Software Inc. All rights reserved.
 */

#ifndef __conversion_h__
#define __conversion_h__

#include "Alembic.h"

#include <Alembic/Abc/All.h>
#include <Alembic/AbcCoreAbstract/All.h>
#include <Alembic/AbcCoreHDF5/All.h>
#include <Alembic/AbcCoreOgawa/All.h>
#include <Alembic/AbcCoreFactory/All.h>
#include <Alembic/AbcCollection/All.h>
#include <Alembic/AbcGeom/All.h>
#include <Alembic/AbcMaterial/All.h>

using namespace Fabric::EDK;

namespace Abc  = ::Alembic::Abc;
namespace AbcA = ::Alembic::AbcCoreAbstract;
namespace AbcF = ::Alembic::AbcCoreFactory;
namespace AbcH = ::Alembic::AbcCoreHDF5;
namespace AbcO = ::Alembic::AbcCoreOgawa;
namespace AbcC = ::Alembic::AbcCollection;
namespace AbcG = ::Alembic::AbcGeom;
namespace AbcU = ::Alembic::Util;
namespace AbcM = ::Alembic::AbcMaterial;

template<class A, class B>
inline bool conv_from_baseType(const A & a, B & b)
{
  b = a;
  return true;
}

template<class B, class A>
inline bool conv_to_baseType(const A & a, B & b)
{
  b = a;
  return true;
}

inline bool conv_from_String(const KL::String & a, std::string & b)
{
  if(a.data() == NULL)
    b = "";
  else
    b = a.data();
  return true;
}

inline bool conv_to_String(const std::string & a, KL::String & b)
{
  if(a.length() == 0)
    b = "";
  else
    b = a.c_str();
  return true;
}

inline bool conv_from_Box3(const KL::Box3 & a, Abc::Box3d & b)
{
  b.min.x = a.min.x;
  b.min.y = a.min.y;
  b.min.z = a.min.z;
  b.max.x = a.max.x;
  b.max.y = a.max.y;
  b.max.z = a.max.z;
  return true;
}

inline bool conv_to_Box3(const Abc::Box3d & a, KL::Box3 & b)
{
  b.min.x = a.min.x;
  b.min.y = a.min.y;
  b.min.z = a.min.z;
  b.max.x = a.max.x;
  b.max.y = a.max.y;
  b.max.z = a.max.z;
  return true;
}

inline bool conv_from_Mat33(const KL::Mat33 & a, Abc::M33d & b)
{
  b[0][0] = a.row0.x;
  b[0][1] = a.row0.y;
  b[0][2] = a.row0.z;
  b[1][0] = a.row1.x;
  b[1][1] = a.row1.y;
  b[1][2] = a.row1.z;
  b[2][0] = a.row2.x;
  b[2][1] = a.row2.y;
  b[2][2] = a.row2.z;
  return true;
}

inline bool conv_to_Mat33(const Abc::M33d & a, KL::Mat33 & b)
{
  b.row0.x = a[0][0];
  b.row0.y = a[0][1];
  b.row0.z = a[0][2];
  b.row1.x = a[1][0];
  b.row1.y = a[1][1];
  b.row1.z = a[1][2];
  b.row2.x = a[2][0];
  b.row2.y = a[2][1];
  b.row2.z = a[2][2];
  return true;
}

inline bool conv_from_Mat44(const KL::Mat44 & a, Abc::M44d & b)
{
  b[0][0] = a.row0.x; b[0][1] = a.row0.y; b[0][2] = a.row0.z; b[0][3] = a.row0.t;
  b[1][0] = a.row1.x; b[1][1] = a.row1.y; b[1][2] = a.row1.z; b[1][3] = a.row1.t;
  b[2][0] = a.row2.x; b[2][1] = a.row2.y; b[2][2] = a.row2.z; b[2][3] = a.row2.t;
  b[3][0] = a.row3.x; b[3][1] = a.row3.y; b[3][2] = a.row3.z; b[3][3] = a.row3.t;
  return true;
}

inline bool conv_to_Mat44(const Abc::M44d & a, KL::Mat44 & b)
{
  b.row0.x = a[0][0]; b.row0.y = a[0][1]; b.row0.z = a[0][2]; b.row0.t = a[0][3];
  b.row1.x = a[1][0]; b.row1.y = a[1][1]; b.row1.z = a[1][2]; b.row1.t = a[1][3];
  b.row2.x = a[2][0]; b.row2.y = a[2][1]; b.row2.z = a[2][2]; b.row2.t = a[2][3];
  b.row3.x = a[3][0]; b.row3.y = a[3][1]; b.row3.z = a[3][2]; b.row3.t = a[3][3];
  return true;
}

inline bool conv_from_AlembicTimeSamplingPair(const KL::AlembicTimeSamplingPair & a, std::pair<Abc::index_t, Abc::chrono_t> & b)
{
  b.first = a.index;
  b.second = a.time;
  return true;
}

inline bool conv_to_AlembicTimeSamplingPair(const std::pair<Abc::index_t, Abc::chrono_t> & a, KL::AlembicTimeSamplingPair & b)
{
  b.index = a.first;
  b.time = a.second;
  return true;
}

template<class A, class B>
inline bool conv_from_AbcBase(const A & a, B & b)
{
  if(!a.isValid())
    return false;
  Handle<B> * handle = (Handle<B> *)a->handle;
  if(handle == NULL)
    return false;
  b = handle->data();
  return true;
}

template<class B, class A>
inline bool conv_to_AbcBase(const A & a, B & b)
{
  if(!b.isValid())
    b = B::Create();
  if(b->handle != NULL)
    ((Handle<A> *)b->handle)->release();
  b->handle = new Handle<A>(a);
  return true;
}

template<class A, class B>
inline bool conv_from_AbcBasePtr(const A & a, B * & b)
{
  if(!a.isValid())
    return false;
  PtrHandle<B> * handle = (PtrHandle<B> *)a->handle;
  if(handle == NULL)
    return false;
  b = handle->data();
  return true;
}

template<class B, class A>
inline bool conv_to_AbcBasePtr(const A * a, B & b, bool owned = false)
{
  if(!b.isValid())
    b = B::Create();
  if(b->handle != NULL)
  {
    if(((PtrHandle<A> *)b->handle)->data() == a)
      return true;
    ((PtrHandle<A> *)b->handle)->release();
  }
  b->handle = new PtrHandle<A>((A *)a, owned);
  return true;
}

// inline bool conv_to_IArchive(const & Abc::IArchive a, KL::AlembicIArchive & b)
// {
//   return PackHandleAbcBase(a, Abc::IArchive, b);
// }

#endif
