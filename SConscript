#
# Copyright 2010-2014 Fabric Software Inc. All rights reserved.
#

import json

Import('env', 'alembicFlags', 'replaceBin', 'mathExt', 'utilExt')

extName = 'Alembic'

env.MergeFlags(alembicFlags)

klFiles = [
  env.File('CameraSample.kl'),
  env.File('DataType.kl'),
  env.File('GeometryScope.kl'),
  env.File('IArchive.kl'),
  env.File('IArrayProperty.kl'),
  env.File('ICamera.kl'),
  env.File('ICameraSchema.kl'),
  env.File('ICompoundProperty.kl'),
  env.File('ICurves.kl'),
  env.File('ICurvesSample.kl'),
  env.File('ICurvesSchema.kl'),
  env.File('IFaceSet.kl'),
  env.File('IFaceSetSample.kl'),
  env.File('IFaceSetSchema.kl'),
  env.File('ILight.kl'),
  env.File('ILightSchema.kl'),
  env.File('INuPatch.kl'),
  env.File('INuPatchSample.kl'),
  env.File('INuPatchSchema.kl'),
  env.File('IObject.kl'),
  env.File('IPoints.kl'),
  env.File('IPointsSample.kl'),
  env.File('IPointsSchema.kl'),
  env.File('IPolyMesh.kl'),
  env.File('IPolyMeshSample.kl'),
  env.File('IPolyMeshSchema.kl'),
  env.File('ISampleSelector.kl'),
  env.File('IScalarProperty.kl'),
  env.File('ISubD.kl'),
  env.File('ISubDSample.kl'),
  env.File('ISubDSchema.kl'),
  env.File('IXform.kl'),
  env.File('IXformSchema.kl'),
  env.File('MetaData.kl'),
  env.File('OArchive.kl'),
  env.File('OArrayProperty.kl'),
  env.File('OCamera.kl'),
  env.File('OCameraSchema.kl'),
  env.File('OCompoundProperty.kl'),
  env.File('OCurves.kl'),
  env.File('OCurvesSample.kl'),
  env.File('OCurvesSchema.kl'),
  env.File('OFaceSet.kl'),
  env.File('OFaceSetSample.kl'),
  env.File('OFaceSetSchema.kl'),
  env.File('OLight.kl'),
  env.File('OLightSchema.kl'),
  env.File('ONuPatch.kl'),
  env.File('ONuPatchSample.kl'),
  env.File('ONuPatchSchema.kl'),
  env.File('OObject.kl'),
  env.File('OPoints.kl'),
  env.File('OPointsSample.kl'),
  env.File('OPointsSchema.kl'),
  env.File('OPolyMesh.kl'),
  env.File('OPolyMeshSample.kl'),
  env.File('OPolyMeshSchema.kl'),
  env.File('OScalarProperty.kl'),
  env.File('OSubD.kl'),
  env.File('OSubDSample.kl'),
  env.File('OSubDSchema.kl'),
  env.File('OXform.kl'),
  env.File('OXformSchema.kl'),
  env.File('PropertyHeader.kl'),
  env.File('TimeSampling.kl'),
  env.File('TimeSamplingType.kl'),
  env.File('XformSample.kl'),
  ]

