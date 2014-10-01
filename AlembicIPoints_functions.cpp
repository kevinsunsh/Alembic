////////////////////////////////////////////////////////////////
// THIS FILE IS AUTOMATICALLY GENERATED -- DO NOT MODIFY!!
// USE COPY & PASTE TO MAKE USE OF THE FUNCTION IMPLEMENTATIONS!!
////////////////////////////////////////////////////////////////
// Generated by kl2exe version 1.11.2
////////////////////////////////////////////////////////////////

#include "AlembicIPoints_functions.h"


#include "extension.h"
  

using namespace Fabric::EDK;


// Defined at IPoints.kl:9:1
FABRIC_EXT_EXPORT void AlembicIPoints_construct(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicIPoints >::IOParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicIPoints_construct")

  this_->handle = NULL;
  
  ALEMBIC_CATCH_STATEMENT("AlembicIPoints_construct")
}

// Defined at IPoints.kl:10:1
FABRIC_EXT_EXPORT void AlembicIPoints_free(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicIPoints >::IOParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicIPoints_free")

  AbcG::IPoints* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicIPoints, AbcG::IPoints>(this_, abcThis_)){
    return;
  }
  free_AbcBasePtr(AbcG::IPoints)
  
  ALEMBIC_CATCH_STATEMENT("AlembicIPoints_free")
}

// Defined at IPoints.kl:11:1
FABRIC_EXT_EXPORT Fabric::EDK::KL::Boolean AlembicIPoints_valid(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicIPoints >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicIPoints_valid")

  AbcG::IPoints* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicIPoints, AbcG::IPoints>(this_, abcThis_)){
    return false;
  }
  bool abc_result = abcThis_->valid();
  KL::Boolean _result;
  conv_to_baseType<KL::Boolean, bool>(abc_result, _result);
  return _result;

  ALEMBIC_CATCH_STATEMENT_RETURN("AlembicIPoints_valid", false)
}

// Defined at IPoints.kl:14:1
FABRIC_EXT_EXPORT void AlembicIPoints_constructFromIObject(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicIPoints >::IOParam this_,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicIObject >::INParam obj
)
{
  ALEMBIC_TRY_STATEMENT("AlembicIPoints_constructFromIObject")

  Abc::IObject* abcObj = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicIObject, Abc::IObject>(obj, abcObj)){
    setError("Error in AlembicIPoints_constructFromIObject. unable to convert: obj");
    return;
  }

  AbcG::IPoints * abcThis_ = new AbcG::IPoints(*abcObj, Abc::kWrapExisting);
  this_->handle = new PtrHandle<AbcG::IPoints>(abcThis_, true);
    
  ALEMBIC_CATCH_STATEMENT("AlembicIPoints_constructFromIObject")
}

// Defined at IPoints.kl:18:1
FABRIC_EXT_EXPORT Fabric::EDK::KL::Boolean AlembicIPoints_matches(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicIPoints >::INParam this_,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicMetaData >::INParam metaData
)
{
  ALEMBIC_TRY_STATEMENT("AlembicIPoints_matches")

  Abc::MetaData * abcMetaData = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicMetaData, Abc::MetaData>(metaData, abcMetaData)){
    setError("Error in AlembicIPoints_matches. unable to convert: metaData");
    return false;
  }
  return AbcG::IPoints::matches(*abcMetaData);
  
  ALEMBIC_CATCH_STATEMENT_RETURN("AlembicIPoints_matches", false)
}

// Defined at IPoints.kl:19:1
FABRIC_EXT_EXPORT void AlembicIPoints_getSchema(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicIPointsSchema >::Result _result,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicIPoints >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicIPoints_getSchema")

  AbcG::IPoints* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicIPoints, AbcG::IPoints>(this_, abcThis_)){
    setError("Error in AlembicIPoints_getSchema. unable to convert: this_");
    return;
  }
  AbcG::IPointsSchema* abc_result = new AbcG::IPointsSchema(abcThis_->getSchema());
  conv_to_AbcBasePtr<KL::AlembicIPointsSchema, AbcG::IPointsSchema>(abc_result, _result, true);

  ALEMBIC_CATCH_STATEMENT("AlembicIPoints_getSchema")
}

// Defined at IPoints.kl:20:1
FABRIC_EXT_EXPORT void AlembicIPoints_getProperties(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicICompoundProperty >::Result _result,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicIPoints >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicIPoints_getProperties")

  AbcG::IPoints* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicIPoints, AbcG::IPoints>(this_, abcThis_)){
    setError("Error in AlembicIPoints_getProperties. unable to convert: this_");
    return;
  }
  Abc::ICompoundProperty* abc_result = new Abc::ICompoundProperty(abcThis_->getProperties());
  conv_to_AbcBasePtr<KL::AlembicICompoundProperty, Abc::ICompoundProperty>(abc_result, _result, true);

  ALEMBIC_CATCH_STATEMENT("AlembicIPoints_getProperties")
}
