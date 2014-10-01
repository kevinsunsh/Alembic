////////////////////////////////////////////////////////////////
// THIS FILE IS AUTOMATICALLY GENERATED -- DO NOT MODIFY!!
// USE COPY & PASTE TO MAKE USE OF THE FUNCTION IMPLEMENTATIONS!!
////////////////////////////////////////////////////////////////
// Generated by kl2exe version 1.11.2
////////////////////////////////////////////////////////////////

#include "AlembicOPointsSample_functions.h"


#include "extension.h"
  

using namespace Fabric::EDK;


// Defined at OPointsSample.kl:9:1
FABRIC_EXT_EXPORT void AlembicOPointsSample_construct(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOPointsSample >::IOParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicOPointsSample_construct")

  construct_AbcBasePtr(AbcG::OPointsSchema::Sample)
  
  ALEMBIC_CATCH_STATEMENT("AlembicOPointsSample_construct")
}

// Defined at OPointsSample.kl:10:1
FABRIC_EXT_EXPORT void AlembicOPointsSample_free(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOPointsSample >::IOParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicOPointsSample_free")

  AbcG::OPointsSchema::Sample * abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicOPointsSample, AbcG::OPointsSchema::Sample>(this_, abcThis_)){
    return;
  }
  free_AbcBasePtr(AbcG::OPointsSchema::Sample)
  
  ALEMBIC_CATCH_STATEMENT("AlembicOPointsSample_free")
}

// Defined at OPointsSample.kl:12:1
FABRIC_EXT_EXPORT void AlembicOPointsSample_getPositions(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::ExternalArray< Fabric::EDK::KL::Vec3 > >::Result _result,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOPointsSample >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicOPointsSample_getPositions")

  AbcG::OPointsSchema::Sample * abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicOPointsSample, AbcG::OPointsSchema::Sample>(this_, abcThis_)){
    setError("Error in AlembicOPointsSample_getPositions. unable to convert: this_");
    return;
  }
  AlembicOExtractExternalArrayFromSample(Abc::P3fArraySample, KL::Vec3, getPositions)
  ALEMBIC_CATCH_STATEMENT("AlembicOPointsSample_getPositions")
}

// Defined at OPointsSample.kl:13:1
FABRIC_EXT_EXPORT void AlembicOPointsSample_setPositions(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOPointsSample >::IOParam this_,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::ExternalArray< Fabric::EDK::KL::Vec3 > >::INParam values
)
{
  ALEMBIC_TRY_STATEMENT("AlembicOPointsSample_setPositions")

  AbcG::OPointsSchema::Sample * abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicOPointsSample, AbcG::OPointsSchema::Sample>(this_, abcThis_)){
    setError("Error in AlembicOPointsSample_setPositions. unable to convert: this_");
    return;
  }
  AlembicPackExternalArrayToSample(Abc::P3fArraySample, Abc::V3f, setPositions)
  ALEMBIC_CATCH_STATEMENT("AlembicOPointsSample_setPositions")
}

// Defined at OPointsSample.kl:14:1
FABRIC_EXT_EXPORT void AlembicOPointsSample_getIds(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::ExternalArray< Fabric::EDK::KL::UInt64 > >::Result _result,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOPointsSample >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicOPointsSample_getIds")

  AbcG::OPointsSchema::Sample * abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicOPointsSample, AbcG::OPointsSchema::Sample>(this_, abcThis_)){
    setError("Error in AlembicOPointsSample_getIds. unable to convert: this_");
    return;
  }
  AlembicOExtractExternalArrayFromSample(Abc::UInt64ArraySample, KL::UInt64, getIds)
  ALEMBIC_CATCH_STATEMENT("AlembicOPointsSample_getIds")
}

// Defined at OPointsSample.kl:15:1
FABRIC_EXT_EXPORT void AlembicOPointsSample_setIds(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOPointsSample >::IOParam this_,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::ExternalArray< Fabric::EDK::KL::UInt64 > >::INParam values
)
{
  ALEMBIC_TRY_STATEMENT("AlembicOPointsSample_setIds")

  AbcG::OPointsSchema::Sample * abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicOPointsSample, AbcG::OPointsSchema::Sample>(this_, abcThis_)){
    setError("Error in AlembicOPointsSample_setIds. unable to convert: this_");
    return;
  }
  AlembicPackExternalArrayToSample(Abc::UInt64ArraySample, Abc::uint64_t, setIds)
  ALEMBIC_CATCH_STATEMENT("AlembicOPointsSample_setIds")
}

// Defined at OPointsSample.kl:16:1
FABRIC_EXT_EXPORT void AlembicOPointsSample_getVelocities(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::ExternalArray< Fabric::EDK::KL::Vec3 > >::Result _result,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOPointsSample >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicOPointsSample_getVelocities")

  AbcG::OPointsSchema::Sample * abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicOPointsSample, AbcG::OPointsSchema::Sample>(this_, abcThis_)){
    setError("Error in AlembicOPointsSample_getVelocities. unable to convert: this_");
    return;
  }
  AlembicOExtractExternalArrayFromSample(Abc::V3fArraySample, KL::Vec3, getVelocities)
  ALEMBIC_CATCH_STATEMENT("AlembicOPointsSample_getVelocities")
}

