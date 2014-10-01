////////////////////////////////////////////////////////////////
// THIS FILE IS AUTOMATICALLY GENERATED -- DO NOT MODIFY!!
// USE COPY & PASTE TO MAKE USE OF THE FUNCTION IMPLEMENTATIONS!!
////////////////////////////////////////////////////////////////
// Generated by kl2exe version 1.11.2
////////////////////////////////////////////////////////////////

#include "AlembicOFaceSetSchema_functions.h"


#include "extension.h"
  

using namespace Fabric::EDK;


// Defined at OFaceSetSchema.kl:9:1
FABRIC_EXT_EXPORT void AlembicOFaceSetSchema_construct(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOFaceSetSchema >::IOParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicOFaceSetSchema_construct")

  this_->handle = NULL;
  
  ALEMBIC_CATCH_STATEMENT("AlembicOFaceSetSchema_construct")
}

// Defined at OFaceSetSchema.kl:10:1
FABRIC_EXT_EXPORT void AlembicOFaceSetSchema_free(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOFaceSetSchema >::IOParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicOFaceSetSchema_free")

  AbcG::OFaceSetSchema* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicOFaceSetSchema, AbcG::OFaceSetSchema>(this_, abcThis_)){
    return;
  }
  free_AbcBasePtr(AbcG::OFaceSetSchema)
  
  ALEMBIC_CATCH_STATEMENT("AlembicOFaceSetSchema_free")
}

// Defined at OFaceSetSchema.kl:11:1
FABRIC_EXT_EXPORT Fabric::EDK::KL::Boolean AlembicOFaceSetSchema_valid(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOFaceSetSchema >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicOFaceSetSchema_valid")

  AbcG::OFaceSetSchema* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicOFaceSetSchema, AbcG::OFaceSetSchema>(this_, abcThis_)){
    return false;
  }
  bool abc_result = abcThis_->valid();
  KL::Boolean _result;
  conv_to_baseType<KL::Boolean, bool>(abc_result, _result);
  return _result;

  ALEMBIC_CATCH_STATEMENT_RETURN("AlembicOFaceSetSchema_valid", false)
}

// Defined at OFaceSetSchema.kl:14:1
FABRIC_EXT_EXPORT Fabric::EDK::KL::UInt32 AlembicOFaceSetSchema_getNumSamples(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOFaceSetSchema >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicOFaceSetSchema_getNumSamples")

  AbcG::OFaceSetSchema* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicOFaceSetSchema, AbcG::OFaceSetSchema>(this_, abcThis_)){
    setError("Error in AlembicOFaceSetSchema_getNumSamples. unable to convert: this_");
    return 0;
  }
  unsigned int abc_result = abcThis_->getNumSamples();
  KL::UInt32 _result;
  conv_to_baseType<KL::UInt32, unsigned int>(abc_result, _result);
  return _result;

  ALEMBIC_CATCH_STATEMENT_RETURN("AlembicOFaceSetSchema_getNumSamples", 0)
}

// Defined at OFaceSetSchema.kl:15:1
FABRIC_EXT_EXPORT void AlembicOFaceSetSchema_set(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOFaceSetSchema >::IOParam this_,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOFaceSetSample >::INParam sample
)
{
  ALEMBIC_TRY_STATEMENT("AlembicOFaceSetSchema_set")

  AbcG::OFaceSetSchema* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicOFaceSetSchema, AbcG::OFaceSetSchema>(this_, abcThis_)){
    setError("Error in AlembicOFaceSetSchema_set. unable to convert: this_");
    return;
  }
  AbcG::OFaceSetSchema::Sample * abcSample = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicOFaceSetSample, AbcG::OFaceSetSchema::Sample>(sample, abcSample)){
    setError("Error in AlembicOFaceSetSchema_set. unable to convert: sample");
    return;
  }
  abcThis_->set(*abcSample);

  ALEMBIC_CATCH_STATEMENT("AlembicOFaceSetSchema_set")
}

// Defined at OFaceSetSchema.kl:16:1
FABRIC_EXT_EXPORT void AlembicOFaceSetSchema_setTimeSampling(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOFaceSetSchema >::IOParam this_,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::UInt32 >::INParam index
)
{
  ALEMBIC_TRY_STATEMENT("AlembicOFaceSetSchema_setTimeSampling")

  AbcG::OFaceSetSchema* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicOFaceSetSchema, AbcG::OFaceSetSchema>(this_, abcThis_)){
    setError("Error in AlembicOFaceSetSchema_setTimeSampling. unable to convert: this_");
    return;
  }
  unsigned int abcIndex = 0;
  if(!conv_from_baseType<KL::UInt32, unsigned int>(index, abcIndex)){
    setError("Error in AlembicOFaceSetSchema_setTimeSampling. unable to convert: index");
    return;
  }
  abcThis_->setTimeSampling(abcIndex);

  ALEMBIC_CATCH_STATEMENT("AlembicOFaceSetSchema_setTimeSampling")
}

