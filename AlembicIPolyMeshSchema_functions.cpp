////////////////////////////////////////////////////////////////
// THIS FILE IS AUTOMATICALLY GENERATED -- DO NOT MODIFY!!
// USE COPY & PASTE TO MAKE USE OF THE FUNCTION IMPLEMENTATIONS!!
////////////////////////////////////////////////////////////////
// Generated by kl2exe version 1.11.2
////////////////////////////////////////////////////////////////

#include "AlembicIPolyMeshSchema_functions.h"


#include "extension.h"
  

using namespace Fabric::EDK;


// Defined at IPolyMeshSchema.kl:14:1
FABRIC_EXT_EXPORT void AlembicIPolyMeshSchema_construct(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicIPolyMeshSchema >::IOParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicIPolyMeshSchema_construct")

  this_->handle = NULL;
  
  ALEMBIC_CATCH_STATEMENT("AlembicIPolyMeshSchema_construct")
}

// Defined at IPolyMeshSchema.kl:15:1
FABRIC_EXT_EXPORT void AlembicIPolyMeshSchema_free(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicIPolyMeshSchema >::IOParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicIPolyMeshSchema_free")

  AbcG::IPolyMeshSchema* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicIPolyMeshSchema, AbcG::IPolyMeshSchema>(this_, abcThis_)){
    return;
  }
  free_AbcBasePtr(AbcG::IPolyMeshSchema)
  
  ALEMBIC_CATCH_STATEMENT("AlembicIPolyMeshSchema_free")
}

// Defined at IPolyMeshSchema.kl:16:1
FABRIC_EXT_EXPORT Fabric::EDK::KL::Boolean AlembicIPolyMeshSchema_valid(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicIPolyMeshSchema >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicIPolyMeshSchema_valid")

  AbcG::IPolyMeshSchema* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicIPolyMeshSchema, AbcG::IPolyMeshSchema>(this_, abcThis_)){
    return false;
  }
  bool abc_result = abcThis_->valid();
  KL::Boolean _result;
  conv_to_baseType<KL::Boolean, bool>(abc_result, _result);
  return _result;

  ALEMBIC_CATCH_STATEMENT_RETURN("AlembicIPolyMeshSchema_valid", false)
}

// Defined at IPolyMeshSchema.kl:19:1
FABRIC_EXT_EXPORT Fabric::EDK::KL::UInt32 AlembicIPolyMeshSchema_getTopologyVariance(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicIPolyMeshSchema >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicIPolyMeshSchema_getTopologyVariance")

  AbcG::IPolyMeshSchema* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicIPolyMeshSchema, AbcG::IPolyMeshSchema>(this_, abcThis_)){
    setError("Error in AlembicIPolyMeshSchema_getTopologyVariance. unable to convert: this_");
    return 0;
  }
  unsigned int abc_result = abcThis_->getTopologyVariance();
  KL::UInt32 _result;
  conv_to_baseType<KL::UInt32, unsigned int>(abc_result, _result);
  return _result;

  ALEMBIC_CATCH_STATEMENT_RETURN("AlembicIPolyMeshSchema_getTopologyVariance", 0)
}

// Defined at IPolyMeshSchema.kl:20:1
FABRIC_EXT_EXPORT Fabric::EDK::KL::Boolean AlembicIPolyMeshSchema_isConstant(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicIPolyMeshSchema >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicIPolyMeshSchema_isConstant")

  AbcG::IPolyMeshSchema* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicIPolyMeshSchema, AbcG::IPolyMeshSchema>(this_, abcThis_)){
    setError("Error in AlembicIPolyMeshSchema_isConstant. unable to convert: this_");
    return false;
  }
  bool abc_result = abcThis_->isConstant();
  KL::Boolean _result;
  conv_to_baseType<KL::Boolean, bool>(abc_result, _result);
  return _result;

  ALEMBIC_CATCH_STATEMENT_RETURN("AlembicIPolyMeshSchema_isConstant", false)
}

