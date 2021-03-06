////////////////////////////////////////////////////////////////
// THIS FILE IS AUTOMATICALLY GENERATED -- DO NOT MODIFY!!
// USE COPY & PASTE TO MAKE USE OF THE FUNCTION IMPLEMENTATIONS!!
////////////////////////////////////////////////////////////////
// Generated by kl2exe version 1.11.2
////////////////////////////////////////////////////////////////

#include "AlembicO__KLTYPE____PRECISION__GeomParam_functions.h"


#include "extension.h"
  

using namespace Fabric::EDK;


// Defined at build\Windows\x86_64\Release\Native\Exts\Builtin\Alembic/O__KLTYPE____PRECISION__GeomParam.kl:15:1
FABRIC_EXT_EXPORT void AlembicO__KLTYPE____PRECISION__GeomParam_construct(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicO__KLTYPE____PRECISION__GeomParam >::IOParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicO__KLTYPE____PRECISION__GeomParam_construct")

  this_->handle = NULL;

  ALEMBIC_CATCH_STATEMENT("AlembicO__KLTYPE____PRECISION__GeomParam_construct")
}

// Defined at build\Windows\x86_64\Release\Native\Exts\Builtin\Alembic/O__KLTYPE____PRECISION__GeomParam.kl:16:1
FABRIC_EXT_EXPORT void AlembicO__KLTYPE____PRECISION__GeomParam_free(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicO__KLTYPE____PRECISION__GeomParam >::IOParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicO__KLTYPE____PRECISION__GeomParam_free")

  free_AbcBasePtr(AbcG::OTypedGeomParam<__ABCTRAITS__>)

  ALEMBIC_CATCH_STATEMENT("AlembicO__KLTYPE____PRECISION__GeomParam_free")
}

// Defined at build\Windows\x86_64\Release\Native\Exts\Builtin\Alembic/O__KLTYPE____PRECISION__GeomParam.kl:17:1
FABRIC_EXT_EXPORT Fabric::EDK::KL::Boolean AlembicO__KLTYPE____PRECISION__GeomParam_valid(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicO__KLTYPE____PRECISION__GeomParam >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicO__KLTYPE____PRECISION__GeomParam_valid")

  AbcG::OTypedGeomParam<__ABCTRAITS__> * abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicO__KLTYPE____PRECISION__GeomParam, AbcG::OTypedGeomParam<__ABCTRAITS__> >(this_, abcThis_)){
    return false;
  }

  return abcThis_->valid();

  ALEMBIC_CATCH_STATEMENT_RETURN("AlembicO__KLTYPE____PRECISION__GeomParam_valid", false)
}

// Defined at build\Windows\x86_64\Release\Native\Exts\Builtin\Alembic/O__KLTYPE____PRECISION__GeomParam.kl:20:1
FABRIC_EXT_EXPORT void AlembicO__KLTYPE____PRECISION__GeomParam_construct5Args(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicO__KLTYPE____PRECISION__GeomParam >::IOParam this_,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOCompoundProperty >::INParam parent,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::String >::INParam name,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::Boolean >::INParam isIndexed,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::UInt32 >::INParam scope,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::UInt32 >::INParam extent
)
{
  ALEMBIC_TRY_STATEMENT("AlembicO__KLTYPE____PRECISION__GeomParam_construct5Args")

  Abc::OCompoundProperty * abcParent = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicOCompoundProperty, Abc::OCompoundProperty>(parent, abcParent)){
    setError("Error in AlembicO__KLTYPE____PRECISION__GeomParam_construct5Args. unable to convert: parent");
    return;
  }
  std::string abcName = "";
  if(!conv_from_String(name, abcName)){
    setError("Error in AlembicO__KLTYPE____PRECISION__GeomParam_construct5Args. unable to convert: name");
    return;
  }
  bool abcIsIndexed = false;
  if(!conv_from_baseType<KL::Boolean, bool>(isIndexed, abcIsIndexed)){
    setError("Error in AlembicO__KLTYPE____PRECISION__GeomParam_construct5Args. unable to convert: isIndexed");
    return;
  }
  unsigned int abcScope = 0;
  if(!conv_from_baseType<KL::UInt32, unsigned int>(scope, abcScope)){
    setError("Error in AlembicO__KLTYPE____PRECISION__GeomParam_construct5Args. unable to convert: scope");
    return;
  }
  unsigned int abcExtent = 0;
  if(!conv_from_baseType<KL::UInt32, unsigned int>(extent, abcExtent)){
    setError("Error in AlembicO__KLTYPE____PRECISION__GeomParam_construct5Args. unable to convert: extent");
    return;
  }

  AbcG::OTypedGeomParam<__ABCTRAITS__> * abcThis_ = new AbcG::OTypedGeomParam<__ABCTRAITS__>(*abcParent, abcName, abcIsIndexed, (AbcG::GeometryScope)abcScope, abcExtent);
  if(!abcThis_->valid())
    return;
  this_->handle = new PtrHandle< AbcG::OTypedGeomParam<__ABCTRAITS__> >(abcThis_, true);

  ALEMBIC_CATCH_STATEMENT("AlembicO__KLTYPE____PRECISION__GeomParam_construct5Args")
}