// Defined at OPointsSample.kl:17:1
FABRIC_EXT_EXPORT void AlembicOPointsSample_setVelocities(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOPointsSample >::IOParam this_,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::ExternalArray< Fabric::EDK::KL::Vec3 > >::INParam values
)
{
  ALEMBIC_TRY_STATEMENT("AlembicOPointsSample_setVelocities")

  AbcG::OPointsSchema::Sample * abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicOPointsSample, AbcG::OPointsSchema::Sample>(this_, abcThis_)){
    setError("Error in AlembicOPointsSample_setVelocities. unable to convert: this_");
    return;
  }
  AlembicPackExternalArrayToSample(Abc::V3fArraySample, Abc::V3f, setVelocities)
  ALEMBIC_CATCH_STATEMENT("AlembicOPointsSample_setVelocities")
}

// Defined at OPointsSample.kl:18:1
FABRIC_EXT_EXPORT void AlembicOPointsSample_getWidths(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOFloat32GeomParamSample >::Result _result,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOPointsSample >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicOPointsSample_getWidths")

  AbcG::OPointsSchema::Sample * abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicOPointsSample, AbcG::OPointsSchema::Sample>(this_, abcThis_)){
    setError("Error in AlembicOPointsSample_getWidths. unable to convert: this_");
    return;
  }

  AbcG::OTypedGeomParam<Abc::Float32TPTraits>::Sample * abc_result = new AbcG::OTypedGeomParam<Abc::Float32TPTraits>::Sample(abcThis_->getWidths());
  conv_to_AbcBasePtr<KL::AlembicOFloat32GeomParamSample, AbcG::OTypedGeomParam<Abc::Float32TPTraits>::Sample>(abc_result, _result, true);
    
  ALEMBIC_CATCH_STATEMENT("AlembicOPointsSample_getWidths")
}

// Defined at OPointsSample.kl:19:1
FABRIC_EXT_EXPORT void AlembicOPointsSample_setWidths(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOPointsSample >::IOParam this_,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOFloat32GeomParamSample >::INParam values
)
{
  ALEMBIC_TRY_STATEMENT("AlembicOPointsSample_setWidths")

  AbcG::OPointsSchema::Sample * abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicOPointsSample, AbcG::OPointsSchema::Sample>(this_, abcThis_)){
    setError("Error in AlembicOPointsSample_setWidths. unable to convert: this_");
    return;
  }
  AbcG::OTypedGeomParam<Abc::Float32TPTraits>::Sample * abcValues = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicOFloat32GeomParamSample, AbcG::OTypedGeomParam<Abc::Float32TPTraits>::Sample>(values, abcValues)){
    setError("Error in AlembicOPointsSample_setWidths. unable to convert: values");
    return;
  }
  abcThis_->setWidths(*abcValues);

  ALEMBIC_CATCH_STATEMENT("AlembicOPointsSample_setWidths")
}

// Defined at OPointsSample.kl:20:1
FABRIC_EXT_EXPORT void AlembicOPointsSample_getSelfBounds(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::Box3 >::Result _result,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOPointsSample >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicOPointsSample_getSelfBounds")

  AbcG::OPointsSchema::Sample * abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicOPointsSample, AbcG::OPointsSchema::Sample>(this_, abcThis_)){
    setError("Error in AlembicOPointsSample_getSelfBounds. unable to convert: this_");
    return;
  }
  Abc::Box3d abc_result = abcThis_->getSelfBounds();
  conv_to_Box3(abc_result, _result);

  ALEMBIC_CATCH_STATEMENT("AlembicOPointsSample_getSelfBounds")
}

// Defined at OPointsSample.kl:21:1
FABRIC_EXT_EXPORT void AlembicOPointsSample_setSelfBounds(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOPointsSample >::IOParam this_,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::Box3 >::INParam bounds
)
{
  ALEMBIC_TRY_STATEMENT("AlembicOPointsSample_setSelfBounds")

  AbcG::OPointsSchema::Sample * abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicOPointsSample, AbcG::OPointsSchema::Sample>(this_, abcThis_)){
    setError("Error in AlembicOPointsSample_setSelfBounds. unable to convert: this_");
    return;
  }
  Abc::Box3d abcBounds;
  if(!conv_from_Box3(bounds, abcBounds)){
    setError("Error in AlembicOPointsSample_setSelfBounds. unable to convert: bounds");
    return;
  }
  abcThis_->setSelfBounds(abcBounds);

  ALEMBIC_CATCH_STATEMENT("AlembicOPointsSample_setSelfBounds")
}