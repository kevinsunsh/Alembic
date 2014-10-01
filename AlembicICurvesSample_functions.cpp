////////////////////////////////////////////////////////////////
// THIS FILE IS AUTOMATICALLY GENERATED -- DO NOT MODIFY!!
// USE COPY & PASTE TO MAKE USE OF THE FUNCTION IMPLEMENTATIONS!!
////////////////////////////////////////////////////////////////
// Generated by kl2exe version 1.11.2
////////////////////////////////////////////////////////////////

#include "AlembicICurvesSample_functions.h"


#include "extension.h"
  

using namespace Fabric::EDK;


// Defined at ICurvesSample.kl:26:1
FABRIC_EXT_EXPORT void AlembicICurvesSample_construct(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicICurvesSample >::IOParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicICurvesSample_construct")

  construct_AbcBasePtr(AbcG::ICurvesSchema::Sample)
  
  ALEMBIC_CATCH_STATEMENT("AlembicICurvesSample_construct")
}

// Defined at ICurvesSample.kl:27:1
FABRIC_EXT_EXPORT void AlembicICurvesSample_free(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicICurvesSample >::IOParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicICurvesSample_free")

  AbcG::ICurvesSchema::Sample * abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicICurvesSample, AbcG::ICurvesSchema::Sample>(this_, abcThis_)){
    return;
  }
  free_AbcBasePtr(AbcG::ICurvesSchema::Sample)
  
  ALEMBIC_CATCH_STATEMENT("AlembicICurvesSample_free")
}

// Defined at ICurvesSample.kl:28:1
FABRIC_EXT_EXPORT Fabric::EDK::KL::Boolean AlembicICurvesSample_valid(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicICurvesSample >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicICurvesSample_valid")

  AbcG::ICurvesSchema::Sample * abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicICurvesSample, AbcG::ICurvesSchema::Sample>(this_, abcThis_)){
    return false;
  }
  bool abc_result = abcThis_->valid();
  KL::Boolean _result;
  conv_to_baseType<KL::Boolean, bool>(abc_result, _result);
  return _result;

  ALEMBIC_CATCH_STATEMENT_RETURN("AlembicICurvesSample_valid", false)
}

// Defined at ICurvesSample.kl:31:1
FABRIC_EXT_EXPORT void AlembicICurvesSample_getPositions(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::ExternalArray< Fabric::EDK::KL::Vec3 > >::Result _result,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicICurvesSample >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicICurvesSample_getPositions")

  AbcG::ICurvesSchema::Sample * abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicICurvesSample, AbcG::ICurvesSchema::Sample>(this_, abcThis_)){
    setError("Error in AlembicICurvesSample_getPositions. unable to convert: this_");
    return;
  }
  AlembicIExtractExternalArrayFromSample(Abc::P3fArraySamplePtr, KL::Vec3, getPositions)
  ALEMBIC_CATCH_STATEMENT("AlembicICurvesSample_getPositions")
}

// Defined at ICurvesSample.kl:32:1
FABRIC_EXT_EXPORT Fabric::EDK::KL::UInt32 AlembicICurvesSample_getType(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicICurvesSample >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicICurvesSample_getType")

  AbcG::ICurvesSchema::Sample * abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicICurvesSample, AbcG::ICurvesSchema::Sample>(this_, abcThis_)){
    setError("Error in AlembicICurvesSample_getType. unable to convert: this_");
    return 0;
  }
  unsigned int abc_result = abcThis_->getType();
  KL::UInt32 _result;
  conv_to_baseType<KL::UInt32, unsigned int>(abc_result, _result);
  return _result;

  ALEMBIC_CATCH_STATEMENT_RETURN("AlembicICurvesSample_getType", 0)
}

// Defined at ICurvesSample.kl:33:1
FABRIC_EXT_EXPORT Fabric::EDK::KL::UInt32 AlembicICurvesSample_getWrap(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicICurvesSample >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicICurvesSample_getWrap")

  AbcG::ICurvesSchema::Sample * abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicICurvesSample, AbcG::ICurvesSchema::Sample>(this_, abcThis_)){
    setError("Error in AlembicICurvesSample_getWrap. unable to convert: this_");
    return 0;
  }
  unsigned int abc_result = abcThis_->getWrap();
  KL::UInt32 _result;
  conv_to_baseType<KL::UInt32, unsigned int>(abc_result, _result);
  return _result;

  ALEMBIC_CATCH_STATEMENT_RETURN("AlembicICurvesSample_getWrap", 0)
}

// Defined at ICurvesSample.kl:34:1
FABRIC_EXT_EXPORT Fabric::EDK::KL::UInt32 AlembicICurvesSample_getNumCurves(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicICurvesSample >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicICurvesSample_getNumCurves")

  AbcG::ICurvesSchema::Sample * abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicICurvesSample, AbcG::ICurvesSchema::Sample>(this_, abcThis_)){
    setError("Error in AlembicICurvesSample_getNumCurves. unable to convert: this_");
    return 0;
  }
  unsigned int abc_result = abcThis_->getNumCurves();
  KL::UInt32 _result;
  conv_to_baseType<KL::UInt32, unsigned int>(abc_result, _result);
  return _result;

  ALEMBIC_CATCH_STATEMENT_RETURN("AlembicICurvesSample_getNumCurves", 0)
}

