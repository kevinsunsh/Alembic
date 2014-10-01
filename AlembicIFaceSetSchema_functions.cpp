////////////////////////////////////////////////////////////////
// THIS FILE IS AUTOMATICALLY GENERATED -- DO NOT MODIFY!!
// USE COPY & PASTE TO MAKE USE OF THE FUNCTION IMPLEMENTATIONS!!
////////////////////////////////////////////////////////////////
// Generated by kl2exe version 1.11.2
////////////////////////////////////////////////////////////////

#include "AlembicIFaceSetSchema_functions.h"


#include "extension.h"
  

using namespace Fabric::EDK;


// Defined at IFaceSetSchema.kl:13:1
FABRIC_EXT_EXPORT void AlembicIFaceSetSchema_construct(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicIFaceSetSchema >::IOParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicIFaceSetSchema_construct")

  this_->handle = NULL;
  
  ALEMBIC_CATCH_STATEMENT("AlembicIFaceSetSchema_construct")
}

// Defined at IFaceSetSchema.kl:14:1
FABRIC_EXT_EXPORT void AlembicIFaceSetSchema_free(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicIFaceSetSchema >::IOParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicIFaceSetSchema_free")

  AbcG::IFaceSetSchema* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicIFaceSetSchema, AbcG::IFaceSetSchema>(this_, abcThis_)){
    return;
  }
  free_AbcBasePtr(AbcG::IFaceSetSchema)
  
  ALEMBIC_CATCH_STATEMENT("AlembicIFaceSetSchema_free")
}

// Defined at IFaceSetSchema.kl:15:1
FABRIC_EXT_EXPORT Fabric::EDK::KL::Boolean AlembicIFaceSetSchema_valid(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicIFaceSetSchema >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicIFaceSetSchema_valid")

  AbcG::IFaceSetSchema* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicIFaceSetSchema, AbcG::IFaceSetSchema>(this_, abcThis_)){
    return false;
  }
  bool abc_result = abcThis_->valid();
  KL::Boolean _result;
  conv_to_baseType<KL::Boolean, bool>(abc_result, _result);
  return _result;

  ALEMBIC_CATCH_STATEMENT_RETURN("AlembicIFaceSetSchema_valid", false)
}

// Defined at IFaceSetSchema.kl:18:1
FABRIC_EXT_EXPORT Fabric::EDK::KL::Boolean AlembicIFaceSetSchema_isConstant(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicIFaceSetSchema >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicIFaceSetSchema_isConstant")

  AbcG::IFaceSetSchema* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicIFaceSetSchema, AbcG::IFaceSetSchema>(this_, abcThis_)){
    setError("Error in AlembicIFaceSetSchema_isConstant. unable to convert: this_");
    return false;
  }
  bool abc_result = abcThis_->isConstant();
  KL::Boolean _result;
  conv_to_baseType<KL::Boolean, bool>(abc_result, _result);
  return _result;

  ALEMBIC_CATCH_STATEMENT_RETURN("AlembicIFaceSetSchema_isConstant", false)
}

// Defined at IFaceSetSchema.kl:19:1
FABRIC_EXT_EXPORT void AlembicIFaceSetSchema_get(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicIFaceSetSchema >::INParam this_,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicIFaceSetSample >::IOParam sample,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicISampleSelector >::INParam ss
)
{
  ALEMBIC_TRY_STATEMENT("AlembicIFaceSetSchema_get")

  AbcG::IFaceSetSchema* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicIFaceSetSchema, AbcG::IFaceSetSchema>(this_, abcThis_)){
    setError("Error in AlembicIFaceSetSchema_get. unable to convert: this_");
    return;
  }
  AbcG::IFaceSetSchema::Sample * abcSample = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicIFaceSetSample, AbcG::IFaceSetSchema::Sample>(sample, abcSample)){
    setError("Error in AlembicIFaceSetSchema_get. unable to convert: sample");
    return;
  }
  Abc::ISampleSelector* abcSs = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicISampleSelector, Abc::ISampleSelector>(ss, abcSs)){
    setError("Error in AlembicIFaceSetSchema_get. unable to convert: ss");
    return;
  }
  abcThis_->get(*abcSample, *abcSs);
  conv_to_AbcBasePtr<KL::AlembicIFaceSetSample, AbcG::IFaceSetSchema::Sample>(abcSample, sample);

  ALEMBIC_CATCH_STATEMENT("AlembicIFaceSetSchema_get")
}

// Defined at IFaceSetSchema.kl:21:1
FABRIC_EXT_EXPORT void AlembicIFaceSetSchema_getTimeSampling(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicTimeSampling >::Result _result,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicIFaceSetSchema >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicIFaceSetSchema_getTimeSampling")

  AbcG::IFaceSetSchema* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicIFaceSetSchema, AbcG::IFaceSetSchema>(this_, abcThis_)){
    setError("Error in AlembicIFaceSetSchema_getTimeSampling. unable to convert: this_");
    return;
  }
  Abc::TimeSamplingPtr abc_result = abcThis_->getTimeSampling();
  conv_to_AbcBase<KL::AlembicTimeSampling, Abc::TimeSamplingPtr>(abc_result, _result);

  ALEMBIC_CATCH_STATEMENT("AlembicIFaceSetSchema_getTimeSampling")
}

