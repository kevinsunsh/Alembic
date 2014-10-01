////////////////////////////////////////////////////////////////
// THIS FILE IS AUTOMATICALLY GENERATED -- DO NOT MODIFY!!
// USE COPY & PASTE TO MAKE USE OF THE FUNCTION IMPLEMENTATIONS!!
////////////////////////////////////////////////////////////////
// Generated by kl2exe version 1.11.2
////////////////////////////////////////////////////////////////

#include "AlembicOCameraSchema_functions.h"


#include "extension.h"
  

using namespace Fabric::EDK;


// Defined at OCameraSchema.kl:9:1
FABRIC_EXT_EXPORT void AlembicOCameraSchema_construct(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOCameraSchema >::IOParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicOCameraSchema_construct")

  this_->handle = NULL;
  
  ALEMBIC_CATCH_STATEMENT("AlembicOCameraSchema_construct")
}

// Defined at OCameraSchema.kl:10:1
FABRIC_EXT_EXPORT void AlembicOCameraSchema_free(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOCameraSchema >::IOParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicOCameraSchema_free")

  AbcG::OCameraSchema* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicOCameraSchema, AbcG::OCameraSchema>(this_, abcThis_)){
    return;
  }
  free_AbcBasePtr(AbcG::OCameraSchema)
  
  ALEMBIC_CATCH_STATEMENT("AlembicOCameraSchema_free")
}

// Defined at OCameraSchema.kl:11:1
FABRIC_EXT_EXPORT Fabric::EDK::KL::Boolean AlembicOCameraSchema_valid(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOCameraSchema >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicOCameraSchema_valid")

  AbcG::OCameraSchema* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicOCameraSchema, AbcG::OCameraSchema>(this_, abcThis_)){
    return false;
  }
  bool abc_result = abcThis_->valid();
  KL::Boolean _result;
  conv_to_baseType<KL::Boolean, bool>(abc_result, _result);
  return _result;

  ALEMBIC_CATCH_STATEMENT_RETURN("AlembicOCameraSchema_valid", false)
}

// Defined at OCameraSchema.kl:14:1
FABRIC_EXT_EXPORT void AlembicOCameraSchema_getTimeSampling(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicTimeSampling >::Result _result,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOCameraSchema >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicOCameraSchema_getTimeSampling")

  AbcG::OCameraSchema* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicOCameraSchema, AbcG::OCameraSchema>(this_, abcThis_)){
    setError("Error in AlembicOCameraSchema_getTimeSampling. unable to convert: this_");
    return;
  }
  Abc::TimeSamplingPtr abc_result = abcThis_->getTimeSampling();
  conv_to_AbcBase<KL::AlembicTimeSampling, Abc::TimeSamplingPtr>(abc_result, _result);

  ALEMBIC_CATCH_STATEMENT("AlembicOCameraSchema_getTimeSampling")
}

// Defined at OCameraSchema.kl:15:1
FABRIC_EXT_EXPORT Fabric::EDK::KL::UInt32 AlembicOCameraSchema_getNumSamples(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOCameraSchema >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicOCameraSchema_getNumSamples")

  AbcG::OCameraSchema* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicOCameraSchema, AbcG::OCameraSchema>(this_, abcThis_)){
    setError("Error in AlembicOCameraSchema_getNumSamples. unable to convert: this_");
    return 0;
  }
  unsigned int abc_result = abcThis_->getNumSamples();
  KL::UInt32 _result;
  conv_to_baseType<KL::UInt32, unsigned int>(abc_result, _result);
  return _result;

  ALEMBIC_CATCH_STATEMENT_RETURN("AlembicOCameraSchema_getNumSamples", 0)
}

// Defined at OCameraSchema.kl:16:1
FABRIC_EXT_EXPORT void AlembicOCameraSchema_set(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOCameraSchema >::IOParam this_,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicCameraSample >::INParam sample
)
{
  ALEMBIC_TRY_STATEMENT("AlembicOCameraSchema_set")

  AbcG::OCameraSchema* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicOCameraSchema, AbcG::OCameraSchema>(this_, abcThis_)){
    setError("Error in AlembicOCameraSchema_set. unable to convert: this_");
    return;
  }
  AbcG::CameraSample * abcSample = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicCameraSample, AbcG::CameraSample>(sample, abcSample)){
    setError("Error in AlembicOCameraSchema_set. unable to convert: sample");
    return;
  }
  abcThis_->set(*abcSample);

  ALEMBIC_CATCH_STATEMENT("AlembicOCameraSchema_set")
}

