////////////////////////////////////////////////////////////////
// THIS FILE IS AUTOMATICALLY GENERATED -- DO NOT MODIFY!!
// USE COPY & PASTE TO MAKE USE OF THE FUNCTION IMPLEMENTATIONS!!
////////////////////////////////////////////////////////////////
// Generated by kl2exe version 1.11.2
////////////////////////////////////////////////////////////////

#include "AlembicIPointsSchema_functions.h"


#include "extension.h"
  

using namespace Fabric::EDK;


// Defined at IPointsSchema.kl:9:1
FABRIC_EXT_EXPORT void AlembicIPointsSchema_construct(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicIPointsSchema >::IOParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicIPointsSchema_construct")

  this_->handle = NULL;
  
  ALEMBIC_CATCH_STATEMENT("AlembicIPointsSchema_construct")
}

// Defined at IPointsSchema.kl:10:1
FABRIC_EXT_EXPORT void AlembicIPointsSchema_free(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicIPointsSchema >::IOParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicIPointsSchema_free")

  AbcG::IPointsSchema* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicIPointsSchema, AbcG::IPointsSchema>(this_, abcThis_)){
    return;
  }
  free_AbcBasePtr(AbcG::IPointsSchema)
  
  ALEMBIC_CATCH_STATEMENT("AlembicIPointsSchema_free")
}

// Defined at IPointsSchema.kl:11:1
FABRIC_EXT_EXPORT Fabric::EDK::KL::Boolean AlembicIPointsSchema_valid(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicIPointsSchema >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicIPointsSchema_valid")

  AbcG::IPointsSchema* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicIPointsSchema, AbcG::IPointsSchema>(this_, abcThis_)){
    return false;
  }
  bool abc_result = abcThis_->valid();
  KL::Boolean _result;
  conv_to_baseType<KL::Boolean, bool>(abc_result, _result);
  return _result;

  ALEMBIC_CATCH_STATEMENT_RETURN("AlembicIPointsSchema_valid", false)
}

// Defined at IPointsSchema.kl:14:1
FABRIC_EXT_EXPORT Fabric::EDK::KL::Boolean AlembicIPointsSchema_isConstant(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicIPointsSchema >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicIPointsSchema_isConstant")

  AbcG::IPointsSchema* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicIPointsSchema, AbcG::IPointsSchema>(this_, abcThis_)){
    setError("Error in AlembicIPointsSchema_isConstant. unable to convert: this_");
    return false;
  }
  bool abc_result = abcThis_->isConstant();
  KL::Boolean _result;
  conv_to_baseType<KL::Boolean, bool>(abc_result, _result);
  return _result;

  ALEMBIC_CATCH_STATEMENT_RETURN("AlembicIPointsSchema_isConstant", false)
}

// Defined at IPointsSchema.kl:15:1
FABRIC_EXT_EXPORT void AlembicIPointsSchema_get(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicIPointsSchema >::INParam this_,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicIPointsSample >::IOParam sample,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicISampleSelector >::INParam ss
)
{
  ALEMBIC_TRY_STATEMENT("AlembicIPointsSchema_get")

  AbcG::IPointsSchema* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicIPointsSchema, AbcG::IPointsSchema>(this_, abcThis_)){
    setError("Error in AlembicIPointsSchema_get. unable to convert: this_");
    return;
  }
  AbcG::IPointsSchema::Sample * abcSample = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicIPointsSample, AbcG::IPointsSchema::Sample>(sample, abcSample)){
    setError("Error in AlembicIPointsSchema_get. unable to convert: sample");
    return;
  }
  Abc::ISampleSelector* abcSs = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicISampleSelector, Abc::ISampleSelector>(ss, abcSs)){
    setError("Error in AlembicIPointsSchema_get. unable to convert: ss");
    return;
  }
  abcThis_->get(*abcSample, *abcSs);
  conv_to_AbcBasePtr<KL::AlembicIPointsSample, AbcG::IPointsSchema::Sample>(abcSample, sample);

  ALEMBIC_CATCH_STATEMENT("AlembicIPointsSchema_get")
}

