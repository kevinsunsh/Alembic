////////////////////////////////////////////////////////////////
// THIS FILE IS AUTOMATICALLY GENERATED -- DO NOT MODIFY!!
// USE COPY & PASTE TO MAKE USE OF THE FUNCTION IMPLEMENTATIONS!!
////////////////////////////////////////////////////////////////
// Generated by kl2exe version 1.11.2
////////////////////////////////////////////////////////////////

#include "AlembicIPolyMesh_functions.h"


#include "extension.h"
  

using namespace Fabric::EDK;


// Defined at IPolyMesh.kl:9:1
FABRIC_EXT_EXPORT void AlembicIPolyMesh_construct(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicIPolyMesh >::IOParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicIPolyMesh_construct")

  this_->handle = NULL;
  
  ALEMBIC_CATCH_STATEMENT("AlembicIPolyMesh_construct")
}

// Defined at IPolyMesh.kl:10:1
FABRIC_EXT_EXPORT void AlembicIPolyMesh_free(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicIPolyMesh >::IOParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicIPolyMesh_free")

  AbcG::IPolyMesh* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicIPolyMesh, AbcG::IPolyMesh>(this_, abcThis_)){
    return;
  }
  free_AbcBasePtr(AbcG::IPolyMesh)
  
  ALEMBIC_CATCH_STATEMENT("AlembicIPolyMesh_free")
}

// Defined at IPolyMesh.kl:11:1
FABRIC_EXT_EXPORT Fabric::EDK::KL::Boolean AlembicIPolyMesh_valid(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicIPolyMesh >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicIPolyMesh_valid")

  AbcG::IPolyMesh* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicIPolyMesh, AbcG::IPolyMesh>(this_, abcThis_)){
    return false;
  }
  bool abc_result = abcThis_->valid();
  KL::Boolean _result;
  conv_to_baseType<KL::Boolean, bool>(abc_result, _result);
  return _result;

  ALEMBIC_CATCH_STATEMENT_RETURN("AlembicIPolyMesh_valid", false)
}

// Defined at IPolyMesh.kl:14:1
FABRIC_EXT_EXPORT void AlembicIPolyMesh_constructFromIObject(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicIPolyMesh >::IOParam this_,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicIObject >::INParam obj
)
{
  ALEMBIC_TRY_STATEMENT("AlembicIPolyMesh_constructFromIObject")

  Abc::IObject* abcObj = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicIObject, Abc::IObject>(obj, abcObj)){
    setError("Error in AlembicIPolyMesh_constructFromIObject. unable to convert: obj");
    return;
  }

  AbcG::IPolyMesh * abcThis_ = new AbcG::IPolyMesh(*abcObj, Abc::kWrapExisting);
  this_->handle = new PtrHandle<AbcG::IPolyMesh>(abcThis_, true);
    
  ALEMBIC_CATCH_STATEMENT("AlembicIPolyMesh_constructFromIObject")
}

// Defined at IPolyMesh.kl:19:1
FABRIC_EXT_EXPORT Fabric::EDK::KL::Boolean AlembicIPolyMesh_matches(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicIPolyMesh >::INParam this_,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicMetaData >::INParam metaData
)
{
  ALEMBIC_TRY_STATEMENT("AlembicIPolyMesh_matches")

  Abc::MetaData * abcMetaData = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicMetaData, Abc::MetaData>(metaData, abcMetaData)){
    setError("Error in AlembicIPolyMesh_matches. unable to convert: metaData");
    return false;
  }
  return AbcG::IPolyMesh::matches(*abcMetaData);
  
  ALEMBIC_CATCH_STATEMENT_RETURN("AlembicIPolyMesh_matches", false)
}

// Defined at IPolyMesh.kl:20:1
FABRIC_EXT_EXPORT void AlembicIPolyMesh_getProperties(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicICompoundProperty >::Result _result,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicIPolyMesh >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicIPolyMesh_getProperties")

  AbcG::IPolyMesh* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicIPolyMesh, AbcG::IPolyMesh>(this_, abcThis_)){
    setError("Error in AlembicIPolyMesh_getProperties. unable to convert: this_");
    return;
  }
  Abc::ICompoundProperty* abc_result = new Abc::ICompoundProperty(abcThis_->getProperties());
  conv_to_AbcBasePtr<KL::AlembicICompoundProperty, Abc::ICompoundProperty>(abc_result, _result, true);

  ALEMBIC_CATCH_STATEMENT("AlembicIPolyMesh_getProperties")
}

// Defined at IPolyMesh.kl:21:1
FABRIC_EXT_EXPORT void AlembicIPolyMesh_getSchema(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicIPolyMeshSchema >::Result _result,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicIPolyMesh >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicIPolyMesh_getSchema")

  AbcG::IPolyMesh* abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicIPolyMesh, AbcG::IPolyMesh>(this_, abcThis_)){
    setError("Error in AlembicIPolyMesh_getSchema. unable to convert: this_");
    return;
  }
  AbcG::IPolyMeshSchema* abc_result = new AbcG::IPolyMeshSchema(abcThis_->getSchema());
  conv_to_AbcBasePtr<KL::AlembicIPolyMeshSchema, AbcG::IPolyMeshSchema>(abc_result, _result, true);

  ALEMBIC_CATCH_STATEMENT("AlembicIPolyMesh_getSchema")
}
