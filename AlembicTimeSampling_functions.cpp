////////////////////////////////////////////////////////////////
// THIS FILE IS AUTOMATICALLY GENERATED -- DO NOT MODIFY!!
// USE COPY & PASTE TO MAKE USE OF THE FUNCTION IMPLEMENTATIONS!!
////////////////////////////////////////////////////////////////
// Generated by kl2exe version 1.11.2
////////////////////////////////////////////////////////////////

#include "AlembicTimeSampling_functions.h"


#include "extension.h"
  

using namespace Fabric::EDK;


// Defined at TimeSampling.kl:24:1
FABRIC_EXT_EXPORT void AlembicTimeSampling_construct(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicTimeSampling >::IOParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicTimeSampling_construct")

  construct_AbcBase(Abc::TimeSamplingPtr)
  
  ALEMBIC_CATCH_STATEMENT("AlembicTimeSampling_construct")
}

// Defined at TimeSampling.kl:25:1
FABRIC_EXT_EXPORT void AlembicTimeSampling_free(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicTimeSampling >::IOParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicTimeSampling_free")

  Abc::TimeSamplingPtr abcThis_;
  if(!conv_from_AbcBase<KL::AlembicTimeSampling, Abc::TimeSamplingPtr>(this_, abcThis_)){
    return;
  }
  free_AbcBase(Abc::TimeSamplingPtr)
  
  ALEMBIC_CATCH_STATEMENT("AlembicTimeSampling_free")
}

// Defined at TimeSampling.kl:27:1
FABRIC_EXT_EXPORT void AlembicTimeSampling_constructFromSamplingType(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicTimeSampling >::IOParam this_,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicTimeSamplingType >::INParam samplingType,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::VariableArray< Fabric::EDK::KL::Float64 > >::INParam sampleTimes
)
{
  ALEMBIC_TRY_STATEMENT("AlembicTimeSampling_constructFromSamplingType")

  Abc::TimeSamplingType abcSamplingType;
  if(!conv_from_AbcBase<KL::AlembicTimeSamplingType, Abc::TimeSamplingType>(samplingType, abcSamplingType)){
    setError("Error in AlembicTimeSampling_constructFromSamplingType. unable to convert: samplingType");
    return;
  }

  std::vector<Abc::chrono_t> abcSampleTimes(sampleTimes.size());
  for(uint32_t i=0;i<sampleTimes.size();i++)
    abcSampleTimes[i] = sampleTimes[i];

  Abc::TimeSamplingPtr timeSamplingPtr(new Abc::TimeSampling(abcSamplingType, abcSampleTimes));
  this_->handle = new Handle<Abc::TimeSamplingPtr>(timeSamplingPtr);
    
  ALEMBIC_CATCH_STATEMENT("AlembicTimeSampling_constructFromSamplingType")
}

// Defined at TimeSampling.kl:28:1
FABRIC_EXT_EXPORT void AlembicTimeSampling_constructFromStartTime(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicTimeSampling >::IOParam this_,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::Float64 >::INParam timePerCycle,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::Float64 >::INParam startTime
)
{
  ALEMBIC_TRY_STATEMENT("AlembicTimeSampling_constructFromStartTime")

  double abcTimePerCycle = 0;
  if(!conv_from_baseType<KL::Float64, double>(timePerCycle, abcTimePerCycle)){
    setError("Error in AlembicTimeSampling_constructFromStartTime. unable to convert: timePerCycle");
    return;
  }
  double abcStartTime = 0;
  if(!conv_from_baseType<KL::Float64, double>(startTime, abcStartTime)){
    setError("Error in AlembicTimeSampling_constructFromStartTime. unable to convert: startTime");
    return;
  }

  Abc::TimeSamplingPtr timeSamplingPtr(new Abc::TimeSampling((Abc::chrono_t)timePerCycle, (Abc::chrono_t)startTime));
  this_->handle = new Handle<Abc::TimeSamplingPtr>(timeSamplingPtr);
    
  ALEMBIC_CATCH_STATEMENT("AlembicTimeSampling_constructFromStartTime")
}