cppFiles = [
  env.File('AlembicCameraSample_functions.cpp'),
  env.File('AlembicDataType_functions.cpp'),
  env.File('AlembicIArchive_functions.cpp'),
  env.File('AlembicIArrayProperty_functions.cpp'),
  env.File('AlembicICameraSchema_functions.cpp'),
  env.File('AlembicICamera_functions.cpp'),
  env.File('AlembicICompoundProperty_functions.cpp'),
  env.File('AlembicICurvesSample_functions.cpp'),
  env.File('AlembicICurvesSchema_functions.cpp'),
  env.File('AlembicICurves_functions.cpp'),
  env.File('AlembicIFaceSetSample_functions.cpp'),
  env.File('AlembicIFaceSetSchema_functions.cpp'),
  env.File('AlembicIFaceSet_functions.cpp'),
  env.File('AlembicILightSchema_functions.cpp'),
  env.File('AlembicILight_functions.cpp'),
  env.File('AlembicINuPatchSample_functions.cpp'),
  env.File('AlembicINuPatchSchema_functions.cpp'),
  env.File('AlembicINuPatch_functions.cpp'),
  env.File('AlembicIObject_functions.cpp'),
  env.File('AlembicIPointsSample_functions.cpp'),
  env.File('AlembicIPointsSchema_functions.cpp'),
  env.File('AlembicIPoints_functions.cpp'),
  env.File('AlembicIPolyMeshSample_functions.cpp'),
  env.File('AlembicIPolyMeshSchema_functions.cpp'),
  env.File('AlembicIPolyMesh_functions.cpp'),
  env.File('AlembicISampleSelector_functions.cpp'),
  env.File('AlembicIScalarProperty_functions.cpp'),
  env.File('AlembicISubDSample_functions.cpp'),
  env.File('AlembicISubDSchema_functions.cpp'),
  env.File('AlembicISubD_functions.cpp'),
  env.File('AlembicIXformSchema_functions.cpp'),
  env.File('AlembicIXform_functions.cpp'),
  env.File('AlembicMetaData_functions.cpp'),
  env.File('AlembicOArchive_functions.cpp'),
  env.File('AlembicOArrayProperty_functions.cpp'),
  env.File('AlembicOCameraSchema_functions.cpp'),
  env.File('AlembicOCamera_functions.cpp'),
  env.File('AlembicOCompoundProperty_functions.cpp'),
  env.File('AlembicOCurvesSample_functions.cpp'),
  env.File('AlembicOCurvesSchema_functions.cpp'),
  env.File('AlembicOCurves_functions.cpp'),
  env.File('AlembicOFaceSetSample_functions.cpp'),
  env.File('AlembicOFaceSetSchema_functions.cpp'),
  env.File('AlembicOFaceSet_functions.cpp'),
  env.File('AlembicOLightSchema_functions.cpp'),
  env.File('AlembicOLight_functions.cpp'),
  env.File('AlembicONuPatchSample_functions.cpp'),
  env.File('AlembicONuPatchSchema_functions.cpp'),
  env.File('AlembicONuPatch_functions.cpp'),
  env.File('AlembicOObject_functions.cpp'),
  env.File('AlembicOPointsSample_functions.cpp'),
  env.File('AlembicOPointsSchema_functions.cpp'),
  env.File('AlembicOPoints_functions.cpp'),
  env.File('AlembicOPolyMeshSample_functions.cpp'),
  env.File('AlembicOPolyMeshSchema_functions.cpp'),
  env.File('AlembicOPolyMesh_functions.cpp'),
  env.File('AlembicOScalarProperty_functions.cpp'),
  env.File('AlembicOSubDSample_functions.cpp'),
  env.File('AlembicOSubDSchema_functions.cpp'),
  env.File('AlembicOSubD_functions.cpp'),
  env.File('AlembicOXformSchema_functions.cpp'),
  env.File('AlembicOXform_functions.cpp'),
  env.File('AlembicPropertyHeader_functions.cpp'),
  env.File('AlembicTimeSamplingType_functions.cpp'),
  env.File('AlembicTimeSampling_functions.cpp'),
  env.File('AlembicXformSample_functions.cpp'),
  env.File('extension.cpp'),
  ]

def generateFileFromTemplateCommand(patterns):
  result = ["${SOURCES[1]}"]
  for key in patterns:
    if patterns[key] == '':
      result += [key, '****DELETE****']
    else:
      result += [key, patterns[key]]
  result += ["<${SOURCES[0]}", ">$TARGET"]
  return Flatten(result)

simpleTypedScalarProperties = [
  ['Boolean', 'Boolean', 'kBooleanPOD', 'Abc::bool_t', 'Abc::BooleanTPTraits'],
  ['SInt8', 'SInt8', 'kInt8POD', 'Abc::int8_t', 'Abc::Int8TPTraits'],
  ['SInt16', 'SInt16', 'kInt16POD', 'Abc::int16_t', 'Abc::Int16TPTraits'],
  ['SInt32', 'SInt32', 'kInt32POD', 'Abc::int32_t', 'Abc::Int32TPTraits'],
  ['SInt64', 'SInt64', 'kInt64POD', 'Abc::int64_t', 'Abc::Int64TPTraits'],
  ['UInt8', 'UInt8', 'kUint8POD', 'Abc::uint8_t', 'Abc::Uint8TPTraits'],
  ['UInt16', 'UInt16', 'kUint16POD', 'Abc::uint16_t', 'Abc::Uint16TPTraits'],
  ['UInt32', 'UInt32', 'kUint32POD', 'Abc::uint32_t', 'Abc::Uint32TPTraits'],
  ['UInt64', 'UInt64', 'kUint64POD', 'Abc::uint64_t', 'Abc::Uint64TPTraits'],
  ['Float16', 'Float32', 'kFloat16POD'],
  ['Float32', 'Float32', 'kFloat32POD', 'Abc::float32_t', 'Abc::Float32TPTraits'],
  ['Float64', 'Float64', 'kFloat64POD', 'Abc::float64_t', 'Abc::Float64TPTraits'],
  ['String', 'String', 'kStringPOD'],
]