// Defined at build\Windows\x86_64\Release\Native\Exts\Builtin\Alembic/O__KLTYPE____PRECISION__GeomParam.kl:22:1
FABRIC_EXT_EXPORT Fabric::EDK::KL::Boolean AlembicO__KLTYPE____PRECISION__GeomParam_matches(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicO__KLTYPE____PRECISION__GeomParam >::INParam this_,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicPropertyHeader >::INParam header
)
{
  ALEMBIC_TRY_STATEMENT("AlembicO__KLTYPE____PRECISION__GeomParam_matches")

  Abc::PropertyHeader * abcHeader;
  if(!conv_from_AbcBasePtr<KL::AlembicPropertyHeader, Abc::PropertyHeader>(header, abcHeader)){
    setError("Error in AlembicO__KLTYPE____PRECISION__GeomParam_matches. unable to convert: header");
    return false;
  }

  return AbcG::OTypedGeomParam<__ABCTRAITS__>::matches(*abcHeader);

  ALEMBIC_CATCH_STATEMENT_RETURN("AlembicO__KLTYPE____PRECISION__GeomParam_matches", false)
}

// Defined at build\Windows\x86_64\Release\Native\Exts\Builtin\Alembic/O__KLTYPE____PRECISION__GeomParam.kl:23:1
FABRIC_EXT_EXPORT void AlembicO__KLTYPE____PRECISION__GeomParam_set(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicO__KLTYPE____PRECISION__GeomParam >::IOParam this_,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicO__KLTYPE____PRECISION__GeomParamSample >::INParam sample
)
{
  ALEMBIC_TRY_STATEMENT("AlembicO__KLTYPE____PRECISION__GeomParam_set")

  AbcG::OTypedGeomParam<__ABCTRAITS__> * abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicO__KLTYPE____PRECISION__GeomParam, AbcG::OTypedGeomParam<__ABCTRAITS__> >(this_, abcThis_)){
    setError("Error in AlembicO__KLTYPE____PRECISION__GeomParam_set. unable to convert: this_");
    return;
  }

  AbcG::OTypedGeomParam<__ABCTRAITS__>::Sample * abcSample;
  if(!conv_from_AbcBasePtr<KL::AlembicO__KLTYPE____PRECISION__GeomParamSample, AbcG::OTypedGeomParam<__ABCTRAITS__>::Sample>(sample, abcSample)){
    setError("Error in AlembicO__KLTYPE____PRECISION__GeomParam_set. unable to convert: this_");
    return;
  }

  abcThis_->set(*abcSample);

  ALEMBIC_CATCH_STATEMENT("AlembicO__KLTYPE____PRECISION__GeomParam_set")
}

// Defined at build\Windows\x86_64\Release\Native\Exts\Builtin\Alembic/O__KLTYPE____PRECISION__GeomParam.kl:24:1
FABRIC_EXT_EXPORT void AlembicO__KLTYPE____PRECISION__GeomParam_setFromPrevious(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicO__KLTYPE____PRECISION__GeomParam >::IOParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicO__KLTYPE____PRECISION__GeomParam_setFromPrevious")

  AbcG::OTypedGeomParam<__ABCTRAITS__> * abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicO__KLTYPE____PRECISION__GeomParam, AbcG::OTypedGeomParam<__ABCTRAITS__> >(this_, abcThis_)){
    setError("Error in AlembicO__KLTYPE____PRECISION__GeomParam_setFromPrevious. unable to convert: this_");
    return;
  }

  abcThis_->setFromPrevious();

  ALEMBIC_CATCH_STATEMENT("AlembicO__KLTYPE____PRECISION__GeomParam_setFromPrevious")
}