// Defined at OCameraSchema.kl:17:1
FABRIC_EXT_EXPORT void AlembicOCameraSchema_setFromPrevious(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOCameraSchema >::IOParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicOCameraSchema_setFromPrevious")

  AbcG::OCameraSchema* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicOCameraSchema, AbcG::OCameraSchema>(this_, abcThis_)){
    setError("Error in AlembicOCameraSchema_setFromPrevious. unable to convert: this_");
    return;
  }
  abcThis_->setFromPrevious();

  ALEMBIC_CATCH_STATEMENT("AlembicOCameraSchema_setFromPrevious")
}

// Defined at OCameraSchema.kl:18:1
FABRIC_EXT_EXPORT void AlembicOCameraSchema_setTimeSampling(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOCameraSchema >::IOParam this_,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::UInt32 >::INParam index
)
{
  ALEMBIC_TRY_STATEMENT("AlembicOCameraSchema_setTimeSampling")

  AbcG::OCameraSchema* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicOCameraSchema, AbcG::OCameraSchema>(this_, abcThis_)){
    setError("Error in AlembicOCameraSchema_setTimeSampling. unable to convert: this_");
    return;
  }
  unsigned int abcIndex = 0;
  if(!conv_from_baseType<KL::UInt32, unsigned int>(index, abcIndex)){
    setError("Error in AlembicOCameraSchema_setTimeSampling. unable to convert: index");
    return;
  }
  abcThis_->setTimeSampling(abcIndex);

  ALEMBIC_CATCH_STATEMENT("AlembicOCameraSchema_setTimeSampling")
}

// Defined at OCameraSchema.kl:19:1
FABRIC_EXT_EXPORT void AlembicOCameraSchema_getArbGeomParams(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOCompoundProperty >::Result _result,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOCameraSchema >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicOCameraSchema_getArbGeomParams")

  AbcG::OCameraSchema* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicOCameraSchema, AbcG::OCameraSchema>(this_, abcThis_)){
    setError("Error in AlembicOCameraSchema_getArbGeomParams. unable to convert: this_");
    return;
  }
  Abc::OCompoundProperty* abc_result = new Abc::OCompoundProperty(abcThis_->getArbGeomParams());
  conv_to_AbcBasePtr<KL::AlembicOCompoundProperty, Abc::OCompoundProperty>(abc_result, _result, true);

  ALEMBIC_CATCH_STATEMENT("AlembicOCameraSchema_getArbGeomParams")
}

// Defined at OCameraSchema.kl:20:1
FABRIC_EXT_EXPORT void AlembicOCameraSchema_getUserProperties(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOCompoundProperty >::Result _result,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOCameraSchema >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicOCameraSchema_getUserProperties")

  AbcG::OCameraSchema* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicOCameraSchema, AbcG::OCameraSchema>(this_, abcThis_)){
    setError("Error in AlembicOCameraSchema_getUserProperties. unable to convert: this_");
    return;
  }
  Abc::OCompoundProperty* abc_result = new Abc::OCompoundProperty(abcThis_->getUserProperties());
  conv_to_AbcBasePtr<KL::AlembicOCompoundProperty, Abc::OCompoundProperty>(abc_result, _result, true);

  ALEMBIC_CATCH_STATEMENT("AlembicOCameraSchema_getUserProperties")
}

// Defined at OCameraSchema.kl:21:1
FABRIC_EXT_EXPORT void AlembicOCameraSchema_getChildBoundsProperty(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOScalarProperty >::Result _result,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOCameraSchema >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicOCameraSchema_getChildBoundsProperty")

  AbcG::OCameraSchema* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicOCameraSchema, AbcG::OCameraSchema>(this_, abcThis_)){
    setError("Error in AlembicOCameraSchema_getChildBoundsProperty. unable to convert: this_");
    return;
  }
  Abc::OScalarProperty* abc_result = new Abc::OScalarProperty(abcThis_->getChildBoundsProperty());
  conv_to_AbcBasePtr<KL::AlembicOScalarProperty, Abc::OScalarProperty>(abc_result, _result, true);

  ALEMBIC_CATCH_STATEMENT("AlembicOCameraSchema_getChildBoundsProperty")
}