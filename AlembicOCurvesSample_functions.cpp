////////////////////////////////////////////////////////////////
// THIS FILE IS AUTOMATICALLY GENERATED -- DO NOT MODIFY!!
// USE COPY & PASTE TO MAKE USE OF THE FUNCTION IMPLEMENTATIONS!!
////////////////////////////////////////////////////////////////
// Generated by kl2exe version 1.11.2
////////////////////////////////////////////////////////////////

#include "AlembicOCurvesSample_functions.h"


#include "extension.h"
  

using namespace Fabric::EDK;


// Defined at OCurvesSample.kl:9:1
FABRIC_EXT_EXPORT void AlembicOCurvesSample_construct(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOCurvesSample >::IOParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicOCurvesSample_construct")

  construct_AbcBasePtr(AbcG::OCurvesSchema::Sample)
  
  ALEMBIC_CATCH_STATEMENT("AlembicOCurvesSample_construct")
}

// Defined at OCurvesSample.kl:10:1
FABRIC_EXT_EXPORT void AlembicOCurvesSample_free(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOCurvesSample >::IOParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicOCurvesSample_free")

  AbcG::OCurvesSchema::Sample * abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicOCurvesSample, AbcG::OCurvesSchema::Sample>(this_, abcThis_)){
    return;
  }
  free_AbcBasePtr(AbcG::OCurvesSchema::Sample)
  
  ALEMBIC_CATCH_STATEMENT("AlembicOCurvesSample_free")
}

// Defined at OCurvesSample.kl:12:1
FABRIC_EXT_EXPORT void AlembicOCurvesSample_getWidths(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOFloat32GeomParamSample >::Result _result,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOCurvesSample >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicOCurvesSample_getWidths")

  AbcG::OCurvesSchema::Sample * abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicOCurvesSample, AbcG::OCurvesSchema::Sample>(this_, abcThis_)){
    setError("Error in AlembicOCurvesSample_getWidths. unable to convert: this_");
    return;
  }

  AbcG::OTypedGeomParam<Abc::Float32TPTraits>::Sample * abc_result = new AbcG::OTypedGeomParam<Abc::Float32TPTraits>::Sample(abcThis_->getWidths());
  conv_to_AbcBasePtr<KL::AlembicOFloat32GeomParamSample, AbcG::OTypedGeomParam<Abc::Float32TPTraits>::Sample>(abc_result, _result, true);
    
  ALEMBIC_CATCH_STATEMENT("AlembicOCurvesSample_getWidths")
}

// Defined at OCurvesSample.kl:13:1
FABRIC_EXT_EXPORT void AlembicOCurvesSample_setWidths(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOCurvesSample >::IOParam this_,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOFloat32GeomParamSample >::INParam values
)
{
  ALEMBIC_TRY_STATEMENT("AlembicOCurvesSample_setWidths")

  AbcG::OCurvesSchema::Sample * abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicOCurvesSample, AbcG::OCurvesSchema::Sample>(this_, abcThis_)){
    setError("Error in AlembicOCurvesSample_setWidths. unable to convert: this_");
    return;
  }
  AbcG::OTypedGeomParam<Abc::Float32TPTraits>::Sample * abcValues = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicOFloat32GeomParamSample, AbcG::OTypedGeomParam<Abc::Float32TPTraits>::Sample>(values, abcValues)){
    setError("Error in AlembicOCurvesSample_setWidths. unable to convert: values");
    return;
  }
  abcThis_->setWidths(*abcValues);

  ALEMBIC_CATCH_STATEMENT("AlembicOCurvesSample_setWidths")
}

// Defined at OCurvesSample.kl:14:1
FABRIC_EXT_EXPORT void AlembicOCurvesSample_getPositions(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::ExternalArray< Fabric::EDK::KL::Vec3 > >::Result _result,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOCurvesSample >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicOCurvesSample_getPositions")

  AbcG::OCurvesSchema::Sample * abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicOCurvesSample, AbcG::OCurvesSchema::Sample>(this_, abcThis_)){
    setError("Error in AlembicOCurvesSample_getPositions. unable to convert: this_");
    return;
  }
  AlembicOExtractExternalArrayFromSample(Abc::P3fArraySample, KL::Vec3, getPositions)
  ALEMBIC_CATCH_STATEMENT("AlembicOCurvesSample_getPositions")
}