// Defined at OFaceSetSchema.kl:17:1
FABRIC_EXT_EXPORT void AlembicOFaceSetSchema_setFaceExclusivity(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOFaceSetSchema >::IOParam this_,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::UInt32 >::INParam facesExclusive
)
{
  ALEMBIC_TRY_STATEMENT("AlembicOFaceSetSchema_setFaceExclusivity")

  AbcG::OFaceSetSchema* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicOFaceSetSchema, AbcG::OFaceSetSchema>(this_, abcThis_)){
    setError("Error in AlembicOFaceSetSchema_setFaceExclusivity. unable to convert: this_");
    return;
  }
  unsigned int abcFacesExclusive = 0;
  if(!conv_from_baseType<KL::UInt32, unsigned int>(facesExclusive, abcFacesExclusive)){
    setError("Error in AlembicOFaceSetSchema_setFaceExclusivity. unable to convert: facesExclusive");
    return;
  }
  abcThis_->setFaceExclusivity((AbcG::FaceSetExclusivity)abcFacesExclusive);

  ALEMBIC_CATCH_STATEMENT("AlembicOFaceSetSchema_setFaceExclusivity")
}

// Defined at OFaceSetSchema.kl:18:1
FABRIC_EXT_EXPORT Fabric::EDK::KL::UInt32 AlembicOFaceSetSchema_getFaceExclusivity(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOFaceSetSchema >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicOFaceSetSchema_getFaceExclusivity")

  AbcG::OFaceSetSchema* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicOFaceSetSchema, AbcG::OFaceSetSchema>(this_, abcThis_)){
    setError("Error in AlembicOFaceSetSchema_getFaceExclusivity. unable to convert: this_");
    return 0;
  }
  unsigned int abc_result = abcThis_->getFaceExclusivity();
  KL::UInt32 _result;
  conv_to_baseType<KL::UInt32, unsigned int>(abc_result, _result);
  return _result;

  ALEMBIC_CATCH_STATEMENT_RETURN("AlembicOFaceSetSchema_getFaceExclusivity", 0)
}

// Defined at OFaceSetSchema.kl:19:1
FABRIC_EXT_EXPORT void AlembicOFaceSetSchema_getArbGeomParams(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOCompoundProperty >::Result _result,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOFaceSetSchema >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicOFaceSetSchema_getArbGeomParams")

  AbcG::OFaceSetSchema* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicOFaceSetSchema, AbcG::OFaceSetSchema>(this_, abcThis_)){
    setError("Error in AlembicOFaceSetSchema_getArbGeomParams. unable to convert: this_");
    return;
  }
  Abc::OCompoundProperty* abc_result = new Abc::OCompoundProperty(abcThis_->getArbGeomParams());
  conv_to_AbcBasePtr<KL::AlembicOCompoundProperty, Abc::OCompoundProperty>(abc_result, _result, true);

  ALEMBIC_CATCH_STATEMENT("AlembicOFaceSetSchema_getArbGeomParams")
}

// Defined at OFaceSetSchema.kl:20:1
FABRIC_EXT_EXPORT void AlembicOFaceSetSchema_getUserProperties(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOCompoundProperty >::Result _result,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOFaceSetSchema >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicOFaceSetSchema_getUserProperties")

  AbcG::OFaceSetSchema* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicOFaceSetSchema, AbcG::OFaceSetSchema>(this_, abcThis_)){
    setError("Error in AlembicOFaceSetSchema_getUserProperties. unable to convert: this_");
    return;
  }
  Abc::OCompoundProperty* abc_result = new Abc::OCompoundProperty(abcThis_->getUserProperties());
  conv_to_AbcBasePtr<KL::AlembicOCompoundProperty, Abc::OCompoundProperty>(abc_result, _result, true);

  ALEMBIC_CATCH_STATEMENT("AlembicOFaceSetSchema_getUserProperties")
}

// Defined at OFaceSetSchema.kl:21:1
FABRIC_EXT_EXPORT void AlembicOFaceSetSchema_getChildBoundsProperty(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOScalarProperty >::Result _result,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOFaceSetSchema >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicOFaceSetSchema_getChildBoundsProperty")

  AbcG::OFaceSetSchema* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicOFaceSetSchema, AbcG::OFaceSetSchema>(this_, abcThis_)){
    setError("Error in AlembicOFaceSetSchema_getChildBoundsProperty. unable to convert: this_");
    return;
  }
  Abc::OScalarProperty* abc_result = new Abc::OScalarProperty(abcThis_->getChildBoundsProperty());
  conv_to_AbcBasePtr<KL::AlembicOScalarProperty, Abc::OScalarProperty>(abc_result, _result, true);

  ALEMBIC_CATCH_STATEMENT("AlembicOFaceSetSchema_getChildBoundsProperty")
}