// Defined at IPolyMeshSchema.kl:21:1
FABRIC_EXT_EXPORT void AlembicIPolyMeshSchema_get(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicIPolyMeshSchema >::INParam this_,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicIPolyMeshSample >::IOParam sample,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicISampleSelector >::INParam ss
)
{
  ALEMBIC_TRY_STATEMENT("AlembicIPolyMeshSchema_get")

  AbcG::IPolyMeshSchema* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicIPolyMeshSchema, AbcG::IPolyMeshSchema>(this_, abcThis_)){
    setError("Error in AlembicIPolyMeshSchema_get. unable to convert: this_");
    return;
  }
  AbcG::IPolyMeshSchema::Sample * abcSample = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicIPolyMeshSample, AbcG::IPolyMeshSchema::Sample>(sample, abcSample)){
    setError("Error in AlembicIPolyMeshSchema_get. unable to convert: sample");
    return;
  }
  Abc::ISampleSelector* abcSs = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicISampleSelector, Abc::ISampleSelector>(ss, abcSs)){
    setError("Error in AlembicIPolyMeshSchema_get. unable to convert: ss");
    return;
  }
  abcThis_->get(*abcSample, *abcSs);
  conv_to_AbcBasePtr<KL::AlembicIPolyMeshSample, AbcG::IPolyMeshSchema::Sample>(abcSample, sample);

  ALEMBIC_CATCH_STATEMENT("AlembicIPolyMeshSchema_get")
}

// Defined at IPolyMeshSchema.kl:23:1
FABRIC_EXT_EXPORT void AlembicIPolyMeshSchema_getTimeSampling(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicTimeSampling >::Result _result,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicIPolyMeshSchema >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicIPolyMeshSchema_getTimeSampling")

  AbcG::IPolyMeshSchema* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicIPolyMeshSchema, AbcG::IPolyMeshSchema>(this_, abcThis_)){
    setError("Error in AlembicIPolyMeshSchema_getTimeSampling. unable to convert: this_");
    return;
  }
  Abc::TimeSamplingPtr abc_result = abcThis_->getTimeSampling();
  conv_to_AbcBase<KL::AlembicTimeSampling, Abc::TimeSamplingPtr>(abc_result, _result);

  ALEMBIC_CATCH_STATEMENT("AlembicIPolyMeshSchema_getTimeSampling")
}

// Defined at IPolyMeshSchema.kl:24:1
FABRIC_EXT_EXPORT Fabric::EDK::KL::UInt32 AlembicIPolyMeshSchema_getNumSamples(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicIPolyMeshSchema >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicIPolyMeshSchema_getNumSamples")

  AbcG::IPolyMeshSchema* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicIPolyMeshSchema, AbcG::IPolyMeshSchema>(this_, abcThis_)){
    setError("Error in AlembicIPolyMeshSchema_getNumSamples. unable to convert: this_");
    return 0;
  }
  unsigned int abc_result = abcThis_->getNumSamples();
  KL::UInt32 _result;
  conv_to_baseType<KL::UInt32, unsigned int>(abc_result, _result);
  return _result;

  ALEMBIC_CATCH_STATEMENT_RETURN("AlembicIPolyMeshSchema_getNumSamples", 0)
}

// Defined at IPolyMeshSchema.kl:25:1
FABRIC_EXT_EXPORT void AlembicIPolyMeshSchema_getArbGeomParams(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicICompoundProperty >::Result _result,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicIPolyMeshSchema >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicIPolyMeshSchema_getArbGeomParams")

  AbcG::IPolyMeshSchema* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicIPolyMeshSchema, AbcG::IPolyMeshSchema>(this_, abcThis_)){
    setError("Error in AlembicIPolyMeshSchema_getArbGeomParams. unable to convert: this_");
    return;
  }

  if(!abcThis_->getArbGeomParams().valid())
    return;
  Abc::ICompoundProperty* abc_result = new Abc::ICompoundProperty(abcThis_->getArbGeomParams());
  conv_to_AbcBasePtr<KL::AlembicICompoundProperty, Abc::ICompoundProperty>(abc_result, _result, true);
    
  ALEMBIC_CATCH_STATEMENT("AlembicIPolyMeshSchema_getArbGeomParams")
}