// Defined at build\Windows\x86_64\Release\Native\Exts\Builtin\Alembic/O__KLTYPE____PRECISION__GeomParam.kl:25:1
FABRIC_EXT_EXPORT void AlembicO__KLTYPE____PRECISION__GeomParam_setTimeSampling(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicO__KLTYPE____PRECISION__GeomParam >::IOParam this_,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::UInt32 >::INParam index
)
{
  ALEMBIC_TRY_STATEMENT("AlembicO__KLTYPE____PRECISION__GeomParam_setTimeSampling")

  unsigned int abcIndex = 0;
  if(!conv_from_baseType<KL::UInt32, unsigned int>(index, abcIndex)){
    setError("Error in AlembicO__KLTYPE____PRECISION__GeomParam_setTimeSampling. unable to convert: index");
    return;
  }

  AbcG::OTypedGeomParam<__ABCTRAITS__> * abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicO__KLTYPE____PRECISION__GeomParam, AbcG::OTypedGeomParam<__ABCTRAITS__> >(this_, abcThis_)){
    setError("Error in AlembicO__KLTYPE____PRECISION__GeomParam_setTimeSampling. unable to convert: this_");
    return;
  }

  abcThis_->setTimeSampling(abcIndex);

  ALEMBIC_CATCH_STATEMENT("AlembicO__KLTYPE____PRECISION__GeomParam_setTimeSampling")
}

// Defined at build\Windows\x86_64\Release\Native\Exts\Builtin\Alembic/O__KLTYPE____PRECISION__GeomParam.kl:26:1
FABRIC_EXT_EXPORT Fabric::EDK::KL::UInt32 AlembicO__KLTYPE____PRECISION__GeomParam_getNumSamples(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicO__KLTYPE____PRECISION__GeomParam >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicO__KLTYPE____PRECISION__GeomParam_getNumSamples")

  AbcG::OTypedGeomParam<__ABCTRAITS__> * abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicO__KLTYPE____PRECISION__GeomParam, AbcG::OTypedGeomParam<__ABCTRAITS__> >(this_, abcThis_)){
    setError("Error in AlembicO__KLTYPE____PRECISION__GeomParam_getNumSamples. unable to convert: this_");
    return 0;
  }

  return abcThis_->getNumSamples();

  ALEMBIC_CATCH_STATEMENT_RETURN("AlembicO__KLTYPE____PRECISION__GeomParam_getNumSamples", 0)
}

// Defined at build\Windows\x86_64\Release\Native\Exts\Builtin\Alembic/O__KLTYPE____PRECISION__GeomParam.kl:27:1
FABRIC_EXT_EXPORT void AlembicO__KLTYPE____PRECISION__GeomParam_getDataType(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicDataType >::Result _result,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicO__KLTYPE____PRECISION__GeomParam >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicO__KLTYPE____PRECISION__GeomParam_getDataType")

  AbcG::OTypedGeomParam<__ABCTRAITS__> * abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicO__KLTYPE____PRECISION__GeomParam, AbcG::OTypedGeomParam<__ABCTRAITS__> >(this_, abcThis_)){
    setError("Error in AlembicO__KLTYPE__GeomParam_getDataType. unable to convert: this_");
    return;
  }

  Abc::DataType abc_result = abcThis_->getDataType();
  conv_to_AbcBase<KL::AlembicDataType, Abc::DataType>(abc_result, _result);

  ALEMBIC_CATCH_STATEMENT("AlembicO__KLTYPE____PRECISION__GeomParam_getDataType")
}

// Defined at build\Windows\x86_64\Release\Native\Exts\Builtin\Alembic/O__KLTYPE____PRECISION__GeomParam.kl:28:1
FABRIC_EXT_EXPORT Fabric::EDK::KL::Boolean AlembicO__KLTYPE____PRECISION__GeomParam_isIndexed(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicO__KLTYPE____PRECISION__GeomParam >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicO__KLTYPE____PRECISION__GeomParam_isIndexed")

  AbcG::OTypedGeomParam<__ABCTRAITS__> * abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicO__KLTYPE____PRECISION__GeomParam, AbcG::OTypedGeomParam<__ABCTRAITS__> >(this_, abcThis_)){
    setError("Error in AlembicO__KLTYPE__GeomParam_isIndexed. unable to convert: this_");
    return false;
  }

  return abcThis_->isIndexed();

  ALEMBIC_CATCH_STATEMENT_RETURN("AlembicO__KLTYPE____PRECISION__GeomParam_isIndexed", false)
}

