////////////////////////////////////////////////////////////////
// THIS FILE IS AUTOMATICALLY GENERATED -- DO NOT MODIFY!!
// USE COPY & PASTE TO MAKE USE OF THE FUNCTION IMPLEMENTATIONS!!
////////////////////////////////////////////////////////////////
// Generated by kl2exe version 1.11.2
////////////////////////////////////////////////////////////////

#include "AlembicILightSchema_functions.h"


#include "extension.h"
  

using namespace Fabric::EDK;


// Defined at ILightSchema.kl:9:1
FABRIC_EXT_EXPORT void AlembicILightSchema_construct(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicILightSchema >::IOParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicILightSchema_construct")

  this_->handle = NULL;
  
  ALEMBIC_CATCH_STATEMENT("AlembicILightSchema_construct")
}

// Defined at ILightSchema.kl:10:1
FABRIC_EXT_EXPORT void AlembicILightSchema_free(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicILightSchema >::IOParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicILightSchema_free")

  AbcG::ILightSchema* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicILightSchema, AbcG::ILightSchema>(this_, abcThis_)){
    return;
  }
  free_AbcBasePtr(AbcG::ILightSchema)
  
  ALEMBIC_CATCH_STATEMENT("AlembicILightSchema_free")
}

// Defined at ILightSchema.kl:11:1
FABRIC_EXT_EXPORT Fabric::EDK::KL::Boolean AlembicILightSchema_valid(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicILightSchema >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicILightSchema_valid")

  AbcG::ILightSchema* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicILightSchema, AbcG::ILightSchema>(this_, abcThis_)){
    return false;
  }
  bool abc_result = abcThis_->valid();
  KL::Boolean _result;
  conv_to_baseType<KL::Boolean, bool>(abc_result, _result);
  return _result;

  ALEMBIC_CATCH_STATEMENT_RETURN("AlembicILightSchema_valid", false)
}

// Defined at ILightSchema.kl:14:1
FABRIC_EXT_EXPORT Fabric::EDK::KL::Boolean AlembicILightSchema_isConstant(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicILightSchema >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicILightSchema_isConstant")

  AbcG::ILightSchema* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicILightSchema, AbcG::ILightSchema>(this_, abcThis_)){
    setError("Error in AlembicILightSchema_isConstant. unable to convert: this_");
    return false;
  }
  bool abc_result = abcThis_->isConstant();
  KL::Boolean _result;
  conv_to_baseType<KL::Boolean, bool>(abc_result, _result);
  return _result;

  ALEMBIC_CATCH_STATEMENT_RETURN("AlembicILightSchema_isConstant", false)
}

// Defined at ILightSchema.kl:15:1
FABRIC_EXT_EXPORT void AlembicILightSchema_getTimeSampling(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicTimeSampling >::Result _result,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicILightSchema >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicILightSchema_getTimeSampling")

  AbcG::ILightSchema* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicILightSchema, AbcG::ILightSchema>(this_, abcThis_)){
    setError("Error in AlembicILightSchema_getTimeSampling. unable to convert: this_");
    return;
  }
  Abc::TimeSamplingPtr abc_result = abcThis_->getTimeSampling();
  conv_to_AbcBase<KL::AlembicTimeSampling, Abc::TimeSamplingPtr>(abc_result, _result);

  ALEMBIC_CATCH_STATEMENT("AlembicILightSchema_getTimeSampling")
}

// Defined at ILightSchema.kl:16:1
FABRIC_EXT_EXPORT Fabric::EDK::KL::UInt32 AlembicILightSchema_getNumSamples(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicILightSchema >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicILightSchema_getNumSamples")

  AbcG::ILightSchema* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicILightSchema, AbcG::ILightSchema>(this_, abcThis_)){
    setError("Error in AlembicILightSchema_getNumSamples. unable to convert: this_");
    return 0;
  }
  unsigned int abc_result = abcThis_->getNumSamples();
  KL::UInt32 _result;
  conv_to_baseType<KL::UInt32, unsigned int>(abc_result, _result);
  return _result;

  ALEMBIC_CATCH_STATEMENT_RETURN("AlembicILightSchema_getNumSamples", 0)
}

// Defined at ILightSchema.kl:17:1
FABRIC_EXT_EXPORT void AlembicILightSchema_getArbGeomParams(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicICompoundProperty >::Result _result,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicILightSchema >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicILightSchema_getArbGeomParams")

  AbcG::ILightSchema* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicILightSchema, AbcG::ILightSchema>(this_, abcThis_)){
    setError("Error in AlembicILightSchema_getArbGeomParams. unable to convert: this_");
    return;
  }
  if(!abcThis_->getArbGeomParams().valid())
    return;
  Abc::ICompoundProperty* abc_result = new Abc::ICompoundProperty(abcThis_->getArbGeomParams());
  conv_to_AbcBasePtr<KL::AlembicICompoundProperty, Abc::ICompoundProperty>(abc_result, _result, true);

  ALEMBIC_CATCH_STATEMENT("AlembicILightSchema_getArbGeomParams")
}

// Defined at ILightSchema.kl:18:1
FABRIC_EXT_EXPORT void AlembicILightSchema_getUserProperties(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicICompoundProperty >::Result _result,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicILightSchema >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicILightSchema_getUserProperties")

  AbcG::ILightSchema* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicILightSchema, AbcG::ILightSchema>(this_, abcThis_)){
    setError("Error in AlembicILightSchema_getUserProperties. unable to convert: this_");
    return;
  }
  if(!abcThis_->getUserProperties().valid())
    return;
  Abc::ICompoundProperty* abc_result = new Abc::ICompoundProperty(abcThis_->getUserProperties());
  conv_to_AbcBasePtr<KL::AlembicICompoundProperty, Abc::ICompoundProperty>(abc_result, _result, true);

  ALEMBIC_CATCH_STATEMENT("AlembicILightSchema_getUserProperties")
}

// Defined at ILightSchema.kl:19:1
FABRIC_EXT_EXPORT void AlembicILightSchema_getChildBoundsProperty(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicIScalarProperty >::Result _result,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicILightSchema >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicILightSchema_getChildBoundsProperty")

  AbcG::ILightSchema* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicILightSchema, AbcG::ILightSchema>(this_, abcThis_)){
    setError("Error in AlembicILightSchema_getChildBoundsProperty. unable to convert: this_");
    return;
  }
  if(!abcThis_->getChildBoundsProperty().valid())
    return;
  Abc::IScalarProperty* abc_result = new Abc::IScalarProperty(abcThis_->getChildBoundsProperty());
  conv_to_AbcBasePtr<KL::AlembicIScalarProperty, Abc::IScalarProperty>(abc_result, _result, true);

  ALEMBIC_CATCH_STATEMENT("AlembicILightSchema_getChildBoundsProperty")
}