// Defined at IPolyMeshSchema.kl:26:1
FABRIC_EXT_EXPORT void AlembicIPolyMeshSchema_getUserProperties(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicICompoundProperty >::Result _result,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicIPolyMeshSchema >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicIPolyMeshSchema_getUserProperties")

  AbcG::IPolyMeshSchema* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicIPolyMeshSchema, AbcG::IPolyMeshSchema>(this_, abcThis_)){
    setError("Error in AlembicIPolyMeshSchema_getUserProperties. unable to convert: this_");
    return;
  }

  if(!abcThis_->getUserProperties().valid())
    return;
  Abc::ICompoundProperty* abc_result = new Abc::ICompoundProperty(abcThis_->getUserProperties());
  conv_to_AbcBasePtr<KL::AlembicICompoundProperty, Abc::ICompoundProperty>(abc_result, _result, true);
    
  ALEMBIC_CATCH_STATEMENT("AlembicIPolyMeshSchema_getUserProperties")
}

// Defined at IPolyMeshSchema.kl:27:1
FABRIC_EXT_EXPORT void AlembicIPolyMeshSchema_getChildBoundsProperty(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicIScalarProperty >::Result _result,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicIPolyMeshSchema >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicIPolyMeshSchema_getChildBoundsProperty")

  AbcG::IPolyMeshSchema* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicIPolyMeshSchema, AbcG::IPolyMeshSchema>(this_, abcThis_)){
    setError("Error in AlembicIPolyMeshSchema_getChildBoundsProperty. unable to convert: this_");
    return;
  }
  if(!abcThis_->getChildBoundsProperty().valid())
    return;
  Abc::IScalarProperty* abc_result = new Abc::IScalarProperty(abcThis_->getChildBoundsProperty());
  conv_to_AbcBasePtr<KL::AlembicIScalarProperty, Abc::IScalarProperty>(abc_result, _result, true);

  ALEMBIC_CATCH_STATEMENT("AlembicIPolyMeshSchema_getChildBoundsProperty")
}

// Defined at IPolyMeshSchema.kl:28:1
FABRIC_EXT_EXPORT void AlembicIPolyMeshSchema_getUVsParam(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicIVec2VfGeomParam >::Result _result,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicIPolyMeshSchema >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicIPolyMeshSchema_getUVsParam")

  AbcG::IPolyMeshSchema* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicIPolyMeshSchema, AbcG::IPolyMeshSchema>(this_, abcThis_)){
    setError("Error in AlembicIPolyMeshSchema_getUVsParam. unable to convert: this_");
    return;
  }
  if(!abcThis_->getUVsParam().valid())
    return;
  AbcG::ITypedGeomParam<Abc::V2fTPTraits> * abc_result = new AbcG::ITypedGeomParam<Abc::V2fTPTraits> (abcThis_->getUVsParam());
  conv_to_AbcBasePtr<KL::AlembicIVec2VfGeomParam, AbcG::ITypedGeomParam<Abc::V2fTPTraits> >(abc_result, _result, true);

  ALEMBIC_CATCH_STATEMENT("AlembicIPolyMeshSchema_getUVsParam")
}

// Defined at IPolyMeshSchema.kl:29:1
FABRIC_EXT_EXPORT void AlembicIPolyMeshSchema_getNormalsParam(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicIVec3NfGeomParam >::Result _result,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicIPolyMeshSchema >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicIPolyMeshSchema_getNormalsParam")

  AbcG::IPolyMeshSchema* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicIPolyMeshSchema, AbcG::IPolyMeshSchema>(this_, abcThis_)){
    setError("Error in AlembicIPolyMeshSchema_getNormalsParam. unable to convert: this_");
    return;
  }
  if(!abcThis_->getNormalsParam().valid())
    return;
  AbcG::ITypedGeomParam<Abc::N3fTPTraits> * abc_result = new AbcG::ITypedGeomParam<Abc::N3fTPTraits> (abcThis_->getNormalsParam());
  conv_to_AbcBasePtr<KL::AlembicIVec3NfGeomParam, AbcG::ITypedGeomParam<Abc::N3fTPTraits> >(abc_result, _result, true);

  ALEMBIC_CATCH_STATEMENT("AlembicIPolyMeshSchema_getNormalsParam")
}