// Defined at OCurvesSample.kl:15:1
FABRIC_EXT_EXPORT void AlembicOCurvesSample_setPositions(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOCurvesSample >::IOParam this_,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::ExternalArray< Fabric::EDK::KL::Vec3 > >::INParam values
)
{
  ALEMBIC_TRY_STATEMENT("AlembicOCurvesSample_setPositions")

  AbcG::OCurvesSchema::Sample * abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicOCurvesSample, AbcG::OCurvesSchema::Sample>(this_, abcThis_)){
    setError("Error in AlembicOCurvesSample_setPositions. unable to convert: this_");
    return;
  }
  AlembicPackExternalArrayToSample(Abc::P3fArraySample, Abc::V3f, setPositions)
  ALEMBIC_CATCH_STATEMENT("AlembicOCurvesSample_setPositions")
}

// Defined at OCurvesSample.kl:16:1
FABRIC_EXT_EXPORT void AlembicOCurvesSample_setType(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOCurvesSample >::IOParam this_,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::UInt32 >::INParam curveType
)
{
  ALEMBIC_TRY_STATEMENT("AlembicOCurvesSample_setType")

  AbcG::OCurvesSchema::Sample * abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicOCurvesSample, AbcG::OCurvesSchema::Sample>(this_, abcThis_)){
    setError("Error in AlembicOCurvesSample_setType. unable to convert: this_");
    return;
  }
  unsigned int abcCurveType = 0;
  if(!conv_from_baseType<KL::UInt32, unsigned int>(curveType, abcCurveType)){
    setError("Error in AlembicOCurvesSample_setType. unable to convert: curveType");
    return;
  }
  abcThis_->setType((AbcG::CurveType)abcCurveType);
  
  ALEMBIC_CATCH_STATEMENT("AlembicOCurvesSample_setType")
}

// Defined at OCurvesSample.kl:17:1
FABRIC_EXT_EXPORT Fabric::EDK::KL::UInt32 AlembicOCurvesSample_getType(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOCurvesSample >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicOCurvesSample_getType")

  AbcG::OCurvesSchema::Sample * abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicOCurvesSample, AbcG::OCurvesSchema::Sample>(this_, abcThis_)){
    setError("Error in AlembicOCurvesSample_getType. unable to convert: this_");
    return 0;
  }
  unsigned int abc_result = abcThis_->getType();
  KL::UInt32 _result;
  conv_to_baseType<KL::UInt32, unsigned int>(abc_result, _result);
  return _result;

  ALEMBIC_CATCH_STATEMENT_RETURN("AlembicOCurvesSample_getType", 0)
}

// Defined at OCurvesSample.kl:18:1
FABRIC_EXT_EXPORT void AlembicOCurvesSample_setWrap(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOCurvesSample >::IOParam this_,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::UInt32 >::INParam wrap
)
{
  ALEMBIC_TRY_STATEMENT("AlembicOCurvesSample_setWrap")

  AbcG::OCurvesSchema::Sample * abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicOCurvesSample, AbcG::OCurvesSchema::Sample>(this_, abcThis_)){
    setError("Error in AlembicOCurvesSample_setWrap. unable to convert: this_");
    return;
  }
  unsigned int abcWrap = 0;
  if(!conv_from_baseType<KL::UInt32, unsigned int>(wrap, abcWrap)){
    setError("Error in AlembicOCurvesSample_setWrap. unable to convert: wrap");
    return;
  }
  abcThis_->setWrap((AbcG::CurvePeriodicity)abcWrap);
  
  ALEMBIC_CATCH_STATEMENT("AlembicOCurvesSample_setWrap")
}