// Defined at IPointsSchema.kl:17:1
FABRIC_EXT_EXPORT void AlembicIPointsSchema_getTimeSampling(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicTimeSampling >::Result _result,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicIPointsSchema >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicIPointsSchema_getTimeSampling")

  AbcG::IPointsSchema* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicIPointsSchema, AbcG::IPointsSchema>(this_, abcThis_)){
    setError("Error in AlembicIPointsSchema_getTimeSampling. unable to convert: this_");
    return;
  }
  Abc::TimeSamplingPtr abc_result = abcThis_->getTimeSampling();
  conv_to_AbcBase<KL::AlembicTimeSampling, Abc::TimeSamplingPtr>(abc_result, _result);

  ALEMBIC_CATCH_STATEMENT("AlembicIPointsSchema_getTimeSampling")
}

// Defined at IPointsSchema.kl:18:1
FABRIC_EXT_EXPORT Fabric::EDK::KL::UInt32 AlembicIPointsSchema_getNumSamples(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicIPointsSchema >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicIPointsSchema_getNumSamples")

  AbcG::IPointsSchema* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicIPointsSchema, AbcG::IPointsSchema>(this_, abcThis_)){
    setError("Error in AlembicIPointsSchema_getNumSamples. unable to convert: this_");
    return 0;
  }
  unsigned int abc_result = abcThis_->getNumSamples();
  KL::UInt32 _result;
  conv_to_baseType<KL::UInt32, unsigned int>(abc_result, _result);
  return _result;

  ALEMBIC_CATCH_STATEMENT_RETURN("AlembicIPointsSchema_getNumSamples", 0)
}

// Defined at IPointsSchema.kl:19:1
FABRIC_EXT_EXPORT void AlembicIPointsSchema_getArbGeomParams(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicICompoundProperty >::Result _result,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicIPointsSchema >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicIPointsSchema_getArbGeomParams")

  AbcG::IPointsSchema* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicIPointsSchema, AbcG::IPointsSchema>(this_, abcThis_)){
    setError("Error in AlembicIPointsSchema_getArbGeomParams. unable to convert: this_");
    return;
  }
  Abc::ICompoundProperty* abc_result = new Abc::ICompoundProperty(abcThis_->getArbGeomParams());
  conv_to_AbcBasePtr<KL::AlembicICompoundProperty, Abc::ICompoundProperty>(abc_result, _result, true);

  ALEMBIC_CATCH_STATEMENT("AlembicIPointsSchema_getArbGeomParams")
}

// Defined at IPointsSchema.kl:20:1
FABRIC_EXT_EXPORT void AlembicIPointsSchema_getUserProperties(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicICompoundProperty >::Result _result,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicIPointsSchema >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicIPointsSchema_getUserProperties")

  AbcG::IPointsSchema* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicIPointsSchema, AbcG::IPointsSchema>(this_, abcThis_)){
    setError("Error in AlembicIPointsSchema_getUserProperties. unable to convert: this_");
    return;
  }
  if(!abcThis_->getUserProperties().valid())
    return;
  Abc::ICompoundProperty* abc_result = new Abc::ICompoundProperty(abcThis_->getUserProperties());
  conv_to_AbcBasePtr<KL::AlembicICompoundProperty, Abc::ICompoundProperty>(abc_result, _result, true);

  ALEMBIC_CATCH_STATEMENT("AlembicIPointsSchema_getUserProperties")
}

// Defined at IPointsSchema.kl:21:1
FABRIC_EXT_EXPORT void AlembicIPointsSchema_getChildBoundsProperty(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicIScalarProperty >::Result _result,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicIPointsSchema >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicIPointsSchema_getChildBoundsProperty")

  AbcG::IPointsSchema* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicIPointsSchema, AbcG::IPointsSchema>(this_, abcThis_)){
    setError("Error in AlembicIPointsSchema_getChildBoundsProperty. unable to convert: this_");
    return;
  }
  if(!abcThis_->getChildBoundsProperty().valid())
    return;
  Abc::IScalarProperty* abc_result = new Abc::IScalarProperty(abcThis_->getChildBoundsProperty());
  conv_to_AbcBasePtr<KL::AlembicIScalarProperty, Abc::IScalarProperty>(abc_result, _result, true);

  ALEMBIC_CATCH_STATEMENT("AlembicIPointsSchema_getChildBoundsProperty")
}

