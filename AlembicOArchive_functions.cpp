////////////////////////////////////////////////////////////////
// THIS FILE IS AUTOMATICALLY GENERATED -- DO NOT MODIFY!!
// USE COPY & PASTE TO MAKE USE OF THE FUNCTION IMPLEMENTATIONS!!
////////////////////////////////////////////////////////////////
// Generated by kl2exe version 1.11.2
////////////////////////////////////////////////////////////////

#include "AlembicOArchive_functions.h"


#include "extension.h"
  

using namespace Fabric::EDK;


// Defined at OArchive.kl:9:1
FABRIC_EXT_EXPORT void AlembicOArchive_construct(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOArchive >::IOParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicOArchive_construct")

  this_->handle = NULL;
  
  ALEMBIC_CATCH_STATEMENT("AlembicOArchive_construct")
}

// Defined at OArchive.kl:10:1
FABRIC_EXT_EXPORT void AlembicOArchive_free(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOArchive >::IOParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicOArchive_free")

  Abc::OArchive* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicOArchive, Abc::OArchive>(this_, abcThis_)){
    return;
  }
  free_AbcBasePtr(Abc::OArchive)
  
  ALEMBIC_CATCH_STATEMENT("AlembicOArchive_free")
}

// Defined at OArchive.kl:11:1
FABRIC_EXT_EXPORT Fabric::EDK::KL::Boolean AlembicOArchive_valid(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOArchive >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicOArchive_valid")

  Abc::OArchive* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicOArchive, Abc::OArchive>(this_, abcThis_)){
    return false;
  }
  bool abc_result = abcThis_->valid();
  KL::Boolean _result;
  conv_to_baseType<KL::Boolean, bool>(abc_result, _result);
  return _result;

  ALEMBIC_CATCH_STATEMENT_RETURN("AlembicOArchive_valid", false)
}

// Defined at OArchive.kl:14:1
FABRIC_EXT_EXPORT void AlembicOArchive_constructFrom2Args(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOArchive >::IOParam this_,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::String >::INParam coreType,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::String >::INParam fileName
)
{
  ALEMBIC_TRY_STATEMENT("AlembicOArchive_constructFrom2Args")

  std::string abcCoreType = "";
  if(!conv_from_String(coreType, abcCoreType)){
    setError("Error in AlembicOArchive_constructFrom2Args. unable to convert: coreType");
    return;
  }
  std::string abcFileName = "";
  if(!conv_from_String(fileName, abcFileName)){
    setError("Error in AlembicOArchive_constructFrom2Args. unable to convert: fileName");
    return;
  }

  if(abcCoreType.length() == 0)
  {
    setError("AlembicOArchive_constructFrom2Args: No coreType specified.");
    return;
  }
  if(abcFileName.length() == 0)
  {
    setError("AlembicOArchive_constructFrom2Args: No fileName specified.");
    return;
  }
  Abc::OArchive * abcArchive;
  if(abcCoreType == "HDF5")
    abcArchive = new Abc::OArchive(AbcH::WriteArchive(), abcFileName);
  else if(abcCoreType == "Ogawa")
    abcArchive = new Abc::OArchive(AbcO::WriteArchive(), abcFileName);
  else
  {
    setError("AlembicOArchive_constructFrom2Args coreType '%s', only 'HDF5' and 'Ogawa' supported.", abcCoreType.c_str());
    return;
  }

  this_->handle = new PtrHandle<Abc::OArchive>(abcArchive, true);
    
  ALEMBIC_CATCH_STATEMENT("AlembicOArchive_constructFrom2Args")
}

// Defined at OArchive.kl:19:1
FABRIC_EXT_EXPORT void AlembicOArchive_getName(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::String >::Result _result,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOArchive >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicOArchive_getName")

  Abc::OArchive* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicOArchive, Abc::OArchive>(this_, abcThis_)){
    setError("Error in AlembicOArchive_getName. unable to convert: this_");
    return;
  }
  std::string abc_result = abcThis_->getName();
  conv_to_String(abc_result, _result);

  ALEMBIC_CATCH_STATEMENT("AlembicOArchive_getName")
}

// Defined at OArchive.kl:20:1
FABRIC_EXT_EXPORT void AlembicOArchive_getTop(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOObject >::Result _result,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOArchive >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicOArchive_getTop")

  Abc::OArchive* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicOArchive, Abc::OArchive>(this_, abcThis_)){
    setError("Error in AlembicOArchive_getTop. unable to convert: this_");
    return;
  }
  Abc::OObject* abc_result = new Abc::OObject(abcThis_->getTop());
  conv_to_AbcBasePtr<KL::AlembicOObject, Abc::OObject>(abc_result, _result, true);

  ALEMBIC_CATCH_STATEMENT("AlembicOArchive_getTop")
}

