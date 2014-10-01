/*
 *  Copyright 2010-2014 Fabric Software Inc. All rights reserved.
 */

#ifndef ___h__
#define ___h__

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

inline bool operatorEquals(const Abc::DataType & a, const Abc::DataType & b)
{
  return a == b;
}

inline bool operatorLess(const Abc::DataType & a, const Abc::DataType & b)
{
  return a < b;
}

#endif