// Defined at OCurvesSample.kl:19:1
FABRIC_EXT_EXPORT Fabric::EDK::KL::UInt32 AlembicOCurvesSample_getWrap(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOCurvesSample >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicOCurvesSample_getWrap")

  AbcG::OCurvesSchema::Sample * abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicOCurvesSample, AbcG::OCurvesSchema::Sample>(this_, abcThis_)){
    setError("Error in AlembicOCurvesSample_getWrap. unable to convert: this_");
    return 0;
  }
  unsigned int abc_result = abcThis_->getWrap();
  KL::UInt32 _result;
  conv_to_baseType<KL::UInt32, unsigned int>(abc_result, _result);
  return _result;

  ALEMBIC_CATCH_STATEMENT_RETURN("AlembicOCurvesSample_getWrap", 0)
}

// Defined at OCurvesSample.kl:20:1
FABRIC_EXT_EXPORT Fabric::EDK::KL::UInt32 AlembicOCurvesSample_getNumCurves(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOCurvesSample >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicOCurvesSample_getNumCurves")

  AbcG::OCurvesSchema::Sample * abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicOCurvesSample, AbcG::OCurvesSchema::Sample>(this_, abcThis_)){
    setError("Error in AlembicOCurvesSample_getNumCurves. unable to convert: this_");
    return 0;
  }
  unsigned int abc_result = abcThis_->getNumCurves();
  KL::UInt32 _result;
  conv_to_baseType<KL::UInt32, unsigned int>(abc_result, _result);
  return _result;

  ALEMBIC_CATCH_STATEMENT_RETURN("AlembicOCurvesSample_getNumCurves", 0)
}

// Defined at OCurvesSample.kl:21:1
FABRIC_EXT_EXPORT void AlembicOCurvesSample_setCurvesNumVertices(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOCurvesSample >::IOParam this_,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::ExternalArray< Fabric::EDK::KL::SInt32 > >::INParam values
)
{
  ALEMBIC_TRY_STATEMENT("AlembicOCurvesSample_setCurvesNumVertices")

  AbcG::OCurvesSchema::Sample * abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicOCurvesSample, AbcG::OCurvesSchema::Sample>(this_, abcThis_)){
    setError("Error in AlembicOCurvesSample_setCurvesNumVertices. unable to convert: this_");
    return;
  }
  AlembicPackExternalArrayToSample(Abc::Int32ArraySample, Abc::int32_t, setCurvesNumVertices)
  ALEMBIC_CATCH_STATEMENT("AlembicOCurvesSample_setCurvesNumVertices")
}

// Defined at OCurvesSample.kl:22:1
FABRIC_EXT_EXPORT void AlembicOCurvesSample_getCurvesNumVertices(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::ExternalArray< Fabric::EDK::KL::SInt32 > >::Result _result,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOCurvesSample >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicOCurvesSample_getCurvesNumVertices")

  AbcG::OCurvesSchema::Sample * abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicOCurvesSample, AbcG::OCurvesSchema::Sample>(this_, abcThis_)){
    setError("Error in AlembicOCurvesSample_getCurvesNumVertices. unable to convert: this_");
    return;
  }
  AlembicOExtractExternalArrayFromSample(Abc::Int32ArraySample, KL::SInt32, getCurvesNumVertices)
  ALEMBIC_CATCH_STATEMENT("AlembicOCurvesSample_getCurvesNumVertices")
}

// Defined at OCurvesSample.kl:23:1
FABRIC_EXT_EXPORT void AlembicOCurvesSample_getUVs(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOVec2VfGeomParamSample >::Result _result,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOCurvesSample >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicOCurvesSample_getUVs")

  AbcG::OCurvesSchema::Sample * abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicOCurvesSample, AbcG::OCurvesSchema::Sample>(this_, abcThis_)){
    setError("Error in AlembicOCurvesSample_getUVs. unable to convert: this_");
    return;
  }

  AbcG::OTypedGeomParam<Abc::V2fTPTraits>::Sample * abc_result = new AbcG::OTypedGeomParam<Abc::V2fTPTraits>::Sample(abcThis_->getUVs());
  conv_to_AbcBasePtr<KL::AlembicOVec2VfGeomParamSample, AbcG::OTypedGeomParam<Abc::V2fTPTraits>::Sample>(abc_result, _result, true);
    
  ALEMBIC_CATCH_STATEMENT("AlembicOCurvesSample_getUVs")
}