// Defined at TimeSampling.kl:30:1
FABRIC_EXT_EXPORT Fabric::EDK::KL::UInt32 AlembicTimeSampling_getNumStoredTimes(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicTimeSampling >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicTimeSampling_getNumStoredTimes")

  Abc::TimeSamplingPtr abcThis_;
  if(!conv_from_AbcBase<KL::AlembicTimeSampling, Abc::TimeSamplingPtr>(this_, abcThis_)){
    setError("Error in AlembicTimeSampling_getNumStoredTimes. unable to convert: this_");
    return 0;
  }
  unsigned int abc_result = abcThis_->getNumStoredTimes();
  KL::UInt32 _result;
  conv_to_baseType<KL::UInt32, unsigned int>(abc_result, _result);
  return _result;

  ALEMBIC_CATCH_STATEMENT_RETURN("AlembicTimeSampling_getNumStoredTimes", 0)
}

// Defined at TimeSampling.kl:31:1
FABRIC_EXT_EXPORT void AlembicTimeSampling_getStoredTimes(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::VariableArray< Fabric::EDK::KL::Float64 > >::Result _result,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicTimeSampling >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicTimeSampling_getStoredTimes")

  Abc::TimeSamplingPtr abcThis_;
  if(!conv_from_AbcBase<KL::AlembicTimeSampling, Abc::TimeSamplingPtr>(this_, abcThis_)){
    setError("Error in AlembicTimeSampling_getStoredTimes. unable to convert: this_");
    return;
  }

  const std::vector<Abc::chrono_t> & abcResult = abcThis_->getStoredTimes();
  _result.resize(abcResult.size());
  for(uint32_t i=0;i<_result.size();i++)
    _result[i] = abcResult[i];
    
  ALEMBIC_CATCH_STATEMENT("AlembicTimeSampling_getStoredTimes")
}

// Defined at TimeSampling.kl:32:1
FABRIC_EXT_EXPORT void AlembicTimeSampling_getTimeSamplingType(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicTimeSamplingType >::Result _result,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicTimeSampling >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicTimeSampling_getTimeSamplingType")

  Abc::TimeSamplingPtr abcThis_;
  if(!conv_from_AbcBase<KL::AlembicTimeSampling, Abc::TimeSamplingPtr>(this_, abcThis_)){
    setError("Error in AlembicTimeSampling_getTimeSamplingType. unable to convert: this_");
    return;
  }
  Abc::TimeSamplingType abc_result = abcThis_->getTimeSamplingType();
  conv_to_AbcBase<KL::AlembicTimeSamplingType, Abc::TimeSamplingType>(abc_result, _result);

  ALEMBIC_CATCH_STATEMENT("AlembicTimeSampling_getTimeSamplingType")
}

// Defined at TimeSampling.kl:33:1
FABRIC_EXT_EXPORT Fabric::EDK::KL::Float64 AlembicTimeSampling_getSampleTime(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicTimeSampling >::INParam this_,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::UInt32 >::INParam index
)
{
  ALEMBIC_TRY_STATEMENT("AlembicTimeSampling_getSampleTime")

  Abc::TimeSamplingPtr abcThis_;
  if(!conv_from_AbcBase<KL::AlembicTimeSampling, Abc::TimeSamplingPtr>(this_, abcThis_)){
    setError("Error in AlembicTimeSampling_getSampleTime. unable to convert: this_");
    return 0;
  }
  unsigned int abcIndex = 0;
  if(!conv_from_baseType<KL::UInt32, unsigned int>(index, abcIndex)){
    setError("Error in AlembicTimeSampling_getSampleTime. unable to convert: index");
    return 0;
  }
  double abc_result = abcThis_->getSampleTime(abcIndex);
  KL::Float64 _result;
  conv_to_baseType<KL::Float64, double>(abc_result, _result);
  return _result;

  ALEMBIC_CATCH_STATEMENT_RETURN("AlembicTimeSampling_getSampleTime", 0)
}

