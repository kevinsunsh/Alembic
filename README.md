Alembic
=========
A KL extension for the Alembic library

Alembic allows you to read and write Alembic files. It provides a (nearly) complete mapping of the Alembic library. 

extension status
================

This extension has been built and tested against Fabric Engine 1.13.0. Higher release might work, but this hasn't been validated. Feel free to use this code for reference or training purposes, it's meant to be an example of how to integrate custom libraries into KL.

structure
=========

The Alembic extension uses the KL2EDK tool to generate the required C++ code out of a json codegen file. This makes it easy to add functionality to the extension later, or support future versions of Alembic. You won't find any .cpp files in the *src* folder, the source code for certain non-automatic function bodies can be found in the .codegen.json file in the *src* folder.

The latest KL2EDK documentation can be found here: http://documentation.fabricengine.com/FabricEngine/latest/HTML/ExtensionAuthoringGuide/kl2edk.html

supported platforms
===================

To date all three major platforms (windows, linux, osx) are supported, if you build the thirdparty dependencies for the corresponding platform.

building
========

A scons (http://www.scons.org/) build script is provided. Alembic depends on
* A static build of boost (http://www.boost.org/), version 1.55 or higher.
* A static build of zlib (http://www.zlib.net/), version 1.2.8 or higher.
* A static build of hdf5 (http://www.hdfgroup.org/HDF5/), version 1.8.7 or higher.
* A static build of Alembic (http://www.alembic.io/), version 1.5.3 or higher.

To inform scons where to find the Fabric Engine includes as well as the thirdparty libraries, you need to set the following environment variables:

* FABRIC_EDK_DIR: Should point to Fabric Engine's EDK folder.
* BOOST_INCLUDE: Should point to the boost include folder.
* BOOST_LIBRARY: Should point to the boost library folder.
* ZLIB_INCLUDE: Should point to the zlib include folder.
* ZLIB_LIBRARY: Should point to the zlib library folder.
* HDF5_INCLUDE: Should point to the hdf5 include folder.
* HDF5_LIBRARY: Should point to the hdf5 library folder.
* ALEMBIC_INCLUDE: Should point to the Alembic include folder.
* ALEMBIC_LIBRARY: Should point to the Alembic library folder.

The temporary files will be built into the *build* folder, while the structured output files will be placed in the *stage* folder.

testing
=======

The extension repository also contains a series of unit tests, with which you can validate a successful build, or simply use them for reference on how to use the extension. to launch all unit tests simply use python like this:

    python test/test_all.py

license
==========

The license used for this extensions is the new BSD license. You can find it in the root folder of the repository.