// Defined at OCurvesSample.kl:24:1
FABRIC_EXT_EXPORT void AlembicOCurvesSample_setUVs(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOCurvesSample >::IOParam this_,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOVec2VfGeomParamSample >::INParam values
)
{
  ALEMBIC_TRY_STATEMENT("AlembicOCurvesSample_setUVs")

  AbcG::OCurvesSchema::Sample * abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicOCurvesSample, AbcG::OCurvesSchema::Sample>(this_, abcThis_)){
    setError("Error in AlembicOCurvesSample_setUVs. unable to convert: this_");
    return;
  }
  AbcG::OTypedGeomParam<Abc::V2fTPTraits>::Sample * abcValues = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicOVec2VfGeomParamSample, AbcG::OTypedGeomParam<Abc::V2fTPTraits>::Sample>(values, abcValues)){
    setError("Error in AlembicOCurvesSample_setUVs. unable to convert: values");
    return;
  }
  abcThis_->setUVs(*abcValues);

  ALEMBIC_CATCH_STATEMENT("AlembicOCurvesSample_setUVs")
}

// Defined at OCurvesSample.kl:25:1
FABRIC_EXT_EXPORT void AlembicOCurvesSample_getSelfBounds(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::Box3 >::Result _result,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOCurvesSample >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicOCurvesSample_getSelfBounds")

  AbcG::OCurvesSchema::Sample * abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicOCurvesSample, AbcG::OCurvesSchema::Sample>(this_, abcThis_)){
    setError("Error in AlembicOCurvesSample_getSelfBounds. unable to convert: this_");
    return;
  }
  Abc::Box3d abc_result = abcThis_->getSelfBounds();
  conv_to_Box3(abc_result, _result);

  ALEMBIC_CATCH_STATEMENT("AlembicOCurvesSample_getSelfBounds")
}

// Defined at OCurvesSample.kl:26:1
FABRIC_EXT_EXPORT void AlembicOCurvesSample_setSelfBounds(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOCurvesSample >::IOParam this_,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::Box3 >::INParam bounds
)
{
  ALEMBIC_TRY_STATEMENT("AlembicOCurvesSample_setSelfBounds")

  AbcG::OCurvesSchema::Sample * abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicOCurvesSample, AbcG::OCurvesSchema::Sample>(this_, abcThis_)){
    setError("Error in AlembicOCurvesSample_setSelfBounds. unable to convert: this_");
    return;
  }
  Abc::Box3d abcBounds;
  if(!conv_from_Box3(bounds, abcBounds)){
    setError("Error in AlembicOCurvesSample_setSelfBounds. unable to convert: bounds");
    return;
  }
  abcThis_->setSelfBounds(abcBounds);

  ALEMBIC_CATCH_STATEMENT("AlembicOCurvesSample_setSelfBounds")
}

// Defined at OCurvesSample.kl:27:1
FABRIC_EXT_EXPORT void AlembicOCurvesSample_getVelocities(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::ExternalArray< Fabric::EDK::KL::Vec3 > >::Result _result,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOCurvesSample >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicOCurvesSample_getVelocities")

  AbcG::OCurvesSchema::Sample * abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicOCurvesSample, AbcG::OCurvesSchema::Sample>(this_, abcThis_)){
    setError("Error in AlembicOCurvesSample_getVelocities. unable to convert: this_");
    return;
  }
  AlembicOExtractExternalArrayFromSample(Abc::V3fArraySample, KL::Vec3, getVelocities)
  ALEMBIC_CATCH_STATEMENT("AlembicOCurvesSample_getVelocities")
}

