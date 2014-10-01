////////////////////////////////////////////////////////////////
// THIS FILE IS AUTOMATICALLY GENERATED -- DO NOT MODIFY!!
// USE COPY & PASTE TO MAKE USE OF THE FUNCTION IMPLEMENTATIONS!!
////////////////////////////////////////////////////////////////
// Generated by kl2exe version 1.11.2
////////////////////////////////////////////////////////////////

#include "AlembicISubDSample_functions.h"


#include "extension.h"
  

using namespace Fabric::EDK;


// Defined at ISubDSample.kl:9:1
FABRIC_EXT_EXPORT void AlembicISubDSample_construct(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicISubDSample >::IOParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicISubDSample_construct")

  construct_AbcBasePtr(AbcG::ISubDSchema::Sample)
  
  ALEMBIC_CATCH_STATEMENT("AlembicISubDSample_construct")
}

// Defined at ISubDSample.kl:10:1
FABRIC_EXT_EXPORT void AlembicISubDSample_free(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicISubDSample >::IOParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicISubDSample_free")

  AbcG::ISubDSchema::Sample * abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicISubDSample, AbcG::ISubDSchema::Sample>(this_, abcThis_)){
    return;
  }
  free_AbcBasePtr(AbcG::ISubDSchema::Sample)
  
  ALEMBIC_CATCH_STATEMENT("AlembicISubDSample_free")
}

// Defined at ISubDSample.kl:11:1
FABRIC_EXT_EXPORT Fabric::EDK::KL::Boolean AlembicISubDSample_valid(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicISubDSample >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicISubDSample_valid")

  AbcG::ISubDSchema::Sample * abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicISubDSample, AbcG::ISubDSchema::Sample>(this_, abcThis_)){
    return false;
  }
  bool abc_result = abcThis_->valid();
  KL::Boolean _result;
  conv_to_baseType<KL::Boolean, bool>(abc_result, _result);
  return _result;

  ALEMBIC_CATCH_STATEMENT_RETURN("AlembicISubDSample_valid", false)
}

// Defined at ISubDSample.kl:14:1
FABRIC_EXT_EXPORT void AlembicISubDSample_getPositions(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::ExternalArray< Fabric::EDK::KL::Vec3 > >::Result _result,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicISubDSample >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicISubDSample_getPositions")

  AbcG::ISubDSchema::Sample * abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicISubDSample, AbcG::ISubDSchema::Sample>(this_, abcThis_)){
    setError("Error in AlembicISubDSample_getPositions. unable to convert: this_");
    return;
  }
  AlembicIExtractExternalArrayFromSample(Abc::P3fArraySamplePtr, KL::Vec3, getPositions)
  ALEMBIC_CATCH_STATEMENT("AlembicISubDSample_getPositions")
}

// Defined at ISubDSample.kl:15:1
FABRIC_EXT_EXPORT void AlembicISubDSample_getFaceIndices(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::ExternalArray< Fabric::EDK::KL::SInt32 > >::Result _result,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicISubDSample >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicISubDSample_getFaceIndices")

  AbcG::ISubDSchema::Sample * abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicISubDSample, AbcG::ISubDSchema::Sample>(this_, abcThis_)){
    setError("Error in AlembicISubDSample_getFaceIndices. unable to convert: this_");
    return;
  }
  AlembicIExtractExternalArrayFromSample(Abc::Int32ArraySamplePtr, KL::SInt32, getFaceIndices)
  ALEMBIC_CATCH_STATEMENT("AlembicISubDSample_getFaceIndices")
}

// Defined at ISubDSample.kl:16:1
FABRIC_EXT_EXPORT void AlembicISubDSample_getFaceCounts(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::ExternalArray< Fabric::EDK::KL::SInt32 > >::Result _result,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicISubDSample >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicISubDSample_getFaceCounts")

  AbcG::ISubDSchema::Sample * abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicISubDSample, AbcG::ISubDSchema::Sample>(this_, abcThis_)){
    setError("Error in AlembicISubDSample_getFaceCounts. unable to convert: this_");
    return;
  }
  AlembicIExtractExternalArrayFromSample(Abc::Int32ArraySamplePtr, KL::SInt32, getFaceCounts)
  ALEMBIC_CATCH_STATEMENT("AlembicISubDSample_getFaceCounts")
}