mathTypedScalarProperties = [
  [
    'Vec2', 'kFloat32POD', 2,
    'Vec2(Float32(packed[offset+0]), Float32(packed[offset+1]));', 
    '_result[i].x = packed[offset+0]; _result[i].y = packed[offset+1];',
    'packed[offset+0] = value.x; packed[offset+1] = value.y;',
    'Abc::V2#,Abc::V2#', 'Abc::V2#TPTraits,Abc::N2#TPTraits', 'sifd,fd'
  ],
  [
    'Vec3', 'kFloat32POD', 3, 
    'Vec3(Float32(packed[offset+0]), Float32(packed[offset+1]), Float32(packed[offset+2]));', 
    '_result[i].x = packed[offset+0]; _result[i].y = packed[offset+1]; _result[i].z = packed[offset+2];',
    'packed[offset+0] = value.x; packed[offset+1] = value.y; packed[offset+2] = value.z;',
    'Abc::V3#,Abc::N3#', 'Abc::V3#TPTraits,Abc::N3#TPTraits', 'sifd,fd'
  ],
  [
    'Quat', 'kFloat32POD', 4, 
    'Quat(Float32(packed[offset+1]), Float32(packed[offset+2]), Float32(packed[offset+3]), Float32(packed[offset+0]));', 
    '_result[i].w = packed[offset+0]; _result[i].v.x = packed[offset+1]; '
    '_result[i].v.y = packed[offset+2]; _result[i].v.z = packed[offset+3];',
    'packed[offset+0] = value.w; packed[offset+1] = value.v.x; '
    'packed[offset+2] = value.v.y; packed[offset+3] = value.v.z;',
    'Abc::Quat#', 'Abc::Quat#TPTraits', 'fd'
  ],
  [
    'Box2', 'kFloat32POD', 4, 
    'Box2(Vec2(Float32(packed[offset+0]), Float32(packed[offset+1])), Vec2(Float32(packed[offset+2]), Float32(packed[offset+3])));', 
    '_result[i].min.x = packed[offset+0]; _result[i].min.y = packed[offset+1]; '
    '_result[i].max.x = packed[offset+2]; _result[i].max.y = packed[offset+3];',
    'packed[offset+0] = value.min.x; packed[offset+1] = value.min.y; '
    'packed[offset+2] = value.max.x; packed[offset+3] = value.max.y;',
    'Abc::Box2#', 'Abc::Box2#TPTraits', 'sifd'
  ],
  [
    'Box3', 'kFloat32POD', 6, 
    'Box3(Vec3(Float32(packed[offset+0]), Float32(packed[offset+1]), Float32(packed[offset+2])), Vec3(Float32(packed[offset+3]), Float32(packed[offset+4]), Float32(packed[offset+5])));', 
    '_result[i].min.x = packed[offset+0]; _result[i].min.y = packed[offset+1]; '
    '_result[i].min.z = packed[offset+2]; _result[i].max.x = packed[offset+3]; '
    '_result[i].max.y = packed[offset+4]; _result[i].max.z = packed[offset+5];',
    'packed[offset+0] = value.min.x; packed[offset+1] = value.min.y; '
    'packed[offset+2] = value.min.z; packed[offset+3] = value.max.x; '
    'packed[offset+4] = value.max.y; packed[offset+5] = value.max.z;',
    'Abc::Box3#', 'Abc::Box3#TPTraits', 'sifd'
  ],
  [
    'Mat33', 'kFloat32POD', 9, 
    'Mat33(Vec3(Float32(packed[offset+0]), Float32(packed[offset+1]), Float32(packed[offset+2])), Vec3(Float32(packed[offset+3]), Float32(packed[offset+4]), Float32(packed[offset+5])), Vec3(Float32(packed[offset+6]), Float32(packed[offset+7]), Float32(packed[offset+8])));', 
    '_result[i].row0.x = packed[offset+0]; _result[i].row0.y = packed[offset+1]; _result[i].row0.z = packed[offset+2]; '
    '_result[i].row1.x = packed[offset+3]; _result[i].row1.y = packed[offset+4]; _result[i].row1.z = packed[offset+5]; '
    '_result[i].row2.x = packed[offset+6]; _result[i].row2.y = packed[offset+7]; _result[i].row2.z = packed[offset+8];',
    'packed[offset+0] = value.row0.x; packed[offset+1] = value.row0.y; packed[offset+2] = value.row0.z; '
    'packed[offset+3] = value.row1.x; packed[offset+4] = value.row1.y; packed[offset+5] = value.row1.z; '
    'packed[offset+6] = value.row2.x; packed[offset+7] = value.row2.y; packed[offset+8] = value.row2.z;',
    'Abc::M33#', 'Abc::M33#TPTraits', 'fd'
  ],
  [
    'Mat44', 'kFloat32POD', 16, 
    'Mat44(Vec4(Float32(packed[offset+0]), Float32(packed[offset+1]), Float32(packed[offset+2]), Float32(packed[offset+3])), '
    'Vec4(Float32(packed[offset+4]), Float32(packed[offset+5]), Float32(packed[offset+6]), Float32(packed[offset+7])), '
    'Vec4(Float32(packed[offset+8]), Float32(packed[offset+9]), Float32(packed[offset+10]), Float32(packed[offset+11])), '
    'Vec4(Float32(packed[offset+12]), Float32(packed[offset+13]), Float32(packed[offset+14]), Float32(packed[offset+15])));', 
    '_result[i].row0.x = packed[offset+0]; _result[i].row0.y = packed[offset+1]; _result[i].row0.z = packed[offset+2];  _result[i].row0.t = packed[offset+3]; '
    '_result[i].row1.x = packed[offset+4]; _result[i].row1.y = packed[offset+5]; _result[i].row1.z = packed[offset+6];  _result[i].row1.t = packed[offset+7]; '
    '_result[i].row2.x = packed[offset+8]; _result[i].row2.y = packed[offset+9]; _result[i].row2.z = packed[offset+10];  _result[i].row2.t = packed[offset+11]; '
    '_result[i].row3.x = packed[offset+12]; _result[i].row3.y = packed[offset+13]; _result[i].row3.z = packed[offset+14];  _result[i].row3.t = packed[offset+15];',
    'packed[offset+0] = value.row0.x; packed[offset+1] = value.row0.y; packed[offset+2] = value.row0.z;  packed[offset+3] = value.row0.t; '
    'packed[offset+4] = value.row1.x; packed[offset+5] = value.row1.y; packed[offset+6] = value.row1.z;  packed[offset+7] = value.row1.t; '
    'packed[offset+8] = value.row2.x; packed[offset+9] = value.row2.y; packed[offset+10] = value.row2.z;  packed[offset+11] = value.row2.t; '
    'packed[offset+12] = value.row3.x; packed[offset+13] = value.row3.y; packed[offset+14] = value.row3.z;  packed[offset+15] = value.row3.t;',
    'Abc::M44#', 'Abc::M44#TPTraits', 'fd'
  ],
  [
    'Color', 'kFloat32POD', 4, 
    'Color(Float32(packed[offset+0]), Float32(packed[offset+1]), Float32(packed[offset+2]), Float32(packed[offset+3]));', 
    '_result[i].r = packed[offset+0]; _result[i].g = packed[offset+1]; _result[i].b = packed[offset+2]; _result[i].a = packed[offset+3];',
    'packed[offset+0] = value.r; packed[offset+1] = value.g; packed[offset+2] = value.b; packed[offset+3] = value.a;',
    'Abc::C4#', 'Abc::C4#TPTraits', 'hf'
  ],
]