// Defined at OCurvesSample.kl:28:1
FABRIC_EXT_EXPORT void AlembicOCurvesSample_setVelocities(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOCurvesSample >::IOParam this_,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::ExternalArray< Fabric::EDK::KL::Vec3 > >::INParam values
)
{
  ALEMBIC_TRY_STATEMENT("AlembicOCurvesSample_setVelocities")

  AbcG::OCurvesSchema::Sample * abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicOCurvesSample, AbcG::OCurvesSchema::Sample>(this_, abcThis_)){
    setError("Error in AlembicOCurvesSample_setVelocities. unable to convert: this_");
    return;
  }
  AlembicPackExternalArrayToSample(Abc::V3fArraySample, Abc::V3f, setVelocities)
  ALEMBIC_CATCH_STATEMENT("AlembicOCurvesSample_setVelocities")
}

// Defined at OCurvesSample.kl:29:1
FABRIC_EXT_EXPORT void AlembicOCurvesSample_getNormals(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOVec3NfGeomParamSample >::Result _result,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOCurvesSample >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicOCurvesSample_getNormals")

  AbcG::OCurvesSchema::Sample * abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicOCurvesSample, AbcG::OCurvesSchema::Sample>(this_, abcThis_)){
    setError("Error in AlembicOCurvesSample_getNormals. unable to convert: this_");
    return;
  }

  AbcG::OTypedGeomParam<Abc::N3fTPTraits>::Sample * abc_result = new AbcG::OTypedGeomParam<Abc::N3fTPTraits>::Sample(abcThis_->getNormals());
  conv_to_AbcBasePtr<KL::AlembicOVec3NfGeomParamSample, AbcG::OTypedGeomParam<Abc::N3fTPTraits>::Sample>(abc_result, _result, true);
    
  ALEMBIC_CATCH_STATEMENT("AlembicOCurvesSample_getNormals")
}

// Defined at OCurvesSample.kl:30:1
FABRIC_EXT_EXPORT void AlembicOCurvesSample_setNormals(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOCurvesSample >::IOParam this_,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOVec3NfGeomParamSample >::INParam values
)
{
  ALEMBIC_TRY_STATEMENT("AlembicOCurvesSample_setNormals")

  AbcG::OCurvesSchema::Sample * abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicOCurvesSample, AbcG::OCurvesSchema::Sample>(this_, abcThis_)){
    setError("Error in AlembicOCurvesSample_setNormals. unable to convert: this_");
    return;
  }
  AbcG::OTypedGeomParam<Abc::N3fTPTraits>::Sample * abcValues = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicOVec3NfGeomParamSample, AbcG::OTypedGeomParam<Abc::N3fTPTraits>::Sample>(values, abcValues)){
    setError("Error in AlembicOCurvesSample_setNormals. unable to convert: values");
    return;
  }
  abcThis_->setNormals(*abcValues);

  ALEMBIC_CATCH_STATEMENT("AlembicOCurvesSample_setNormals")
}

// Defined at OCurvesSample.kl:31:1
FABRIC_EXT_EXPORT void AlembicOCurvesSample_setBasis(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOCurvesSample >::IOParam this_,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::UInt32 >::INParam basis
)
{
  ALEMBIC_TRY_STATEMENT("AlembicOCurvesSample_setBasis")

  AbcG::OCurvesSchema::Sample * abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicOCurvesSample, AbcG::OCurvesSchema::Sample>(this_, abcThis_)){
    setError("Error in AlembicOCurvesSample_setBasis. unable to convert: this_");
    return;
  }
  unsigned int abcBasis = 0;
  if(!conv_from_baseType<KL::UInt32, unsigned int>(basis, abcBasis)){
    setError("Error in AlembicOCurvesSample_setBasis. unable to convert: basis");
    return;
  }
  abcThis_->setBasis((AbcG::BasisType)abcBasis);
  
  ALEMBIC_CATCH_STATEMENT("AlembicOCurvesSample_setBasis")
}

