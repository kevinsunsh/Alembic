////////////////////////////////////////////////////////////////
// THIS FILE IS AUTOMATICALLY GENERATED -- DO NOT MODIFY!!
// USE COPY & PASTE TO MAKE USE OF THE FUNCTION IMPLEMENTATIONS!!
////////////////////////////////////////////////////////////////
// Generated by kl2exe version 1.11.2
////////////////////////////////////////////////////////////////

#include "AlembicXformSample_functions.h"


#include "extension.h"
  

using namespace Fabric::EDK;


// Defined at XformSample.kl:11:1
FABRIC_EXT_EXPORT void AlembicXformSample_construct(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicXformSample >::IOParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicXformSample_construct")

  construct_AbcBasePtr(AbcG::XformSample)
  
  ALEMBIC_CATCH_STATEMENT("AlembicXformSample_construct")
}

// Defined at XformSample.kl:12:1
FABRIC_EXT_EXPORT void AlembicXformSample_free(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicXformSample >::IOParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicXformSample_free")

  AbcG::XformSample * abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicXformSample, AbcG::XformSample>(this_, abcThis_)){
    return;
  }
  free_AbcBasePtr(AbcG::XformSample)
  
  ALEMBIC_CATCH_STATEMENT("AlembicXformSample_free")
}

// Defined at XformSample.kl:14:1
FABRIC_EXT_EXPORT void AlembicXformSample_setInheritsXforms(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicXformSample >::IOParam this_,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::Boolean >::INParam inherits
)
{
  ALEMBIC_TRY_STATEMENT("AlembicXformSample_setInheritsXforms")

  AbcG::XformSample * abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicXformSample, AbcG::XformSample>(this_, abcThis_)){
    setError("Error in AlembicXformSample_setInheritsXforms. unable to convert: this_");
    return;
  }
  bool abcInherits = false;
  if(!conv_from_baseType<KL::Boolean, bool>(inherits, abcInherits)){
    setError("Error in AlembicXformSample_setInheritsXforms. unable to convert: inherits");
    return;
  }
  abcThis_->setInheritsXforms(abcInherits);

  ALEMBIC_CATCH_STATEMENT("AlembicXformSample_setInheritsXforms")
}

// Defined at XformSample.kl:15:1
FABRIC_EXT_EXPORT Fabric::EDK::KL::Boolean AlembicXformSample_getInheritsXforms(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicXformSample >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicXformSample_getInheritsXforms")

  AbcG::XformSample * abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicXformSample, AbcG::XformSample>(this_, abcThis_)){
    setError("Error in AlembicXformSample_getInheritsXforms. unable to convert: this_");
    return false;
  }
  bool abc_result = abcThis_->getInheritsXforms();
  KL::Boolean _result;
  conv_to_baseType<KL::Boolean, bool>(abc_result, _result);
  return _result;

  ALEMBIC_CATCH_STATEMENT_RETURN("AlembicXformSample_getInheritsXforms", false)
}

// Defined at XformSample.kl:16:1
FABRIC_EXT_EXPORT void AlembicXformSample_setMatrix(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicXformSample >::IOParam this_,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::Mat44 >::INParam matrix
)
{
  ALEMBIC_TRY_STATEMENT("AlembicXformSample_setMatrix")

  AbcG::XformSample * abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicXformSample, AbcG::XformSample>(this_, abcThis_)){
    setError("Error in AlembicXformSample_setMatrix. unable to convert: this_");
    return;
  }
  Abc::M44d abcMatrix;
  if(!conv_from_Mat44(matrix, abcMatrix)){
    setError("Error in AlembicXformSample_setMatrix. unable to convert: matrix");
    return;
  }
  abcThis_->setMatrix(abcMatrix);

  ALEMBIC_CATCH_STATEMENT("AlembicXformSample_setMatrix")
}

// Defined at XformSample.kl:17:1
FABRIC_EXT_EXPORT void AlembicXformSample_getMatrix(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::Mat44 >::Result _result,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicXformSample >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicXformSample_getMatrix")

  AbcG::XformSample * abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicXformSample, AbcG::XformSample>(this_, abcThis_)){
    setError("Error in AlembicXformSample_getMatrix. unable to convert: this_");
    return;
  }
  Abc::M44d abc_result = abcThis_->getMatrix();
  conv_to_Mat44(abc_result, _result);

  ALEMBIC_CATCH_STATEMENT("AlembicXformSample_getMatrix")
}

// Defined at XformSample.kl:18:1
FABRIC_EXT_EXPORT Fabric::EDK::KL::Boolean AlembicXformSample_isTopologyEqual(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicXformSample >::INParam this_,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicXformSample >::INParam otherSample
)
{
  ALEMBIC_TRY_STATEMENT("AlembicXformSample_isTopologyEqual")

  AbcG::XformSample * abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicXformSample, AbcG::XformSample>(this_, abcThis_)){
    setError("Error in AlembicXformSample_isTopologyEqual. unable to convert: this_");
    return false;
  }
  AbcG::XformSample * abcOtherSample = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicXformSample, AbcG::XformSample>(otherSample, abcOtherSample)){
    setError("Error in AlembicXformSample_isTopologyEqual. unable to convert: otherSample");
    return false;
  }
  return abcThis_->isTopologyEqual(*abcOtherSample);
  
  ALEMBIC_CATCH_STATEMENT_RETURN("AlembicXformSample_isTopologyEqual", false)
}

// Defined at XformSample.kl:19:1
FABRIC_EXT_EXPORT Fabric::EDK::KL::Boolean AlembicXformSample_getIsTopologyFrozen(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicXformSample >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicXformSample_getIsTopologyFrozen")

  AbcG::XformSample * abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicXformSample, AbcG::XformSample>(this_, abcThis_)){
    setError("Error in AlembicXformSample_getIsTopologyFrozen. unable to convert: this_");
    return false;
  }
  bool abc_result = abcThis_->getIsTopologyFrozen();
  KL::Boolean _result;
  conv_to_baseType<KL::Boolean, bool>(abc_result, _result);
  return _result;

  ALEMBIC_CATCH_STATEMENT_RETURN("AlembicXformSample_getIsTopologyFrozen", false)
}