for prop in simpleTypedScalarProperties:
  patterns = {
    "__KLTYPE__": str(prop[0]),
    "__PROPKLTYPE__": str(prop[1]),
    "__ABCPOD__": str(prop[2])
  }
  templateFile = env.File('ISimpleTypedScalarProperty.template.kl')
  klFile = env.File('I'+prop[0]+'Property.kl')
  klFiles += env.Command(klFile, [templateFile, replaceBin], [generateFileFromTemplateCommand(patterns = patterns)])

  templateFile = env.File('OSimpleTypedScalarProperty.template.kl')
  klFile = env.File('O'+prop[0]+'Property.kl')
  klFiles += env.Command(klFile, [templateFile, replaceBin], [generateFileFromTemplateCommand(patterns = patterns)])

  templateFile = env.File('ISimpleTypedArrayProperty.template.kl')
  klFile = env.File('I'+prop[0]+'ArrayProperty.kl')
  klFiles += env.Command(klFile, [templateFile, replaceBin], [generateFileFromTemplateCommand(patterns = patterns)])

  templateFile = env.File('OSimpleTypedArrayProperty.template.kl')
  klFile = env.File('O'+prop[0]+'ArrayProperty.kl')
  klFiles += env.Command(klFile, [templateFile, replaceBin], [generateFileFromTemplateCommand(patterns = patterns)])