// Defined at OCurvesSample.kl:32:1
FABRIC_EXT_EXPORT Fabric::EDK::KL::UInt32 AlembicOCurvesSample_getBasis(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOCurvesSample >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicOCurvesSample_getBasis")

  AbcG::OCurvesSchema::Sample * abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicOCurvesSample, AbcG::OCurvesSchema::Sample>(this_, abcThis_)){
    setError("Error in AlembicOCurvesSample_getBasis. unable to convert: this_");
    return 0;
  }
  unsigned int abc_result = abcThis_->getBasis();
  KL::UInt32 _result;
  conv_to_baseType<KL::UInt32, unsigned int>(abc_result, _result);
  return _result;

  ALEMBIC_CATCH_STATEMENT_RETURN("AlembicOCurvesSample_getBasis", 0)
}

// Defined at OCurvesSample.kl:33:1
FABRIC_EXT_EXPORT void AlembicOCurvesSample_setKnots(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOCurvesSample >::IOParam this_,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::ExternalArray< Fabric::EDK::KL::Float32 > >::INParam values
)
{
  ALEMBIC_TRY_STATEMENT("AlembicOCurvesSample_setKnots")

  AbcG::OCurvesSchema::Sample * abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicOCurvesSample, AbcG::OCurvesSchema::Sample>(this_, abcThis_)){
    setError("Error in AlembicOCurvesSample_setKnots. unable to convert: this_");
    return;
  }
  AlembicPackExternalArrayToSample(Abc::FloatArraySample, Abc::float32_t, setKnots)
  ALEMBIC_CATCH_STATEMENT("AlembicOCurvesSample_setKnots")
}

// Defined at OCurvesSample.kl:34:1
FABRIC_EXT_EXPORT void AlembicOCurvesSample_getKnots(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::ExternalArray< Fabric::EDK::KL::Float32 > >::Result _result,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOCurvesSample >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicOCurvesSample_getKnots")

  AbcG::OCurvesSchema::Sample * abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicOCurvesSample, AbcG::OCurvesSchema::Sample>(this_, abcThis_)){
    setError("Error in AlembicOCurvesSample_getKnots. unable to convert: this_");
    return;
  }
  AlembicOExtractExternalArrayFromSample(Abc::FloatArraySample, KL::Float32, getKnots)
  ALEMBIC_CATCH_STATEMENT("AlembicOCurvesSample_getKnots")
}

// Defined at OCurvesSample.kl:35:1
FABRIC_EXT_EXPORT void AlembicOCurvesSample_setOrders(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOCurvesSample >::IOParam this_,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::ExternalArray< Fabric::EDK::KL::UInt8 > >::INParam values
)
{
  ALEMBIC_TRY_STATEMENT("AlembicOCurvesSample_setOrders")

  AbcG::OCurvesSchema::Sample * abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicOCurvesSample, AbcG::OCurvesSchema::Sample>(this_, abcThis_)){
    setError("Error in AlembicOCurvesSample_setOrders. unable to convert: this_");
    return;
  }
  AlembicPackExternalArrayToSample(Abc::UcharArraySample, Abc::uint8_t, setOrders)
  ALEMBIC_CATCH_STATEMENT("AlembicOCurvesSample_setOrders")
}

// Defined at OCurvesSample.kl:36:1
FABRIC_EXT_EXPORT void AlembicOCurvesSample_getOrders(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::ExternalArray< Fabric::EDK::KL::UInt8 > >::Result _result,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOCurvesSample >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicOCurvesSample_getOrders")

  AbcG::OCurvesSchema::Sample * abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicOCurvesSample, AbcG::OCurvesSchema::Sample>(this_, abcThis_)){
    setError("Error in AlembicOCurvesSample_getOrders. unable to convert: this_");
    return;
  }
  AlembicOExtractExternalArrayFromSample(Abc::UcharArraySample, KL::UInt8, getOrders)
  ALEMBIC_CATCH_STATEMENT("AlembicOCurvesSample_getOrders")
}