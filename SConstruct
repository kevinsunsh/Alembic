import os, platform
import shutil

# check environment variables
envVars = [
  "FABRIC_DIR", 
  "FABRIC_VERSION",
  "FABRIC_BUILD_OS",
  "FABRIC_BUILD_ARCH",
  "FABRIC_BUILD_TYPE",
  "ILMBASE_INCLUDE_DIR", 
  "ILMBASE_LIBRARY_DIR", 
  "BOOST_INCLUDE_DIR", 
  "BOOST_LIBRARY_DIR", 
  "ZLIB_INCLUDE_DIR", 
  "ZLIB_LIBRARY_DIR", 
  "HDF5_INCLUDE_DIR", 
  "HDF5_LIBRARY_DIR", 
  "ALEMBIC_INCLUDE_DIR", 
  "ALEMBIC_LIBRARY_DIR"
]

for var in envVars:
  if not os.environ.has_key(var):
    print 'The environment variable %s is not defined.' % var
    exit(0)
  if var.lower().endswith('_dir'):
    if not os.path.exists(os.environ[var]):
      print 'The path for environment variable %s does not exist.' % var
      exit(0)

envVarDict = {
  'PATH': os.environ['PATH'] + os.pathsep + os.path.join(os.environ['FABRIC_DIR'], 'bin') + os.pathsep + os.path.join(os.environ['FABRIC_DIR'], 'lib'),
  'FABRIC_EXTS_PATH': os.path.join(os.environ['FABRIC_DIR'], 'Exts'),
  'HOME': os.path.expanduser("~"),
  'HOMEPATH': os.path.expanduser("~"),
  'APPDATA': os.path.expanduser("~/AppData/Roaming"),
  'USERPROFILE': os.path.expanduser("~")
}
for envVar in envVars:
  envVarDict[envVar] = os.environ[envVar]

extEnv = Environment(
  ENV = envVarDict
)

def RemoveFolderCmd(target, source, env):
  if os.path.exists(source[0].abspath):
    shutil.rmtree(source[0].abspath)

# define the clean target
if 'clean' in COMMAND_LINE_TARGETS:
  cleanBuild = extEnv.Command( extEnv.File('cleaning build folder'), extEnv.Dir('.build'), RemoveFolderCmd )
  cleanKL2edk = extEnv.Command( extEnv.File('cleaning kl2edk folder'), extEnv.Dir('.kl2edk'), RemoveFolderCmd )
  cleanStage = extEnv.Command( extEnv.File('cleaning stage folder'), extEnv.Dir('.stage'), RemoveFolderCmd )
  extEnv.Alias('clean', [cleanBuild, cleanKL2edk, cleanStage])
  Return()

# look for replace executable
replaceBin = os.path.join(os.environ['FABRIC_DIR'], 'bin', 'replace')
if os.environ['FABRIC_BUILD_OS'] == 'Windows':
  replaceBin += '.exe'
if not os.path.exists(replaceBin):
  print 'The replace command line does not exist: "%s"' % replaceBin
  exit(0)

# look for kl2edk executable
kl2edkBin = os.path.join(os.environ['FABRIC_DIR'], 'bin', 'kl2edk')
if os.environ['FABRIC_BUILD_OS'] == 'Windows':
  kl2edkBin += '.exe'
if not os.path.exists(kl2edkBin):
  print 'The kl2edk command line does not exist: "%s"' % replaceBin
  exit(0)

# setup boost libs
boost_1_55_Libs = []
if os.environ['FABRIC_BUILD_OS'] == 'Windows':
  if os.environ['FABRIC_BUILD_TYPE'] == 'Debug':
    boost_1_55_Libs += ['libboost_program_options-vc100-mt-sgd-1_55', 'libboost_date_time-vc100-mt-sgd-1_55', 'libboost_iostreams-vc100-mt-sgd-1_55', 'libboost_thread-vc100-mt-sgd-1_55', 'libboost_system-vc100-mt-sgd-1_55', 'libboost_filesystem-vc100-mt-sgd-1_55', 'libboost_regex-vc100-mt-sgd-1_55', 'libboost_chrono-vc100-mt-sgd-1_55']
  else:
    boost_1_55_Libs += ['libboost_program_options-vc100-mt-s-1_55', 'libboost_date_time-vc100-mt-s-1_55', 'libboost_iostreams-vc100-mt-s-1_55', 'libboost_thread-vc100-mt-s-1_55', 'libboost_system-vc100-mt-s-1_55', 'libboost_filesystem-vc100-mt-s-1_55', 'libboost_regex-vc100-mt-s-1_55', 'libboost_chrono-vc100-mt-s-1_55']