for prop in mathTypedScalarProperties:
  patterns = {
    "__KLTYPE__": str(prop[0]),
    "__ABCPOD__": str(prop[1]),
    "__ABCEXTENT__": str(prop[2]),
    "__KLPACK__": str(prop[3]),
    "__KLUNPACK__": str(prop[5]),
  }
  templateFile = env.File('IMathTypedScalarProperty.template.kl')
  klFile = env.File('I'+prop[0]+'Property.kl')
  klFiles += env.Command(klFile, [templateFile, replaceBin], [generateFileFromTemplateCommand(patterns = patterns)])

  templateFile = env.File('OMathTypedScalarProperty.template.kl')
  klFile = env.File('O'+prop[0]+'Property.kl')
  klFiles += env.Command(klFile, [templateFile, replaceBin], [generateFileFromTemplateCommand(patterns = patterns)])

  templateFile = env.File('IMathTypedArrayProperty.template.kl')
  klFile = env.File('I'+prop[0]+'ArrayProperty.kl')
  klFiles += env.Command(klFile, [templateFile, replaceBin], [generateFileFromTemplateCommand(patterns = patterns)])

  templateFile = env.File('OMathTypedArrayProperty.template.kl')
  klFile = env.File('O'+prop[0]+'ArrayProperty.kl')
  klFiles += env.Command(klFile, [templateFile, replaceBin], [generateFileFromTemplateCommand(patterns = patterns)])

for param in simpleTypedScalarProperties:
  if len(param) <= 3:
    continue
  patterns = {
    "__KLTYPE__": str(param[0]),
    "__ABCTYPE__": str(param[3]),
    "__ABCTRAITS__": str(param[4]),
    "__PRECISION__": ''
  }

  templateFile = env.File('ISimpleTypedGeomParamSample.template.kl')
  klFile = env.File('I'+param[0]+'GeomParamSample.kl')
  klFiles += env.Command(klFile, [templateFile, replaceBin], [generateFileFromTemplateCommand(patterns = patterns)])

  templateFile = env.File('ISimpleTypedGeomParamSample.template.cpp')
  cppFile = env.File('AlembicI'+param[0]+'GeomParamSample_functions.cpp')
  cppFiles += env.Command(cppFile, [templateFile, replaceBin], [generateFileFromTemplateCommand(patterns = patterns)])

  templateFile = env.File('OSimpleTypedGeomParamSample.template.kl')
  klFile = env.File('O'+param[0]+'GeomParamSample.kl')
  klFiles += env.Command(klFile, [templateFile, replaceBin], [generateFileFromTemplateCommand(patterns = patterns)])

  templateFile = env.File('OSimpleTypedGeomParamSample.template.cpp')
  cppFile = env.File('AlembicO'+param[0]+'GeomParamSample_functions.cpp')
  cppFiles += env.Command(cppFile, [templateFile, replaceBin], [generateFileFromTemplateCommand(patterns = patterns)])

  templateFile = env.File('IMathTypedGeomParam.template.kl')
  klFile = env.File('I'+param[0]+'GeomParam.kl')
  klFiles += env.Command(klFile, [templateFile, replaceBin], [generateFileFromTemplateCommand(patterns = patterns)])

  templateFile = env.File('IMathTypedGeomParam.template.cpp')
  cppFile = env.File('AlembicI'+param[0]+'GeomParam_functions.cpp')
  cppFiles += env.Command(cppFile, [templateFile, replaceBin], [generateFileFromTemplateCommand(patterns = patterns)])
 
  templateFile = env.File('OMathTypedGeomParam.template.kl')
  klFile = env.File('O'+param[0]+'GeomParam.kl')
  klFiles += env.Command(klFile, [templateFile, replaceBin], [generateFileFromTemplateCommand(patterns = patterns)])

  templateFile = env.File('OMathTypedGeomParam.template.cpp')
  cppFile = env.File('AlembicO'+param[0]+'GeomParam_functions.cpp')
  cppFiles += env.Command(cppFile, [templateFile, replaceBin], [generateFileFromTemplateCommand(patterns = patterns)])

