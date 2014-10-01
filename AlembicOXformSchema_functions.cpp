////////////////////////////////////////////////////////////////
// THIS FILE IS AUTOMATICALLY GENERATED -- DO NOT MODIFY!!
// USE COPY & PASTE TO MAKE USE OF THE FUNCTION IMPLEMENTATIONS!!
////////////////////////////////////////////////////////////////
// Generated by kl2exe version 1.11.2
////////////////////////////////////////////////////////////////

#include "AlembicOXformSchema_functions.h"


#include "extension.h"
  

using namespace Fabric::EDK;


// Defined at OXformSchema.kl:9:1
FABRIC_EXT_EXPORT void AlembicOXformSchema_construct(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOXformSchema >::IOParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicOXformSchema_construct")

  this_->handle = NULL;
  
  ALEMBIC_CATCH_STATEMENT("AlembicOXformSchema_construct")
}

// Defined at OXformSchema.kl:10:1
FABRIC_EXT_EXPORT void AlembicOXformSchema_free(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOXformSchema >::IOParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicOXformSchema_free")

  AbcG::OXformSchema* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicOXformSchema, AbcG::OXformSchema>(this_, abcThis_)){
    return;
  }
  free_AbcBasePtr(AbcG::OXformSchema)
  
  ALEMBIC_CATCH_STATEMENT("AlembicOXformSchema_free")
}

// Defined at OXformSchema.kl:11:1
FABRIC_EXT_EXPORT Fabric::EDK::KL::Boolean AlembicOXformSchema_valid(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOXformSchema >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicOXformSchema_valid")

  AbcG::OXformSchema* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicOXformSchema, AbcG::OXformSchema>(this_, abcThis_)){
    return false;
  }
  bool abc_result = abcThis_->valid();
  KL::Boolean _result;
  conv_to_baseType<KL::Boolean, bool>(abc_result, _result);
  return _result;

  ALEMBIC_CATCH_STATEMENT_RETURN("AlembicOXformSchema_valid", false)
}

// Defined at OXformSchema.kl:14:1
FABRIC_EXT_EXPORT void AlembicOXformSchema_getTimeSampling(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicTimeSampling >::Result _result,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOXformSchema >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicOXformSchema_getTimeSampling")

  AbcG::OXformSchema* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicOXformSchema, AbcG::OXformSchema>(this_, abcThis_)){
    setError("Error in AlembicOXformSchema_getTimeSampling. unable to convert: this_");
    return;
  }
  Abc::TimeSamplingPtr abc_result = abcThis_->getTimeSampling();
  conv_to_AbcBase<KL::AlembicTimeSampling, Abc::TimeSamplingPtr>(abc_result, _result);

  ALEMBIC_CATCH_STATEMENT("AlembicOXformSchema_getTimeSampling")
}

// Defined at OXformSchema.kl:15:1
FABRIC_EXT_EXPORT Fabric::EDK::KL::UInt32 AlembicOXformSchema_getNumSamples(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOXformSchema >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicOXformSchema_getNumSamples")

  AbcG::OXformSchema* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicOXformSchema, AbcG::OXformSchema>(this_, abcThis_)){
    setError("Error in AlembicOXformSchema_getNumSamples. unable to convert: this_");
    return 0;
  }
  unsigned int abc_result = abcThis_->getNumSamples();
  KL::UInt32 _result;
  conv_to_baseType<KL::UInt32, unsigned int>(abc_result, _result);
  return _result;

  ALEMBIC_CATCH_STATEMENT_RETURN("AlembicOXformSchema_getNumSamples", 0)
}

// Defined at OXformSchema.kl:16:1
FABRIC_EXT_EXPORT void AlembicOXformSchema_set(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOXformSchema >::IOParam this_,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicXformSample >::INParam sample
)
{
  ALEMBIC_TRY_STATEMENT("AlembicOXformSchema_set")

  AbcG::OXformSchema* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicOXformSchema, AbcG::OXformSchema>(this_, abcThis_)){
    setError("Error in AlembicOXformSchema_set. unable to convert: this_");
    return;
  }
  AbcG::XformSample * abcSample = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicXformSample, AbcG::XformSample>(sample, abcSample)){
    setError("Error in AlembicOXformSchema_set. unable to convert: sample");
    return;
  }
  abcThis_->set(*abcSample);

  ALEMBIC_CATCH_STATEMENT("AlembicOXformSchema_set")
}