// Defined at OArchive.kl:21:1
FABRIC_EXT_EXPORT Fabric::EDK::KL::UInt32 AlembicOArchive_addTimeSampling(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOArchive >::IOParam this_,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicTimeSampling >::INParam timeSampling
)
{
  ALEMBIC_TRY_STATEMENT("AlembicOArchive_addTimeSampling")

  Abc::OArchive* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicOArchive, Abc::OArchive>(this_, abcThis_)){
    setError("Error in AlembicOArchive_addTimeSampling. unable to convert: this_");
    return 0;
  }
  Abc::TimeSamplingPtr abcTimeSampling;
  if(!conv_from_AbcBase<KL::AlembicTimeSampling, Abc::TimeSamplingPtr>(timeSampling, abcTimeSampling)){
    setError("Error in AlembicOArchive_addTimeSampling. unable to convert: timeSampling");
    return 0;
  }
  return abcThis_->addTimeSampling(*abcTimeSampling);
  ALEMBIC_CATCH_STATEMENT_RETURN("AlembicOArchive_addTimeSampling", 0)
}

// Defined at OArchive.kl:22:1
FABRIC_EXT_EXPORT Fabric::EDK::KL::UInt32 AlembicOArchive_getNumTimeSamplings(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOArchive >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicOArchive_getNumTimeSamplings")

  Abc::OArchive* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicOArchive, Abc::OArchive>(this_, abcThis_)){
    setError("Error in AlembicOArchive_getNumTimeSamplings. unable to convert: this_");
    return 0;
  }
  unsigned int abc_result = abcThis_->getNumTimeSamplings();
  KL::UInt32 _result;
  conv_to_baseType<KL::UInt32, unsigned int>(abc_result, _result);
  return _result;

  ALEMBIC_CATCH_STATEMENT_RETURN("AlembicOArchive_getNumTimeSamplings", 0)
}

// Defined at OArchive.kl:23:1
FABRIC_EXT_EXPORT void AlembicOArchive_getTimeSampling(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicTimeSampling >::Result _result,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOArchive >::INParam this_,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::UInt32 >::INParam index
)
{
  ALEMBIC_TRY_STATEMENT("AlembicOArchive_getTimeSampling")

  Abc::OArchive* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicOArchive, Abc::OArchive>(this_, abcThis_)){
    setError("Error in AlembicOArchive_getTimeSampling. unable to convert: this_");
    return;
  }
  unsigned int abcIndex = 0;
  if(!conv_from_baseType<KL::UInt32, unsigned int>(index, abcIndex)){
    setError("Error in AlembicOArchive_getTimeSampling. unable to convert: index");
    return;
  }
  Abc::TimeSamplingPtr abc_result = abcThis_->getTimeSampling(abcIndex);
  conv_to_AbcBase<KL::AlembicTimeSampling, Abc::TimeSamplingPtr>(abc_result, _result);

  ALEMBIC_CATCH_STATEMENT("AlembicOArchive_getTimeSampling")
}

// Defined at OArchive.kl:24:1
FABRIC_EXT_EXPORT Fabric::EDK::KL::UInt32 AlembicOArchive_getCompressionHint(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOArchive >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicOArchive_getCompressionHint")

  Abc::OArchive* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicOArchive, Abc::OArchive>(this_, abcThis_)){
    setError("Error in AlembicOArchive_getCompressionHint. unable to convert: this_");
    return 0;
  }
  unsigned int abc_result = abcThis_->getCompressionHint();
  KL::UInt32 _result;
  conv_to_baseType<KL::UInt32, unsigned int>(abc_result, _result);
  return _result;

  ALEMBIC_CATCH_STATEMENT_RETURN("AlembicOArchive_getCompressionHint", 0)
}

// Defined at OArchive.kl:25:1
FABRIC_EXT_EXPORT void AlembicOArchive_setCompressionHint(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOArchive >::IOParam this_,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::UInt32 >::INParam hint
)
{
  ALEMBIC_TRY_STATEMENT("AlembicOArchive_setCompressionHint")

  Abc::OArchive* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicOArchive, Abc::OArchive>(this_, abcThis_)){
    setError("Error in AlembicOArchive_setCompressionHint. unable to convert: this_");
    return;
  }
  unsigned int abcHint = 0;
  if(!conv_from_baseType<KL::UInt32, unsigned int>(hint, abcHint)){
    setError("Error in AlembicOArchive_setCompressionHint. unable to convert: hint");
    return;
  }
  abcThis_->setCompressionHint(abcHint);

  ALEMBIC_CATCH_STATEMENT("AlembicOArchive_setCompressionHint")
}
