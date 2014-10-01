////////////////////////////////////////////////////////////////
// THIS FILE IS AUTOMATICALLY GENERATED -- DO NOT MODIFY!!
// USE COPY & PASTE TO MAKE USE OF THE FUNCTION IMPLEMENTATIONS!!
////////////////////////////////////////////////////////////////
// Generated by kl2exe version 1.11.2
////////////////////////////////////////////////////////////////

#include "AlembicINuPatch_functions.h"


#include "extension.h"
  

using namespace Fabric::EDK;


// Defined at INuPatch.kl:9:1
FABRIC_EXT_EXPORT void AlembicINuPatch_construct(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicINuPatch >::IOParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicINuPatch_construct")

  this_->handle = NULL;
  
  ALEMBIC_CATCH_STATEMENT("AlembicINuPatch_construct")
}

// Defined at INuPatch.kl:10:1
FABRIC_EXT_EXPORT void AlembicINuPatch_free(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicINuPatch >::IOParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicINuPatch_free")

  AbcG::INuPatch* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicINuPatch, AbcG::INuPatch>(this_, abcThis_)){
    return;
  }
  free_AbcBasePtr(AbcG::INuPatch)
  
  ALEMBIC_CATCH_STATEMENT("AlembicINuPatch_free")
}

// Defined at INuPatch.kl:11:1
FABRIC_EXT_EXPORT Fabric::EDK::KL::Boolean AlembicINuPatch_valid(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicINuPatch >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicINuPatch_valid")

  AbcG::INuPatch* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicINuPatch, AbcG::INuPatch>(this_, abcThis_)){
    return false;
  }
  bool abc_result = abcThis_->valid();
  KL::Boolean _result;
  conv_to_baseType<KL::Boolean, bool>(abc_result, _result);
  return _result;

  ALEMBIC_CATCH_STATEMENT_RETURN("AlembicINuPatch_valid", false)
}

// Defined at INuPatch.kl:14:1
FABRIC_EXT_EXPORT void AlembicINuPatch_constructFromIObject(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicINuPatch >::IOParam this_,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicIObject >::INParam obj
)
{
  ALEMBIC_TRY_STATEMENT("AlembicINuPatch_constructFromIObject")

  Abc::IObject* abcObj = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicIObject, Abc::IObject>(obj, abcObj)){
    setError("Error in AlembicINuPatch_constructFromIObject. unable to convert: obj");
    return;
  }

  AbcG::INuPatch * abcThis_ = new AbcG::INuPatch(*abcObj, Abc::kWrapExisting);
  this_->handle = new PtrHandle<AbcG::INuPatch>(abcThis_, true);
    
  ALEMBIC_CATCH_STATEMENT("AlembicINuPatch_constructFromIObject")
}

// Defined at INuPatch.kl:18:1
FABRIC_EXT_EXPORT Fabric::EDK::KL::Boolean AlembicINuPatch_matches(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicINuPatch >::INParam this_,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicMetaData >::INParam metaData
)
{
  ALEMBIC_TRY_STATEMENT("AlembicINuPatch_matches")

  Abc::MetaData * abcMetaData = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicMetaData, Abc::MetaData>(metaData, abcMetaData)){
    setError("Error in AlembicINuPatch_matches. unable to convert: metaData");
    return false;
  }
  return AbcG::INuPatch::matches(*abcMetaData);
  
  ALEMBIC_CATCH_STATEMENT_RETURN("AlembicINuPatch_matches", false)
}

// Defined at INuPatch.kl:19:1
FABRIC_EXT_EXPORT void AlembicINuPatch_getProperties(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicICompoundProperty >::Result _result,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicINuPatch >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicINuPatch_getProperties")

  AbcG::INuPatch* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicINuPatch, AbcG::INuPatch>(this_, abcThis_)){
    setError("Error in AlembicINuPatch_getProperties. unable to convert: this_");
    return;
  }
  Abc::ICompoundProperty* abc_result = new Abc::ICompoundProperty(abcThis_->getProperties());
  conv_to_AbcBasePtr<KL::AlembicICompoundProperty, Abc::ICompoundProperty>(abc_result, _result, true);

  ALEMBIC_CATCH_STATEMENT("AlembicINuPatch_getProperties")
}

// Defined at INuPatch.kl:20:1
FABRIC_EXT_EXPORT void AlembicINuPatch_getSchema(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicINuPatchSchema >::Result _result,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicINuPatch >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicINuPatch_getSchema")

  AbcG::INuPatch* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicINuPatch, AbcG::INuPatch>(this_, abcThis_)){
    setError("Error in AlembicINuPatch_getSchema. unable to convert: this_");
    return;
  }
  AbcG::INuPatchSchema* abc_result = new AbcG::INuPatchSchema(abcThis_->getSchema());
  conv_to_AbcBasePtr<KL::AlembicINuPatchSchema, AbcG::INuPatchSchema>(abc_result, _result, true);

  ALEMBIC_CATCH_STATEMENT("AlembicINuPatch_getSchema")
}