// Defined at ISubDSample.kl:17:1
FABRIC_EXT_EXPORT Fabric::EDK::KL::SInt32 AlembicISubDSample_getFaceVaryingInterpolateBoundary(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicISubDSample >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicISubDSample_getFaceVaryingInterpolateBoundary")

  AbcG::ISubDSchema::Sample * abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicISubDSample, AbcG::ISubDSchema::Sample>(this_, abcThis_)){
    setError("Error in AlembicISubDSample_getFaceVaryingInterpolateBoundary. unable to convert: this_");
    return 0;
  }
  int abc_result = abcThis_->getFaceVaryingInterpolateBoundary();
  KL::SInt32 _result;
  conv_to_baseType<KL::SInt32, int>(abc_result, _result);
  return _result;

  ALEMBIC_CATCH_STATEMENT_RETURN("AlembicISubDSample_getFaceVaryingInterpolateBoundary", 0)
}

// Defined at ISubDSample.kl:18:1
FABRIC_EXT_EXPORT Fabric::EDK::KL::SInt32 AlembicISubDSample_getFaceVaryingPropagateCorners(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicISubDSample >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicISubDSample_getFaceVaryingPropagateCorners")

  AbcG::ISubDSchema::Sample * abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicISubDSample, AbcG::ISubDSchema::Sample>(this_, abcThis_)){
    setError("Error in AlembicISubDSample_getFaceVaryingPropagateCorners. unable to convert: this_");
    return 0;
  }
  int abc_result = abcThis_->getFaceVaryingPropagateCorners();
  KL::SInt32 _result;
  conv_to_baseType<KL::SInt32, int>(abc_result, _result);
  return _result;

  ALEMBIC_CATCH_STATEMENT_RETURN("AlembicISubDSample_getFaceVaryingPropagateCorners", 0)
}

// Defined at ISubDSample.kl:19:1
FABRIC_EXT_EXPORT Fabric::EDK::KL::SInt32 AlembicISubDSample_getInterpolateBoundary(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicISubDSample >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicISubDSample_getInterpolateBoundary")

  AbcG::ISubDSchema::Sample * abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicISubDSample, AbcG::ISubDSchema::Sample>(this_, abcThis_)){
    setError("Error in AlembicISubDSample_getInterpolateBoundary. unable to convert: this_");
    return 0;
  }
  int abc_result = abcThis_->getInterpolateBoundary();
  KL::SInt32 _result;
  conv_to_baseType<KL::SInt32, int>(abc_result, _result);
  return _result;

  ALEMBIC_CATCH_STATEMENT_RETURN("AlembicISubDSample_getInterpolateBoundary", 0)
}

// Defined at ISubDSample.kl:20:1
FABRIC_EXT_EXPORT void AlembicISubDSample_getCreaseIndices(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::ExternalArray< Fabric::EDK::KL::SInt32 > >::Result _result,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicISubDSample >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicISubDSample_getCreaseIndices")

  AbcG::ISubDSchema::Sample * abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicISubDSample, AbcG::ISubDSchema::Sample>(this_, abcThis_)){
    setError("Error in AlembicISubDSample_getCreaseIndices. unable to convert: this_");
    return;
  }
  AlembicIExtractExternalArrayFromSample(Abc::Int32ArraySamplePtr, KL::SInt32, getCreaseIndices)
  ALEMBIC_CATCH_STATEMENT("AlembicISubDSample_getCreaseIndices")
}

// Defined at ISubDSample.kl:21:1
FABRIC_EXT_EXPORT void AlembicISubDSample_getCreaseLengths(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::ExternalArray< Fabric::EDK::KL::SInt32 > >::Result _result,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicISubDSample >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicISubDSample_getCreaseLengths")

  AbcG::ISubDSchema::Sample * abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicISubDSample, AbcG::ISubDSchema::Sample>(this_, abcThis_)){
    setError("Error in AlembicISubDSample_getCreaseLengths. unable to convert: this_");
    return;
  }
  AlembicIExtractExternalArrayFromSample(Abc::Int32ArraySamplePtr, KL::SInt32, getCreaseLengths)
  ALEMBIC_CATCH_STATEMENT("AlembicISubDSample_getCreaseLengths")
}

// Defined at ISubDSample.kl:22:1
FABRIC_EXT_EXPORT void AlembicISubDSample_getCreaseSharpnesses(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::ExternalArray< Fabric::EDK::KL::Float32 > >::Result _result,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicISubDSample >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicISubDSample_getCreaseSharpnesses")

  AbcG::ISubDSchema::Sample * abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicISubDSample, AbcG::ISubDSchema::Sample>(this_, abcThis_)){
    setError("Error in AlembicISubDSample_getCreaseSharpnesses. unable to convert: this_");
    return;
  }
  AlembicIExtractExternalArrayFromSample(Abc::FloatArraySamplePtr, KL::Float32, getCreaseSharpnesses)
  ALEMBIC_CATCH_STATEMENT("AlembicISubDSample_getCreaseSharpnesses")
}