// Defined at ICurvesSample.kl:35:1
FABRIC_EXT_EXPORT void AlembicICurvesSample_getCurvesNumVertices(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::ExternalArray< Fabric::EDK::KL::SInt32 > >::Result _result,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicICurvesSample >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicICurvesSample_getCurvesNumVertices")

  AbcG::ICurvesSchema::Sample * abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicICurvesSample, AbcG::ICurvesSchema::Sample>(this_, abcThis_)){
    setError("Error in AlembicICurvesSample_getCurvesNumVertices. unable to convert: this_");
    return;
  }
  AlembicIExtractExternalArrayFromSample(Abc::Int32ArraySamplePtr, KL::SInt32, getCurvesNumVertices)
  ALEMBIC_CATCH_STATEMENT("AlembicICurvesSample_getCurvesNumVertices")
}

// Defined at ICurvesSample.kl:36:1
FABRIC_EXT_EXPORT void AlembicICurvesSample_getSelfBounds(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::Box3 >::Result _result,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicICurvesSample >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicICurvesSample_getSelfBounds")

  AbcG::ICurvesSchema::Sample * abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicICurvesSample, AbcG::ICurvesSchema::Sample>(this_, abcThis_)){
    setError("Error in AlembicICurvesSample_getSelfBounds. unable to convert: this_");
    return;
  }
  Abc::Box3d abc_result = abcThis_->getSelfBounds();
  conv_to_Box3(abc_result, _result);

  ALEMBIC_CATCH_STATEMENT("AlembicICurvesSample_getSelfBounds")
}

// Defined at ICurvesSample.kl:37:1
FABRIC_EXT_EXPORT void AlembicICurvesSample_getVelocities(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::ExternalArray< Fabric::EDK::KL::Vec3 > >::Result _result,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicICurvesSample >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicICurvesSample_getVelocities")

  AbcG::ICurvesSchema::Sample * abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicICurvesSample, AbcG::ICurvesSchema::Sample>(this_, abcThis_)){
    setError("Error in AlembicICurvesSample_getVelocities. unable to convert: this_");
    return;
  }
  AlembicIExtractExternalArrayFromSample(Abc::V3fArraySamplePtr, KL::Vec3, getVelocities)
  ALEMBIC_CATCH_STATEMENT("AlembicICurvesSample_getVelocities")
}

// Defined at ICurvesSample.kl:38:1
FABRIC_EXT_EXPORT Fabric::EDK::KL::UInt32 AlembicICurvesSample_getBasis(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicICurvesSample >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicICurvesSample_getBasis")

  AbcG::ICurvesSchema::Sample * abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicICurvesSample, AbcG::ICurvesSchema::Sample>(this_, abcThis_)){
    setError("Error in AlembicICurvesSample_getBasis. unable to convert: this_");
    return 0;
  }
  unsigned int abc_result = abcThis_->getBasis();
  KL::UInt32 _result;
  conv_to_baseType<KL::UInt32, unsigned int>(abc_result, _result);
  return _result;

  ALEMBIC_CATCH_STATEMENT_RETURN("AlembicICurvesSample_getBasis", 0)
}

// Defined at ICurvesSample.kl:39:1
FABRIC_EXT_EXPORT void AlembicICurvesSample_getKnots(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::ExternalArray< Fabric::EDK::KL::Float32 > >::Result _result,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicICurvesSample >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicICurvesSample_getKnots")

  AbcG::ICurvesSchema::Sample * abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicICurvesSample, AbcG::ICurvesSchema::Sample>(this_, abcThis_)){
    setError("Error in AlembicICurvesSample_getKnots. unable to convert: this_");
    return;
  }
  AlembicIExtractExternalArrayFromSample(Abc::FloatArraySamplePtr, KL::Float32, getKnots)
  ALEMBIC_CATCH_STATEMENT("AlembicICurvesSample_getKnots")
}

// Defined at ICurvesSample.kl:40:1
FABRIC_EXT_EXPORT void AlembicICurvesSample_getOrders(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::ExternalArray< Fabric::EDK::KL::UInt8 > >::Result _result,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicICurvesSample >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicICurvesSample_getOrders")

  AbcG::ICurvesSchema::Sample * abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicICurvesSample, AbcG::ICurvesSchema::Sample>(this_, abcThis_)){
    setError("Error in AlembicICurvesSample_getOrders. unable to convert: this_");
    return;
  }
  AlembicIExtractExternalArrayFromSample(Abc::UcharArraySamplePtr, KL::UInt8, getOrders)
  ALEMBIC_CATCH_STATEMENT("AlembicICurvesSample_getOrders")
}