// Defined at build\Windows\x86_64\Release\Native\Exts\Builtin\Alembic/O__KLTYPE____PRECISION__GeomParam.kl:29:1
FABRIC_EXT_EXPORT Fabric::EDK::KL::UInt32 AlembicO__KLTYPE____PRECISION__GeomParam_getScope(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicO__KLTYPE____PRECISION__GeomParam >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicO__KLTYPE____PRECISION__GeomParam_getScope")

  AbcG::OTypedGeomParam<__ABCTRAITS__> * abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicO__KLTYPE____PRECISION__GeomParam, AbcG::OTypedGeomParam<__ABCTRAITS__> >(this_, abcThis_)){
    setError("Error in AlembicO__KLTYPE__GeomParam_getScope. unable to convert: this_");
    return 0;
  }

  return abcThis_->getScope();

  ALEMBIC_CATCH_STATEMENT_RETURN("AlembicO__KLTYPE____PRECISION__GeomParam_getScope", 0)
}

// Defined at build\Windows\x86_64\Release\Native\Exts\Builtin\Alembic/O__KLTYPE____PRECISION__GeomParam.kl:30:1
FABRIC_EXT_EXPORT void AlembicO__KLTYPE____PRECISION__GeomParam_getName(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::String >::Result _result,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicO__KLTYPE____PRECISION__GeomParam >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicO__KLTYPE____PRECISION__GeomParam_getName")

  AbcG::OTypedGeomParam<__ABCTRAITS__> * abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicO__KLTYPE____PRECISION__GeomParam, AbcG::OTypedGeomParam<__ABCTRAITS__> >(this_, abcThis_)){
    setError("Error in AlembicO__KLTYPE____PRECISION__GeomParam_getName. unable to convert: this_");
    return;
  }

  _result = abcThis_->getName().c_str();

  ALEMBIC_CATCH_STATEMENT("AlembicO__KLTYPE____PRECISION__GeomParam_getName")
}

// Defined at build\Windows\x86_64\Release\Native\Exts\Builtin\Alembic/O__KLTYPE____PRECISION__GeomParam.kl:31:1
FABRIC_EXT_EXPORT void AlembicO__KLTYPE____PRECISION__GeomParam_getValueProperty(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOArrayProperty >::Result _result,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicO__KLTYPE____PRECISION__GeomParam >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicO__KLTYPE____PRECISION__GeomParam_getValueProperty")

  AbcG::OTypedGeomParam<__ABCTRAITS__> * abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicO__KLTYPE____PRECISION__GeomParam, AbcG::OTypedGeomParam<__ABCTRAITS__> >(this_, abcThis_)){
    setError("Error in AlembicO__KLTYPE____PRECISION__GeomParam_getValueProperty. unable to convert: this_");
    return;
  }

  Abc::OArrayProperty * abc_result = new Abc::OArrayProperty(abcThis_->getValueProperty());
  conv_to_AbcBasePtr<KL::AlembicOArrayProperty, Abc::OArrayProperty>(abc_result, _result, true);

  ALEMBIC_CATCH_STATEMENT("AlembicO__KLTYPE____PRECISION__GeomParam_getValueProperty")
}

// Defined at build\Windows\x86_64\Release\Native\Exts\Builtin\Alembic/O__KLTYPE____PRECISION__GeomParam.kl:32:1
FABRIC_EXT_EXPORT void AlembicO__KLTYPE____PRECISION__GeomParam_getIndexProperty(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicOArrayProperty >::Result _result,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AlembicO__KLTYPE____PRECISION__GeomParam >::INParam this_
)
{
  ALEMBIC_TRY_STATEMENT("AlembicO__KLTYPE____PRECISION__GeomParam_getIndexProperty")

  AbcG::OTypedGeomParam<__ABCTRAITS__> * abcThis_ = NULL;
  if(!conv_from_AbcBasePtr<KL::AlembicO__KLTYPE____PRECISION__GeomParam, AbcG::OTypedGeomParam<__ABCTRAITS__> >(this_, abcThis_)){
    setError("Error in AlembicO__KLTYPE____PRECISION__GeomParam_getIndexProperty. unable to convert: this_");
    return;
  }

  Abc::OArrayProperty * abc_result = new Abc::OArrayProperty(abcThis_->getIndexProperty());
  conv_to_AbcBasePtr<KL::AlembicOArrayProperty, Abc::OArrayProperty>(abc_result, _result, true);

  ALEMBIC_CATCH_STATEMENT("AlembicO__KLTYPE____PRECISION__GeomParam_getIndexProperty")
}
