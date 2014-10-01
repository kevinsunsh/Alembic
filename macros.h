/*
 *  Copyright 2010-2014 Fabric Software Inc. All rights reserved.
 */

#ifndef __macros_h__
#define __macros_h__

#define QUOTEDNAME(name) #name
#define ALEMBIC_TRY_STATEMENT(functionName) try {
#define ALEMBIC_CATCH_STATEMENT(functionName) } catch (Alembic::Util::Exception e) { \
  FABRIC_EXT_SETERROR_AND_RETURN("%s: %s", QUOTEDNAME(functionName), e.what()); \
}
#define ALEMBIC_CATCH_STATEMENT_RETURN(functionName, value) } catch (Alembic::Util::Exception e) { \
  FABRIC_EXT_SETERROR_AND_RETURN_VALUE(value, "%s: %s", QUOTEDNAME(functionName), e.what()); \
}

#define construct_AbcBase(AbcType) \
  this_->handle = NULL;

#define free_AbcBase(AbcType) \
  if(!this_.isValid()) \
    return; \
  if(this_->handle != NULL) \
  { \
    ((Handle<AbcType> *)this_->handle)->release(); \
    this_->handle = NULL; \
  }

#define construct_AbcBasePtr(AbcType) \
  this_->handle = new PtrHandle<AbcType>(new AbcType(), true);

#define free_AbcBasePtr(AbcType) \
  if(this_->handle != NULL) \
  { \
    ((PtrHandle<AbcType> *)this_->handle)->release(); \
    this_->handle = NULL; \
  }

#define AlembicGetMetaData() \
  const Abc::MetaData & abc_result = abcThis_->getMetaData(); \
  conv_to_AbcBasePtr<KL::AlembicMetaData, Abc::MetaData>((Abc::MetaData*)&abc_result, _result);

#define AlembicPropertyGetHeader() \
  const Abc::PropertyHeader & abc_result = abcThis_->getHeader(); \
  conv_to_AbcBasePtr<KL::AlembicPropertyHeader, Abc::PropertyHeader>((Abc::PropertyHeader*)&abc_result, _result);

#define AlembicIArrayPropertyGetExport(KLType, AbcType) \
  const Abc::PropertyHeader & header = abcThis_->getHeader(); \
  if(header.getDataType().getExtent() == 0) \
    return; \
  if(header.getDataType().getPod() != Abc::AbcType) \
    FABRIC_EXT_SETERROR_AND_RETURN("AlembicIArrayProperty_getAs%s: DataType.pod() not %s.", QUOTEDNAME(KLType), QUOTEDNAME(AbcType)); \
  AbcA::ArraySamplePtr sample; \
  abcThis_->get(sample); \
  if(!sample) \
    return; \
  if(sample->size() == 0) \
    return; \
  _result.resize(sample->size() * header.getDataType().getExtent()); \
  memcpy(&_result[0], sample->getData(), sample->size() * PODNumBytes(Abc::AbcType) * header.getDataType().getExtent());

#define AlembicIArrayPropertyGetWithISSExport(KLType, AbcType) \
  const Abc::PropertyHeader & header = abcThis_->getHeader(); \
  if(header.getDataType().getExtent() == 0) \
    return; \
  if(header.getDataType().getPod() != Abc::AbcType) \
    FABRIC_EXT_SETERROR_AND_RETURN("AlembicIArrayProperty_getAs%ssWithISS: DataType.pod() not %s.", QUOTEDNAME(KLType), QUOTEDNAME(AbcType)); \
  AbcA::ArraySamplePtr sample; \
  abcThis_->get(sample, *abcISS); \
  if(!sample) \
    return; \
  if(sample->size() == 0) \
    return; \
  _result.resize(sample->size() * header.getDataType().getExtent()); \
  memcpy(&_result[0], sample->getData(), sample->size() * PODNumBytes(Abc::AbcType) * header.getDataType().getExtent());

#define AlembicOArrayPropertySetExport(KLType, AbcType) \
  const Abc::PropertyHeader & header = abcThis_->getHeader(); \
  if(header.getDataType().getExtent() == 0) \
    return; \
  if(header.getDataType().getPod() != Abc::AbcType) \
    FABRIC_EXT_SETERROR_AND_RETURN("AlembicOArrayProperty_setAs%s: DataType.pod() not %s.", QUOTEDNAME(KLType), QUOTEDNAME(AbcType)); \
  if(values.size() == 0) \
    abcThis_->set(Abc::ArraySample()); \
  else \
    abcThis_->set(Abc::ArraySample(&values[0], header.getDataType(), AbcU::Dimensions(values.size() / header.getDataType().getExtent())));

#define AlembicIExtractExternalArrayFromSample(ArraySampleTypePtr, KLType, method) \
  ArraySampleTypePtr arraySamplePtr = abcThis_->method(); \
  if(!arraySamplePtr) \
    return; \
  if(arraySamplePtr->size() == 0) \
    return; \
  _result = KL::ExternalArray<KLType>((KLType *)arraySamplePtr->getData(), arraySamplePtr->size());

#define AlembicOExtractExternalArrayFromSample(ArraySampleType, KLType, method) \
  const ArraySampleType & arraySample = abcThis_->method(); \
  if(arraySample.size() == 0) \
    return; \
  _result = KL::ExternalArray<KLType>((KLType *)arraySample.getData(), arraySample.size());

#define AlembicPackExternalArrayToSample(ArraySampleType, AbcBaseType, method) \
  ArraySampleType arraySample; \
  if(values.size() > 0) \
    arraySample = ArraySampleType((const AbcBaseType *)&values[0], values.size()); \
  abcThis_->method(arraySample);

#define AlembicIScalarPropertyGetExport(KLType, AbcType) \
  const Abc::PropertyHeader & header = abcThis_->getHeader(); \
  if(header.getDataType().getExtent() == 0) \
    return; \
  if(header.getDataType().getPod() != Abc::AbcType) \
    FABRIC_EXT_SETERROR_AND_RETURN("AlembicIScalarProperty_getAs%s: DataType.pod() not %s.", QUOTEDNAME(KLType), QUOTEDNAME(AbcType)); \
  _result.resize(header.getDataType().getExtent()); \
  abcThis_->get(&_result[0]);

#define AlembicIScalarPropertyGetExportWithISS(KLType, AbcType) \
  const Abc::PropertyHeader & header = abcThis_->getHeader(); \
  if(header.getDataType().getExtent() == 0) \
    return; \
  if(header.getDataType().getPod() != Abc::AbcType) \
    FABRIC_EXT_SETERROR_AND_RETURN("AlembicIScalarProperty_getAs%sWithISS: DataType.pod() not %s.", QUOTEDNAME(KLType), QUOTEDNAME(AbcType)); \
  _result.resize(header.getDataType().getExtent()); \
  abcThis_->get(&_result[0], *abcISS);

#define AlembicOScalarPropertySetExport(KLType, AbcType) \
  const Abc::PropertyHeader & header = abcThis_->getHeader(); \
  if(header.getDataType().getExtent() == 0) \
    return; \
  if(header.getDataType().getPod() != Abc::AbcType) \
    FABRIC_EXT_SETERROR_AND_RETURN("AlembicOScalarProperty_setAs%s: DataType.pod() not %s.", QUOTEDNAME(KLType), QUOTEDNAME(AbcType)); \
  abcThis_->set(&values[0]);

#endif