// Defined at OXformSchema.kl:17:1
FABRIC_EXT_EXPORT void AlembicOXformSchema_setFromPrevious(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOXformSchema >::IOParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicOXformSchema_setFromPrevious")

  AbcG::OXformSchema* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicOXformSchema, AbcG::OXformSchema>(this_, abcThis_)){
    setError("Error in AlembicOXformSchema_setFromPrevious. unable to convert: this_");
    return;
  }
  abcThis_->setFromPrevious();

  ALEMBIC_CATCH_STATEMENT("AlembicOXformSchema_setFromPrevious")
}

// Defined at OXformSchema.kl:18:1
FABRIC_EXT_EXPORT void AlembicOXformSchema_setTimeSampling(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOXformSchema >::IOParam this_,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::UInt32 >::INParam index
)
{
  ALEMBIC_TRY_STATEMENT("AlembicOXformSchema_setTimeSampling")

  AbcG::OXformSchema* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicOXformSchema, AbcG::OXformSchema>(this_, abcThis_)){
    setError("Error in AlembicOXformSchema_setTimeSampling. unable to convert: this_");
    return;
  }
  unsigned int abcIndex = 0;
  if(!conv_from_baseType<KL::UInt32, unsigned int>(index, abcIndex)){
    setError("Error in AlembicOXformSchema_setTimeSampling. unable to convert: index");
    return;
  }
  abcThis_->setTimeSampling(abcIndex);

  ALEMBIC_CATCH_STATEMENT("AlembicOXformSchema_setTimeSampling")
}

// Defined at OXformSchema.kl:19:1
FABRIC_EXT_EXPORT void AlembicOXformSchema_getArbGeomParams(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOCompoundProperty >::Result _result,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOXformSchema >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicOXformSchema_getArbGeomParams")

  AbcG::OXformSchema* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicOXformSchema, AbcG::OXformSchema>(this_, abcThis_)){
    setError("Error in AlembicOXformSchema_getArbGeomParams. unable to convert: this_");
    return;
  }
  Abc::OCompoundProperty* abc_result = new Abc::OCompoundProperty(abcThis_->getArbGeomParams());
  conv_to_AbcBasePtr<KL::AlembicOCompoundProperty, Abc::OCompoundProperty>(abc_result, _result, true);

  ALEMBIC_CATCH_STATEMENT("AlembicOXformSchema_getArbGeomParams")
}

// Defined at OXformSchema.kl:20:1
FABRIC_EXT_EXPORT void AlembicOXformSchema_getUserProperties(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOCompoundProperty >::Result _result,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOXformSchema >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicOXformSchema_getUserProperties")

  AbcG::OXformSchema* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicOXformSchema, AbcG::OXformSchema>(this_, abcThis_)){
    setError("Error in AlembicOXformSchema_getUserProperties. unable to convert: this_");
    return;
  }
  Abc::OCompoundProperty* abc_result = new Abc::OCompoundProperty(abcThis_->getUserProperties());
  conv_to_AbcBasePtr<KL::AlembicOCompoundProperty, Abc::OCompoundProperty>(abc_result, _result, true);

  ALEMBIC_CATCH_STATEMENT("AlembicOXformSchema_getUserProperties")
}

// Defined at OXformSchema.kl:21:1
FABRIC_EXT_EXPORT void AlembicOXformSchema_getChildBoundsProperty(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOScalarProperty >::Result _result,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOXformSchema >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicOXformSchema_getChildBoundsProperty")

  AbcG::OXformSchema* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicOXformSchema, AbcG::OXformSchema>(this_, abcThis_)){
    setError("Error in AlembicOXformSchema_getChildBoundsProperty. unable to convert: this_");
    return;
  }
  Abc::OScalarProperty* abc_result = new Abc::OScalarProperty(abcThis_->getChildBoundsProperty());
  conv_to_AbcBasePtr<KL::AlembicOScalarProperty, Abc::OScalarProperty>(abc_result, _result, true);

  ALEMBIC_CATCH_STATEMENT("AlembicOXformSchema_getChildBoundsProperty")
}