else:
  boost_1_55_Libs += ['boost_program_options', 'boost_date_time', 'boost_iostreams', 'boost_thread', 'boost_system', 'boost_filesystem', 'boost_regex', 'boost_chrono']

# setup alembic libs
alembicLibs = []
if os.environ['FABRIC_BUILD_OS'] == 'Windows':
  alembicLibs.extend(['zlib'])
else:  
  alembicLibs.extend(['z'])

alembicLibs.extend(boost_1_55_Libs)
alembicLibs.extend([
  'AlembicOgawa',
  'AlembicAbc',
  'AlembicAbcCoreAbstract',
  'AlembicAbcCoreHDF5',
  'AlembicAbcCoreOgawa',
  'AlembicAbcCoreFactory',
  'AlembicAbcCollection',
  'AlembicAbcGeom',
  'AlembicAbcMaterial',
  'AlembicUtil'
])
alembicLibs.extend(['hdf5_hl', 'hdf5'])
alembicLibs.extend(['Iex', 'Imath', 'Half', 'IlmThread'])
if os.environ['FABRIC_BUILD_OS'] == 'Darwin':
  alembicLibs.extend(['stdc++'])

# define the actual build flags
alembicFlags = {
    'CPPPATH': [
      extEnv.Dir('.'),
      extEnv.Dir('.build'),
      extEnv.Dir('.kl2edk'),
      os.path.join(os.environ['FABRIC_DIR'], 'include'),
      os.environ['ILMBASE_INCLUDE_DIR'],
      os.environ['ZLIB_INCLUDE_DIR'],
      os.environ['BOOST_INCLUDE_DIR'],
      os.environ['HDF5_INCLUDE_DIR'],
      os.environ['ALEMBIC_INCLUDE_DIR']
    ],
    'LIBPATH': [
      os.environ['ILMBASE_LIBRARY_DIR'],
      os.environ['ZLIB_LIBRARY_DIR'],
      os.environ['BOOST_LIBRARY_DIR'],
      os.environ['HDF5_LIBRARY_DIR'],
      os.environ['ALEMBIC_LIBRARY_DIR']
    ],
    'LIBS': alembicLibs
}

# create the staging folder
kl2edkDir = extEnv.Dir('.kl2edk').abspath
if not os.path.exists(kl2edkDir):
  os.makedirs(kl2edkDir)
if not os.path.exists(extEnv.Dir('.stage').abspath):
  os.makedirs(extEnv.Dir('.stage').abspath)

def FabricExt(env, extName, sourceFiles, dependencies = []):
  fpmFile = env.File(extName+'.fpm.json')
  filesToInstall = [fpmFile]

  klFiles = []
  cppFiles = []
  for sourceFile in sourceFiles:
    fileExt = sourceFile.abspath.rpartition('.')[2]
    if fileExt.lower() == 'kl':
      klFiles += [sourceFile]
      filesToInstall += [sourceFile]
    elif fileExt.lower() == 'cpp':
      cppFiles += [sourceFile]

  extLibFileName = '%s-%s-%s' % (extName, os.environ['FABRIC_BUILD_OS'], os.environ['FABRIC_BUILD_ARCH'])
  library = env.SharedLibrary(extLibFileName, cppFiles)
  filesToInstall += [library]

  installedFpmFile = env.Install(env.Dir('.'), fpmFile.srcnode())

  # generate all headers using kl2edk
  kl2edkCommand = env.Command(
    env.File(extName+'.h'),
    klFiles,
    [
      [kl2edkBin, '-o', kl2edkDir] + installedFpmFile
    ]
  )
  env.Depends(kl2edkCommand, installedFpmFile)
  codeGenFile = env.Dir('.').File(extName+'.codegen.json').srcnode()
  if os.path.exists(codeGenFile.abspath):
    installedCodeGenFile = env.Install(env.Dir('.'), codeGenFile)
    env.Depends(kl2edkCommand, installedCodeGenFile)
  env.Depends(library, kl2edkCommand)

  return env.Install(env['STAGE_DIR'], filesToInstall)

extEnv.AddMethod(FabricExt)
extEnv['STAGE_DIR'] = extEnv.Dir('.stage').Dir('Native').Dir('Exts').Dir('Builtin').Dir('Alembic')

# call into the internal Fabric SConscript
SConscript(
  os.path.join('SConscript'),
  exports = {
    'env': extEnv,
    'alembicFlags': alembicFlags, 
    'replaceBin': replaceBin, 
    'mathExt': [], 
    'utilExt': []
  },
  variant_dir = extEnv.Dir('.build')
)