// Defined at IFaceSetSchema.kl:22:1
FABRIC_EXT_EXPORT Fabric::EDK::KL::UInt32 AlembicIFaceSetSchema_getNumSamples(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicIFaceSetSchema >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicIFaceSetSchema_getNumSamples")

  AbcG::IFaceSetSchema* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicIFaceSetSchema, AbcG::IFaceSetSchema>(this_, abcThis_)){
    setError("Error in AlembicIFaceSetSchema_getNumSamples. unable to convert: this_");
    return 0;
  }
  unsigned int abc_result = abcThis_->getNumSamples();
  KL::UInt32 _result;
  conv_to_baseType<KL::UInt32, unsigned int>(abc_result, _result);
  return _result;

  ALEMBIC_CATCH_STATEMENT_RETURN("AlembicIFaceSetSchema_getNumSamples", 0)
}

// Defined at IFaceSetSchema.kl:23:1
FABRIC_EXT_EXPORT void AlembicIFaceSetSchema_getArbGeomParams(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicICompoundProperty >::Result _result,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicIFaceSetSchema >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicIFaceSetSchema_getArbGeomParams")

  AbcG::IFaceSetSchema* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicIFaceSetSchema, AbcG::IFaceSetSchema>(this_, abcThis_)){
    setError("Error in AlembicIFaceSetSchema_getArbGeomParams. unable to convert: this_");
    return;
  }
  Abc::ICompoundProperty* abc_result = new Abc::ICompoundProperty(abcThis_->getArbGeomParams());
  conv_to_AbcBasePtr<KL::AlembicICompoundProperty, Abc::ICompoundProperty>(abc_result, _result, true);

  ALEMBIC_CATCH_STATEMENT("AlembicIFaceSetSchema_getArbGeomParams")
}

// Defined at IFaceSetSchema.kl:24:1
FABRIC_EXT_EXPORT void AlembicIFaceSetSchema_getUserProperties(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicICompoundProperty >::Result _result,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicIFaceSetSchema >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicIFaceSetSchema_getUserProperties")

  AbcG::IFaceSetSchema* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicIFaceSetSchema, AbcG::IFaceSetSchema>(this_, abcThis_)){
    setError("Error in AlembicIFaceSetSchema_getUserProperties. unable to convert: this_");
    return;
  }
  Abc::ICompoundProperty* abc_result = new Abc::ICompoundProperty(abcThis_->getUserProperties());
  conv_to_AbcBasePtr<KL::AlembicICompoundProperty, Abc::ICompoundProperty>(abc_result, _result, true);

  ALEMBIC_CATCH_STATEMENT("AlembicIFaceSetSchema_getUserProperties")
}

// Defined at IFaceSetSchema.kl:25:1
FABRIC_EXT_EXPORT void AlembicIFaceSetSchema_getChildBoundsProperty(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicIScalarProperty >::Result _result,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicIFaceSetSchema >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicIFaceSetSchema_getChildBoundsProperty")

  AbcG::IFaceSetSchema* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicIFaceSetSchema, AbcG::IFaceSetSchema>(this_, abcThis_)){
    setError("Error in AlembicIFaceSetSchema_getChildBoundsProperty. unable to convert: this_");
    return;
  }
  Abc::IScalarProperty* abc_result = new Abc::IScalarProperty(abcThis_->getChildBoundsProperty());
  conv_to_AbcBasePtr<KL::AlembicIScalarProperty, Abc::IScalarProperty>(abc_result, _result, true);

  ALEMBIC_CATCH_STATEMENT("AlembicIFaceSetSchema_getChildBoundsProperty")
}

// Defined at IFaceSetSchema.kl:26:1
FABRIC_EXT_EXPORT Fabric::EDK::KL::UInt32 AlembicIFaceSetSchema_getFaceExclusivity(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicIFaceSetSchema >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicIFaceSetSchema_getFaceExclusivity")

  AbcG::IFaceSetSchema* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicIFaceSetSchema, AbcG::IFaceSetSchema>(this_, abcThis_)){
    setError("Error in AlembicIFaceSetSchema_getFaceExclusivity. unable to convert: this_");
    return 0;
  }
  unsigned int abc_result = abcThis_->getFaceExclusivity();
  KL::UInt32 _result;
  conv_to_baseType<KL::UInt32, unsigned int>(abc_result, _result);
  return _result;

  ALEMBIC_CATCH_STATEMENT_RETURN("AlembicIFaceSetSchema_getFaceExclusivity", 0)
}