////////////////////////////////////////////////////////////////
// THIS FILE IS AUTOMATICALLY GENERATED -- DO NOT MODIFY!!
// USE COPY & PASTE TO MAKE USE OF THE FUNCTION IMPLEMENTATIONS!!
////////////////////////////////////////////////////////////////
// Generated by kl2exe version 1.11.2
////////////////////////////////////////////////////////////////

#include "AlembicI__KLTYPE____PRECISION__GeomParamSample_functions.h"


#include "extension.h"
  

using namespace Fabric::EDK;


// Defined at build\Windows\x86_64\Release\Native\Exts\Builtin\Alembic/I__KLTYPE____PRECISION__GeomParamSample.kl:15:1
FABRIC_EXT_EXPORT void AlembicI__KLTYPE____PRECISION__GeomParamSample_construct(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicI__KLTYPE____PRECISION__GeomParamSample >::IOParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicI__KLTYPE____PRECISION__GeomParamSample_construct")

  construct_AbcBasePtr(AbcG::ITypedGeomParam<__ABCTRAITS__>::Sample)

  ALEMBIC_CATCH_STATEMENT("AlembicI__KLTYPE____PRECISION__GeomParamSample_construct")
}

// Defined at build\Windows\x86_64\Release\Native\Exts\Builtin\Alembic/I__KLTYPE____PRECISION__GeomParamSample.kl:16:1
FABRIC_EXT_EXPORT void AlembicI__KLTYPE____PRECISION__GeomParamSample_free(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicI__KLTYPE____PRECISION__GeomParamSample >::IOParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicI__KLTYPE____PRECISION__GeomParamSample_free")

  free_AbcBasePtr(AbcG::ITypedGeomParam<__ABCTRAITS__>::Sample)

  ALEMBIC_CATCH_STATEMENT("AlembicI__KLTYPE____PRECISION__GeomParamSample_free")
}

// Defined at build\Windows\x86_64\Release\Native\Exts\Builtin\Alembic/I__KLTYPE____PRECISION__GeomParamSample.kl:18:1
FABRIC_EXT_EXPORT void AlembicI__KLTYPE____PRECISION__GeomParamSample_getVals(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::VariableArray< Fabric::EDK::KL::__KLTYPE__ > >::Result _result,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicI__KLTYPE____PRECISION__GeomParamSample >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicI__KLTYPE____PRECISION__GeomParamSample_getVals")

  AbcG::ITypedGeomParam<__ABCTRAITS__>::Sample * abcThis_;
  if(!conv_from_AbcBasePtr<KL::AlembicI__KLTYPE____PRECISION__GeomParamSample, AbcG::ITypedGeomParam<__ABCTRAITS__>::Sample>(this_, abcThis_)){
    setError("Error in AlembicI__KLTYPE____PRECISION__GeomParamSample_getVals. unable to convert: this_");
    return;
  }

  AbcG::ITypedGeomParam<__ABCTRAITS__>::Sample::samp_ptr_type abc_result = abcThis_->getVals();
  if(!abc_result)
    return;
  if(abc_result->size() == 0)
    return;
  size_t offset = 0;
  _result.resize(abc_result->size());
  __ABCBASETYPE__ * packed = (__ABCBASETYPE__ *)abc_result->getData();
  for(size_t i=0;i<_result.size();i++)
  {
    __KLPACK__
    offset += __ABCEXTENT__;
  }

  ALEMBIC_CATCH_STATEMENT("AlembicI__KLTYPE____PRECISION__GeomParamSample_getVals")
}

// Defined at build\Windows\x86_64\Release\Native\Exts\Builtin\Alembic/I__KLTYPE____PRECISION__GeomParamSample.kl:19:1
FABRIC_EXT_EXPORT void AlembicI__KLTYPE____PRECISION__GeomParamSample_getIndices(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::ExternalArray< Fabric::EDK::KL::UInt32 > >::Result _result,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicI__KLTYPE____PRECISION__GeomParamSample >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicI__KLTYPE____PRECISION__GeomParamSample_getIndices")

  AbcG::ITypedGeomParam<__ABCTRAITS__>::Sample * abcThis_;
  if(!conv_from_AbcBasePtr<KL::AlembicI__KLTYPE____PRECISION__GeomParamSample, AbcG::ITypedGeomParam<__ABCTRAITS__>::Sample>(this_, abcThis_)){
    setError("Error in AlembicI__KLTYPE____PRECISION__GeomParamSample_getIndices. unable to convert: this_");
    return;
  }

  Abc::UInt32ArraySamplePtr abcIndices = abcThis_->getIndices();
  if(!abcIndices)
    return;
  if(abcIndices->size() == 0)
    return;
  _result = KL::ExternalArray<KL::UInt32>((KL::UInt32*)abcIndices->getData(), abcIndices->size());

  ALEMBIC_CATCH_STATEMENT("AlembicI__KLTYPE____PRECISION__GeomParamSample_getIndices")
}

// Defined at build\Windows\x86_64\Release\Native\Exts\Builtin\Alembic/I__KLTYPE____PRECISION__GeomParamSample.kl:20:1
FABRIC_EXT_EXPORT Fabric::EDK::KL::UInt32 AlembicI__KLTYPE____PRECISION__GeomParamSample_getScope(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicI__KLTYPE____PRECISION__GeomParamSample >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicI__KLTYPE____PRECISION__GeomParamSample_getScope")

  AbcG::ITypedGeomParam<__ABCTRAITS__>::Sample * abcThis_;
  if(!conv_from_AbcBasePtr<KL::AlembicI__KLTYPE____PRECISION__GeomParamSample, AbcG::ITypedGeomParam<__ABCTRAITS__>::Sample>(this_, abcThis_)){
    setError("Error in AlembicI__KLTYPE____PRECISION__GeomParamSample_getScope. unable to convert: this_");
    return 0;
  }

  return abcThis_->getScope();

  ALEMBIC_CATCH_STATEMENT_RETURN("AlembicI__KLTYPE____PRECISION__GeomParamSample_getScope", 0)
}