// Defined at TimeSampling.kl:34:1
FABRIC_EXT_EXPORT void AlembicTimeSampling_getFloorIndex(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicTimeSamplingPair >::Result _result,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicTimeSampling >::INParam this_,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::Float64 >::INParam time,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::UInt32 >::INParam numSamples
)
{
  ALEMBIC_TRY_STATEMENT("AlembicTimeSampling_getFloorIndex")

  Abc::TimeSamplingPtr abcThis_;
  if(!conv_from_AbcBase<KL::AlembicTimeSampling, Abc::TimeSamplingPtr>(this_, abcThis_)){
    setError("Error in AlembicTimeSampling_getFloorIndex. unable to convert: this_");
    return;
  }
  double abcTime = 0;
  if(!conv_from_baseType<KL::Float64, double>(time, abcTime)){
    setError("Error in AlembicTimeSampling_getFloorIndex. unable to convert: time");
    return;
  }
  unsigned int abcNumSamples = 0;
  if(!conv_from_baseType<KL::UInt32, unsigned int>(numSamples, abcNumSamples)){
    setError("Error in AlembicTimeSampling_getFloorIndex. unable to convert: numSamples");
    return;
  }
  std::pair<Abc::index_t, Abc::chrono_t> abc_result = abcThis_->getFloorIndex(abcTime, abcNumSamples);
  conv_to_AlembicTimeSamplingPair(abc_result, _result);

  ALEMBIC_CATCH_STATEMENT("AlembicTimeSampling_getFloorIndex")
}

// Defined at TimeSampling.kl:35:1
FABRIC_EXT_EXPORT void AlembicTimeSampling_getCeilIndex(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicTimeSamplingPair >::Result _result,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicTimeSampling >::INParam this_,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::Float64 >::INParam time,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::UInt32 >::INParam numSamples
)
{
  ALEMBIC_TRY_STATEMENT("AlembicTimeSampling_getCeilIndex")

  Abc::TimeSamplingPtr abcThis_;
  if(!conv_from_AbcBase<KL::AlembicTimeSampling, Abc::TimeSamplingPtr>(this_, abcThis_)){
    setError("Error in AlembicTimeSampling_getCeilIndex. unable to convert: this_");
    return;
  }
  double abcTime = 0;
  if(!conv_from_baseType<KL::Float64, double>(time, abcTime)){
    setError("Error in AlembicTimeSampling_getCeilIndex. unable to convert: time");
    return;
  }
  unsigned int abcNumSamples = 0;
  if(!conv_from_baseType<KL::UInt32, unsigned int>(numSamples, abcNumSamples)){
    setError("Error in AlembicTimeSampling_getCeilIndex. unable to convert: numSamples");
    return;
  }
  std::pair<Abc::index_t, Abc::chrono_t> abc_result = abcThis_->getCeilIndex(abcTime, abcNumSamples);
  conv_to_AlembicTimeSamplingPair(abc_result, _result);

  ALEMBIC_CATCH_STATEMENT("AlembicTimeSampling_getCeilIndex")
}

// Defined at TimeSampling.kl:36:1
FABRIC_EXT_EXPORT void AlembicTimeSampling_getNearIndex(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicTimeSamplingPair >::Result _result,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicTimeSampling >::INParam this_,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::Float64 >::INParam time,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::UInt32 >::INParam numSamples
)
{
  ALEMBIC_TRY_STATEMENT("AlembicTimeSampling_getNearIndex")

  Abc::TimeSamplingPtr abcThis_;
  if(!conv_from_AbcBase<KL::AlembicTimeSampling, Abc::TimeSamplingPtr>(this_, abcThis_)){
    setError("Error in AlembicTimeSampling_getNearIndex. unable to convert: this_");
    return;
  }
  double abcTime = 0;
  if(!conv_from_baseType<KL::Float64, double>(time, abcTime)){
    setError("Error in AlembicTimeSampling_getNearIndex. unable to convert: time");
    return;
  }
  unsigned int abcNumSamples = 0;
  if(!conv_from_baseType<KL::UInt32, unsigned int>(numSamples, abcNumSamples)){
    setError("Error in AlembicTimeSampling_getNearIndex. unable to convert: numSamples");
    return;
  }
  std::pair<Abc::index_t, Abc::chrono_t> abc_result = abcThis_->getNearIndex(abcTime, abcNumSamples);
  conv_to_AlembicTimeSamplingPair(abc_result, _result);

  ALEMBIC_CATCH_STATEMENT("AlembicTimeSampling_getNearIndex")
}