// Defined at IPointsSchema.kl:22:1
FABRIC_EXT_EXPORT void AlembicIPointsSchema_getPositionsProperty(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicIArrayProperty >::Result _result,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicIPointsSchema >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicIPointsSchema_getPositionsProperty")

  AbcG::IPointsSchema* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicIPointsSchema, AbcG::IPointsSchema>(this_, abcThis_)){
    setError("Error in AlembicIPointsSchema_getPositionsProperty. unable to convert: this_");
    return;
  }
  if(!abcThis_->getPositionsProperty().valid())
    return;
  Abc::IArrayProperty* abc_result = new Abc::IArrayProperty(abcThis_->getPositionsProperty());
  conv_to_AbcBasePtr<KL::AlembicIArrayProperty, Abc::IArrayProperty>(abc_result, _result, true);

  ALEMBIC_CATCH_STATEMENT("AlembicIPointsSchema_getPositionsProperty")
}

// Defined at IPointsSchema.kl:23:1
FABRIC_EXT_EXPORT void AlembicIPointsSchema_getVelocitiesProperty(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicIArrayProperty >::Result _result,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicIPointsSchema >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicIPointsSchema_getVelocitiesProperty")

  AbcG::IPointsSchema* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicIPointsSchema, AbcG::IPointsSchema>(this_, abcThis_)){
    setError("Error in AlembicIPointsSchema_getVelocitiesProperty. unable to convert: this_");
    return;
  }
  if(!abcThis_->getVelocitiesProperty().valid())
    return;
  Abc::IArrayProperty* abc_result = new Abc::IArrayProperty(abcThis_->getVelocitiesProperty());
  conv_to_AbcBasePtr<KL::AlembicIArrayProperty, Abc::IArrayProperty>(abc_result, _result, true);

  ALEMBIC_CATCH_STATEMENT("AlembicIPointsSchema_getVelocitiesProperty")
}

// Defined at IPointsSchema.kl:24:1
FABRIC_EXT_EXPORT void AlembicIPointsSchema_getIdsProperty(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicIArrayProperty >::Result _result,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicIPointsSchema >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicIPointsSchema_getIdsProperty")

  AbcG::IPointsSchema* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicIPointsSchema, AbcG::IPointsSchema>(this_, abcThis_)){
    setError("Error in AlembicIPointsSchema_getIdsProperty. unable to convert: this_");
    return;
  }
  if(!abcThis_->getIdsProperty().valid())
    return;
  Abc::IArrayProperty* abc_result = new Abc::IArrayProperty(abcThis_->getIdsProperty());
  conv_to_AbcBasePtr<KL::AlembicIArrayProperty, Abc::IArrayProperty>(abc_result, _result, true);

  ALEMBIC_CATCH_STATEMENT("AlembicIPointsSchema_getIdsProperty")
}

// Defined at IPointsSchema.kl:25:1
FABRIC_EXT_EXPORT void AlembicIPointsSchema_getWidthsParam(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicIFloat32GeomParam >::Result _result,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicIPointsSchema >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicIPointsSchema_getWidthsParam")

  AbcG::IPointsSchema* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicIPointsSchema, AbcG::IPointsSchema>(this_, abcThis_)){
    setError("Error in AlembicIPointsSchema_getWidthsParam. unable to convert: this_");
    return;
  }
  if(!abcThis_->getWidthsParam().valid())
    return;
  AbcG::ITypedGeomParam<Abc::Float32TPTraits> * abc_result = new AbcG::ITypedGeomParam<Abc::Float32TPTraits> (abcThis_->getWidthsParam());
  conv_to_AbcBasePtr<KL::AlembicIFloat32GeomParam, AbcG::ITypedGeomParam<Abc::Float32TPTraits> >(abc_result, _result, true);

  ALEMBIC_CATCH_STATEMENT("AlembicIPointsSchema_getWidthsParam")
}
