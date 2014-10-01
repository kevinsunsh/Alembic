////////////////////////////////////////////////////////////////
// THIS FILE IS AUTOMATICALLY GENERATED -- DO NOT MODIFY!!
// USE COPY & PASTE TO MAKE USE OF THE FUNCTION IMPLEMENTATIONS!!
////////////////////////////////////////////////////////////////
// Generated by kl2exe version 1.11.2
////////////////////////////////////////////////////////////////

#include "AlembicOSubD_functions.h"


#include "extension.h"
  

using namespace Fabric::EDK;


// Defined at OSubD.kl:9:1
FABRIC_EXT_EXPORT void AlembicOSubD_construct(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOSubD >::IOParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicOSubD_construct")

  this_->handle = NULL;
  
  ALEMBIC_CATCH_STATEMENT("AlembicOSubD_construct")
}

// Defined at OSubD.kl:10:1
FABRIC_EXT_EXPORT void AlembicOSubD_free(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOSubD >::IOParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicOSubD_free")

  AbcG::OSubD* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicOSubD, AbcG::OSubD>(this_, abcThis_)){
    return;
  }
  free_AbcBasePtr(AbcG::OSubD)
  
  ALEMBIC_CATCH_STATEMENT("AlembicOSubD_free")
}

// Defined at OSubD.kl:11:1
FABRIC_EXT_EXPORT Fabric::EDK::KL::Boolean AlembicOSubD_valid(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOSubD >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicOSubD_valid")

  AbcG::OSubD* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicOSubD, AbcG::OSubD>(this_, abcThis_)){
    return false;
  }
  bool abc_result = abcThis_->valid();
  KL::Boolean _result;
  conv_to_baseType<KL::Boolean, bool>(abc_result, _result);
  return _result;

  ALEMBIC_CATCH_STATEMENT_RETURN("AlembicOSubD_valid", false)
}

// Defined at OSubD.kl:14:1
FABRIC_EXT_EXPORT void AlembicOSubD_construct3Args(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOSubD >::IOParam this_,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOObject >::INParam parent,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::String >::INParam name,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::UInt32 >::INParam timeSampling
)
{
  ALEMBIC_TRY_STATEMENT("AlembicOSubD_construct3Args")

  Abc::OObject* abcParent = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicOObject, Abc::OObject>(parent, abcParent)){
    setError("Error in AlembicOSubD_construct3Args. unable to convert: parent");
    return;
  }
  std::string abcName = "";
  if(!conv_from_String(name, abcName)){
    setError("Error in AlembicOSubD_construct3Args. unable to convert: name");
    return;
  }
  unsigned int abcTimeSampling = 0;
  if(!conv_from_baseType<KL::UInt32, unsigned int>(timeSampling, abcTimeSampling)){
    setError("Error in AlembicOSubD_construct3Args. unable to convert: timeSampling");
    return;
  }

  AbcG::OSubD * abcThis = new AbcG::OSubD(*abcParent, std::string(name.data()), timeSampling);
  this_->handle = new PtrHandle<AbcG::OSubD>(abcThis, true);
    
  ALEMBIC_CATCH_STATEMENT("AlembicOSubD_construct3Args")
}

// Defined at OSubD.kl:18:1
FABRIC_EXT_EXPORT Fabric::EDK::KL::Boolean AlembicOSubD_matches(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOSubD >::INParam this_,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicMetaData >::INParam metaData
)
{
  ALEMBIC_TRY_STATEMENT("AlembicOSubD_matches")

  AbcG::OSubD* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicOSubD, AbcG::OSubD>(this_, abcThis_)){
    setError("Error in AlembicOSubD_matches. unable to convert: this_");
    return false;
  }
  Abc::MetaData * abcMetaData = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicMetaData, Abc::MetaData>(metaData, abcMetaData)){
    setError("Error in AlembicOSubD_matches. unable to convert: metaData");
    return false;
  }
  return AbcG::OSubD::matches(*abcMetaData);
  
  ALEMBIC_CATCH_STATEMENT_RETURN("AlembicOSubD_matches", false)
}

// Defined at OSubD.kl:19:1
FABRIC_EXT_EXPORT void AlembicOSubD_getSchema(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOSubDSchema >::Result _result,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOSubD >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicOSubD_getSchema")

  AbcG::OSubD* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicOSubD, AbcG::OSubD>(this_, abcThis_)){
    setError("Error in AlembicOSubD_getSchema. unable to convert: this_");
    return;
  }
  AbcG::OSubDSchema* abc_result = new AbcG::OSubDSchema(abcThis_->getSchema());
  conv_to_AbcBasePtr<KL::AlembicOSubDSchema, AbcG::OSubDSchema>(abc_result, _result, true);

  ALEMBIC_CATCH_STATEMENT("AlembicOSubD_getSchema")
}
