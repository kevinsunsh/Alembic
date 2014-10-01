////////////////////////////////////////////////////////////////
// THIS FILE IS AUTOMATICALLY GENERATED -- DO NOT MODIFY!!
// USE COPY & PASTE TO MAKE USE OF THE FUNCTION IMPLEMENTATIONS!!
////////////////////////////////////////////////////////////////
// Generated by kl2exe version 1.11.2
////////////////////////////////////////////////////////////////

#include "AlembicISampleSelector_functions.h"


#include "extension.h"
  

using namespace Fabric::EDK;


// Defined at ISampleSelector.kl:14:1
FABRIC_EXT_EXPORT void AlembicISampleSelector_construct(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicISampleSelector >::IOParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicISampleSelector_construct")

  this_->handle = NULL;
  
  ALEMBIC_CATCH_STATEMENT("AlembicISampleSelector_construct")
}

// Defined at ISampleSelector.kl:15:1
FABRIC_EXT_EXPORT void AlembicISampleSelector_free(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicISampleSelector >::IOParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicISampleSelector_free")

  Abc::ISampleSelector* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicISampleSelector, Abc::ISampleSelector>(this_, abcThis_)){
    return;
  }
  free_AbcBasePtr(AbcG::ISampleSelector)
  
  ALEMBIC_CATCH_STATEMENT("AlembicISampleSelector_free")
}

// Defined at ISampleSelector.kl:17:1
FABRIC_EXT_EXPORT void AlembicISampleSelector_constructFromReqIdx(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicISampleSelector >::IOParam this_,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::UInt32 >::INParam reqIdx
)
{
  ALEMBIC_TRY_STATEMENT("AlembicISampleSelector_constructFromReqIdx")

  unsigned int abcReqIdx = 0;
  if(!conv_from_baseType<KL::UInt32, unsigned int>(reqIdx, abcReqIdx)){
    setError("Error in AlembicISampleSelector_constructFromReqIdx. unable to convert: reqIdx");
    return;
  }

  Abc::ISampleSelector * abcThis_ = new Abc::ISampleSelector((Abc::index_t)reqIdx);
  this_->handle = new PtrHandle<Abc::ISampleSelector>(abcThis_, true);
    
  ALEMBIC_CATCH_STATEMENT("AlembicISampleSelector_constructFromReqIdx")
}

// Defined at ISampleSelector.kl:18:1
FABRIC_EXT_EXPORT void AlembicISampleSelector_constructFromReqTime(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicISampleSelector >::IOParam this_,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::Float64 >::INParam reqTime,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::UInt32 >::INParam reqIdxType
)
{
  ALEMBIC_TRY_STATEMENT("AlembicISampleSelector_constructFromReqTime")

  double abcReqTime = 0;
  if(!conv_from_baseType<KL::Float64, double>(reqTime, abcReqTime)){
    setError("Error in AlembicISampleSelector_constructFromReqTime. unable to convert: reqTime");
    return;
  }
  unsigned int abcReqIdxType = 0;
  if(!conv_from_baseType<KL::UInt32, unsigned int>(reqIdxType, abcReqIdxType)){
    setError("Error in AlembicISampleSelector_constructFromReqTime. unable to convert: reqIdxType");
    return;
  }

  Abc::ISampleSelector * abcThis_ = new Abc::ISampleSelector((Abc::chrono_t)reqTime, (Abc::ISampleSelector::TimeIndexType)reqIdxType);
  this_->handle = new PtrHandle<Abc::ISampleSelector>(abcThis_, true);
    
  ALEMBIC_CATCH_STATEMENT("AlembicISampleSelector_constructFromReqTime")
}

// Defined at ISampleSelector.kl:23:1
FABRIC_EXT_EXPORT Fabric::EDK::KL::UInt32 AlembicISampleSelector_getRequestedIndex(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicISampleSelector >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicISampleSelector_getRequestedIndex")

  Abc::ISampleSelector* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicISampleSelector, Abc::ISampleSelector>(this_, abcThis_)){
    setError("Error in AlembicISampleSelector_getRequestedIndex. unable to convert: this_");
    return 0;
  }
  unsigned int abc_result = abcThis_->getRequestedIndex();
  KL::UInt32 _result;
  conv_to_baseType<KL::UInt32, unsigned int>(abc_result, _result);
  return _result;

  ALEMBIC_CATCH_STATEMENT_RETURN("AlembicISampleSelector_getRequestedIndex", 0)
}

// Defined at ISampleSelector.kl:24:1
FABRIC_EXT_EXPORT Fabric::EDK::KL::Float64 AlembicISampleSelector_getRequestedTime(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicISampleSelector >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicISampleSelector_getRequestedTime")

  Abc::ISampleSelector* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicISampleSelector, Abc::ISampleSelector>(this_, abcThis_)){
    setError("Error in AlembicISampleSelector_getRequestedTime. unable to convert: this_");
    return 0;
  }
  double abc_result = abcThis_->getRequestedTime();
  KL::Float64 _result;
  conv_to_baseType<KL::Float64, double>(abc_result, _result);
  return _result;

  ALEMBIC_CATCH_STATEMENT_RETURN("AlembicISampleSelector_getRequestedTime", 0)
}

// Defined at ISampleSelector.kl:25:1
FABRIC_EXT_EXPORT Fabric::EDK::KL::UInt32 AlembicISampleSelector_getRequestedTimeIndexType(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicISampleSelector >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicISampleSelector_getRequestedTimeIndexType")

  Abc::ISampleSelector* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicISampleSelector, Abc::ISampleSelector>(this_, abcThis_)){
    setError("Error in AlembicISampleSelector_getRequestedTimeIndexType. unable to convert: this_");
    return 0;
  }
  unsigned int abc_result = abcThis_->getRequestedTimeIndexType();
  KL::UInt32 _result;
  conv_to_baseType<KL::UInt32, unsigned int>(abc_result, _result);
  return _result;

  ALEMBIC_CATCH_STATEMENT_RETURN("AlembicISampleSelector_getRequestedTimeIndexType", 0)
}

// Defined at ISampleSelector.kl:26:1
FABRIC_EXT_EXPORT Fabric::EDK::KL::UInt32 AlembicISampleSelector_getIndex(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicISampleSelector >::INParam this_,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicTimeSampling >::INParam timeSampling,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::UInt32 >::INParam numSamples
)
{
  ALEMBIC_TRY_STATEMENT("AlembicISampleSelector_getIndex")

  Abc::ISampleSelector* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicISampleSelector, Abc::ISampleSelector>(this_, abcThis_)){
    setError("Error in AlembicISampleSelector_getIndex. unable to convert: this_");
    return 0;
  }
  Abc::TimeSamplingPtr abcTimeSampling;
  if(!conv_from_AbcBase<KL::AlembicTimeSampling, Abc::TimeSamplingPtr>(timeSampling, abcTimeSampling)){
    setError("Error in AlembicISampleSelector_getIndex. unable to convert: timeSampling");
    return 0;
  }
  unsigned int abcNumSamples = 0;
  if(!conv_from_baseType<KL::UInt32, unsigned int>(numSamples, abcNumSamples)){
    setError("Error in AlembicISampleSelector_getIndex. unable to convert: numSamples");
    return 0;
  }
  unsigned int abc_result = abcThis_->getIndex(abcTimeSampling, abcNumSamples);
  KL::UInt32 _result;
  conv_to_baseType<KL::UInt32, unsigned int>(abc_result, _result);
  return _result;

  ALEMBIC_CATCH_STATEMENT_RETURN("AlembicISampleSelector_getIndex", 0)
}