// Defined at IPolyMeshSchema.kl:30:1
FABRIC_EXT_EXPORT void AlembicIPolyMeshSchema_getFaceCountsProperty(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicIArrayProperty >::Result _result,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicIPolyMeshSchema >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicIPolyMeshSchema_getFaceCountsProperty")

  AbcG::IPolyMeshSchema* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicIPolyMeshSchema, AbcG::IPolyMeshSchema>(this_, abcThis_)){
    setError("Error in AlembicIPolyMeshSchema_getFaceCountsProperty. unable to convert: this_");
    return;
  }
  if(!abcThis_->getFaceCountsProperty().valid())
    return;
  Abc::IArrayProperty* abc_result = new Abc::IArrayProperty(abcThis_->getFaceCountsProperty());
  conv_to_AbcBasePtr<KL::AlembicIArrayProperty, Abc::IArrayProperty>(abc_result, _result, true);

  ALEMBIC_CATCH_STATEMENT("AlembicIPolyMeshSchema_getFaceCountsProperty")
}

// Defined at IPolyMeshSchema.kl:31:1
FABRIC_EXT_EXPORT void AlembicIPolyMeshSchema_getFaceIndicesProperty(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicIArrayProperty >::Result _result,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicIPolyMeshSchema >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicIPolyMeshSchema_getFaceIndicesProperty")

  AbcG::IPolyMeshSchema* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicIPolyMeshSchema, AbcG::IPolyMeshSchema>(this_, abcThis_)){
    setError("Error in AlembicIPolyMeshSchema_getFaceIndicesProperty. unable to convert: this_");
    return;
  }
  if(!abcThis_->getFaceIndicesProperty().valid())
    return;
  Abc::IArrayProperty* abc_result = new Abc::IArrayProperty(abcThis_->getFaceIndicesProperty());
  conv_to_AbcBasePtr<KL::AlembicIArrayProperty, Abc::IArrayProperty>(abc_result, _result, true);

  ALEMBIC_CATCH_STATEMENT("AlembicIPolyMeshSchema_getFaceIndicesProperty")
}

// Defined at IPolyMeshSchema.kl:32:1
FABRIC_EXT_EXPORT void AlembicIPolyMeshSchema_getPositionsProperty(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicIArrayProperty >::Result _result,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicIPolyMeshSchema >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicIPolyMeshSchema_getPositionsProperty")

  AbcG::IPolyMeshSchema* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicIPolyMeshSchema, AbcG::IPolyMeshSchema>(this_, abcThis_)){
    setError("Error in AlembicIPolyMeshSchema_getPositionsProperty. unable to convert: this_");
    return;
  }
  if(!abcThis_->getPositionsProperty().valid())
    return;
  Abc::IArrayProperty* abc_result = new Abc::IArrayProperty(abcThis_->getPositionsProperty());
  conv_to_AbcBasePtr<KL::AlembicIArrayProperty, Abc::IArrayProperty>(abc_result, _result, true);

  ALEMBIC_CATCH_STATEMENT("AlembicIPolyMeshSchema_getPositionsProperty")
}