// Defined at ISubDSample.kl:23:1
FABRIC_EXT_EXPORT void AlembicISubDSample_getCornerIndices(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::ExternalArray< Fabric::EDK::KL::SInt32 > >::Result _result,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicISubDSample >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicISubDSample_getCornerIndices")

  AbcG::ISubDSchema::Sample * abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicISubDSample, AbcG::ISubDSchema::Sample>(this_, abcThis_)){
    setError("Error in AlembicISubDSample_getCornerIndices. unable to convert: this_");
    return;
  }
  AlembicIExtractExternalArrayFromSample(Abc::Int32ArraySamplePtr, KL::SInt32, getCornerIndices)
  ALEMBIC_CATCH_STATEMENT("AlembicISubDSample_getCornerIndices")
}

// Defined at ISubDSample.kl:24:1
FABRIC_EXT_EXPORT void AlembicISubDSample_getCornerSharpnesses(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::ExternalArray< Fabric::EDK::KL::Float32 > >::Result _result,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicISubDSample >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicISubDSample_getCornerSharpnesses")

  AbcG::ISubDSchema::Sample * abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicISubDSample, AbcG::ISubDSchema::Sample>(this_, abcThis_)){
    setError("Error in AlembicISubDSample_getCornerSharpnesses. unable to convert: this_");
    return;
  }
  AlembicIExtractExternalArrayFromSample(Abc::FloatArraySamplePtr, KL::Float32, getCornerSharpnesses)
  ALEMBIC_CATCH_STATEMENT("AlembicISubDSample_getCornerSharpnesses")
}

// Defined at ISubDSample.kl:25:1
FABRIC_EXT_EXPORT void AlembicISubDSample_getHoles(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::ExternalArray< Fabric::EDK::KL::SInt32 > >::Result _result,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicISubDSample >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicISubDSample_getHoles")

  AbcG::ISubDSchema::Sample * abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicISubDSample, AbcG::ISubDSchema::Sample>(this_, abcThis_)){
    setError("Error in AlembicISubDSample_getHoles. unable to convert: this_");
    return;
  }
  AlembicIExtractExternalArrayFromSample(Abc::Int32ArraySamplePtr, KL::SInt32, getHoles)
  ALEMBIC_CATCH_STATEMENT("AlembicISubDSample_getHoles")
}

// Defined at ISubDSample.kl:26:1
FABRIC_EXT_EXPORT void AlembicISubDSample_getSubdivisionScheme(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::String >::Result _result,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicISubDSample >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicISubDSample_getSubdivisionScheme")

  AbcG::ISubDSchema::Sample * abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicISubDSample, AbcG::ISubDSchema::Sample>(this_, abcThis_)){
    setError("Error in AlembicISubDSample_getSubdivisionScheme. unable to convert: this_");
    return;
  }
  std::string abc_result = abcThis_->getSubdivisionScheme();
  conv_to_String(abc_result, _result);

  ALEMBIC_CATCH_STATEMENT("AlembicISubDSample_getSubdivisionScheme")
}

// Defined at ISubDSample.kl:27:1
FABRIC_EXT_EXPORT void AlembicISubDSample_getSelfBounds(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::Box3 >::Result _result,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicISubDSample >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicISubDSample_getSelfBounds")

  AbcG::ISubDSchema::Sample * abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicISubDSample, AbcG::ISubDSchema::Sample>(this_, abcThis_)){
    setError("Error in AlembicISubDSample_getSelfBounds. unable to convert: this_");
    return;
  }
  Abc::Box3d abc_result = abcThis_->getSelfBounds();
  conv_to_Box3(abc_result, _result);

  ALEMBIC_CATCH_STATEMENT("AlembicISubDSample_getSelfBounds")
}

// Defined at ISubDSample.kl:28:1
FABRIC_EXT_EXPORT void AlembicISubDSample_getVelocities(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::ExternalArray< Fabric::EDK::KL::Vec3 > >::Result _result,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicISubDSample >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicISubDSample_getVelocities")

  AbcG::ISubDSchema::Sample * abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicISubDSample, AbcG::ISubDSchema::Sample>(this_, abcThis_)){
    setError("Error in AlembicISubDSample_getVelocities. unable to convert: this_");
    return;
  }
  AlembicIExtractExternalArrayFromSample(Abc::V3fArraySamplePtr, KL::Vec3, getVelocities)
  ALEMBIC_CATCH_STATEMENT("AlembicISubDSample_getVelocities")
}