for param in mathTypedScalarProperties:
  if len(param) <= 6:
    continue

  abcTypes = param[6].split(',')
  abcTraits = param[7].split(',')
  abcPrecisions = param[8].split(',')

  for j in range(len(abcTraits)):

    for i in range(len(abcPrecisions[j])):
      precision = abcPrecisions[j][i]

      baseType = 'Abc::float32_t'
      if precision == 'h':
        baseType = 'Abc::float16_t'
      elif precision == 'd':
        baseType = 'Abc::float64_t'
      elif precision == 'c':
        baseType = 'Abc::int8_t'
      elif precision == 's':
        baseType = 'Abc::int16_t'
      elif precision == 'i':
        baseType = 'Abc::int32_t'

      if len(abcTraits) > 1:
        precision = abcTraits[j].split('::')[1][0]+abcPrecisions[j][i]

      patterns = {
        "__KLTYPE__": str(param[0]),
        "__ABCPOD__": str(param[1]),
        "__ABCEXTENT__": str(param[2]),
        "__KLPACK__": str(param[4]),
        "__KLUNPACK__": str(param[5]),
        "__PRECISION__": precision,
        "__ABCBASETYPE__": baseType,
        "__ABCTYPE__": abcTypes[j].replace('#', abcPrecisions[j][i]),
        "__ABCTRAITS__": abcTraits[j].replace('#', abcPrecisions[j][i])
      }

      templateFile = env.File('IMathTypedGeomParamSample.template.kl')
      klFile = env.File('I'+param[0]+precision+'GeomParamSample.kl')
      klFiles += env.Command(klFile, [templateFile, replaceBin], [generateFileFromTemplateCommand(patterns = patterns)])

      templateFile = env.File('IMathTypedGeomParamSample.template.cpp')
      cppFile = env.File('AlembicI'+param[0]+precision+'GeomParamSample_functions.cpp')
      cppFiles += env.Command(cppFile, [templateFile, replaceBin], [generateFileFromTemplateCommand(patterns = patterns)])

      templateFile = env.File('OMathTypedGeomParamSample.template.kl')
      klFile = env.File('O'+param[0]+precision+'GeomParamSample.kl')
      klFiles += env.Command(klFile, [templateFile, replaceBin], [generateFileFromTemplateCommand(patterns = patterns)])

      templateFile = env.File('OMathTypedGeomParamSample.template.cpp')
      cppFile = env.File('AlembicO'+param[0]+precision+'GeomParamSample_functions.cpp')
      cppFiles += env.Command(cppFile, [templateFile, replaceBin], [generateFileFromTemplateCommand(patterns = patterns)])

      templateFile = env.File('IMathTypedGeomParam.template.kl')
      klFile = env.File('I'+param[0]+precision+'GeomParam.kl')
      klFiles += env.Command(klFile, [templateFile, replaceBin], [generateFileFromTemplateCommand(patterns = patterns)])

      templateFile = env.File('IMathTypedGeomParam.template.cpp')
      cppFile = env.File('AlembicI'+param[0]+precision+'GeomParam_functions.cpp')
      cppFiles += env.Command(cppFile, [templateFile, replaceBin], [generateFileFromTemplateCommand(patterns = patterns)])

      templateFile = env.File('OMathTypedGeomParam.template.kl')
      klFile = env.File('O'+param[0]+precision+'GeomParam.kl')
      klFiles += env.Command(klFile, [templateFile, replaceBin], [generateFileFromTemplateCommand(patterns = patterns)])

      templateFile = env.File('OMathTypedGeomParam.template.cpp')
      cppFile = env.File('AlembicO'+param[0]+precision+'GeomParam_functions.cpp')
      cppFiles += env.Command(cppFile, [templateFile, replaceBin], [generateFileFromTemplateCommand(patterns = patterns)])

catCommands = [
  Delete("$TARGET"),
  Touch("$TARGET"),
  ]
for klFile in klFiles:
  catCommands.append(['cat', klFile, '>>$TARGET'])
oneKLFile = env.Command(
  env.File(extName + '.kl'),
  klFiles,
  catCommands
  )
alembicExt = env.FabricExt(
  extName,
  cppFiles + oneKLFile,
  dependencies = [mathExt, utilExt],
  )

Alias("alembicExt", alembicExt)
AlembicExtFiles = alembicExt
Export('AlembicExtFiles')
Return('alembicExt')