// Defined at IPolyMeshSchema.kl:33:1
FABRIC_EXT_EXPORT void AlembicIPolyMeshSchema_getVelocitiesProperty(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicIArrayProperty >::Result _result,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicIPolyMeshSchema >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicIPolyMeshSchema_getVelocitiesProperty")

  AbcG::IPolyMeshSchema* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicIPolyMeshSchema, AbcG::IPolyMeshSchema>(this_, abcThis_)){
    setError("Error in AlembicIPolyMeshSchema_getVelocitiesProperty. unable to convert: this_");
    return;
  }
  if(!abcThis_->getVelocitiesProperty().valid())
    return;
  Abc::IArrayProperty* abc_result = new Abc::IArrayProperty(abcThis_->getVelocitiesProperty());
  conv_to_AbcBasePtr<KL::AlembicIArrayProperty, Abc::IArrayProperty>(abc_result, _result, true);

  ALEMBIC_CATCH_STATEMENT("AlembicIPolyMeshSchema_getVelocitiesProperty")
}

// Defined at IPolyMeshSchema.kl:34:1
FABRIC_EXT_EXPORT void AlembicIPolyMeshSchema_getFaceSetNames(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::VariableArray< Fabric::EDK::KL::String > >::Result _result,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicIPolyMeshSchema >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicIPolyMeshSchema_getFaceSetNames")

  AbcG::IPolyMeshSchema* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicIPolyMeshSchema, AbcG::IPolyMeshSchema>(this_, abcThis_)){
    setError("Error in AlembicIPolyMeshSchema_getFaceSetNames. unable to convert: this_");
    return;
  }

  std::vector<std::string> abc_result;
  abcThis_->getFaceSetNames(abc_result);
  _result.resize(abc_result.size());
  for(size_t i=0;i<abc_result.size();i++)
    _result[i] = abc_result[i].c_str();
    
  ALEMBIC_CATCH_STATEMENT("AlembicIPolyMeshSchema_getFaceSetNames")
}

// Defined at IPolyMeshSchema.kl:35:1
FABRIC_EXT_EXPORT void AlembicIPolyMeshSchema_getFaceSet(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicIFaceSet >::Result _result,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicIPolyMeshSchema >::INParam this_,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::String >::INParam name
)
{
  ALEMBIC_TRY_STATEMENT("AlembicIPolyMeshSchema_getFaceSet")

  AbcG::IPolyMeshSchema* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicIPolyMeshSchema, AbcG::IPolyMeshSchema>(this_, abcThis_)){
    setError("Error in AlembicIPolyMeshSchema_getFaceSet. unable to convert: this_");
    return;
  }
  std::string abcName = "";
  if(!conv_from_String(name, abcName)){
    setError("Error in AlembicIPolyMeshSchema_getFaceSet. unable to convert: name");
    return;
  }
  AbcG::IFaceSet* abc_result = new AbcG::IFaceSet(abcThis_->getFaceSet(abcName));
  conv_to_AbcBasePtr<KL::AlembicIFaceSet, AbcG::IFaceSet>(abc_result, _result, true);

  ALEMBIC_CATCH_STATEMENT("AlembicIPolyMeshSchema_getFaceSet")
}

// Defined at IPolyMeshSchema.kl:36:1
FABRIC_EXT_EXPORT Fabric::EDK::KL::Boolean AlembicIPolyMeshSchema_hasFaceSet(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicIPolyMeshSchema >::INParam this_,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::String >::INParam name
)
{
  ALEMBIC_TRY_STATEMENT("AlembicIPolyMeshSchema_hasFaceSet")

  AbcG::IPolyMeshSchema* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicIPolyMeshSchema, AbcG::IPolyMeshSchema>(this_, abcThis_)){
    setError("Error in AlembicIPolyMeshSchema_hasFaceSet. unable to convert: this_");
    return false;
  }
  std::string abcName = "";
  if(!conv_from_String(name, abcName)){
    setError("Error in AlembicIPolyMeshSchema_hasFaceSet. unable to convert: name");
    return false;
  }
  bool abc_result = abcThis_->hasFaceSet(abcName);
  KL::Boolean _result;
  conv_to_baseType<KL::Boolean, bool>(abc_result, _result);
  return _result;

  ALEMBIC_CATCH_STATEMENT_RETURN("AlembicIPolyMeshSchema_hasFaceSet", false)
}
