/*============================================================================
  CMake - Cross Platform Makefile Generator
  Copyright 2000-2009 Kitware, Inc.

  Distributed under the OSI-approved BSD License (the "License");
  see accompanying file Copyright.txt for details.

  This software is distributed WITHOUT ANY WARRANTY; without even the
  implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the License for more information.
============================================================================*/

#ifndef cmCPackTarBZip2Generator_h
#define cmCPackTarBZip2Generator_h

#include <cmConfigure.h>

#include "cmCPackArchiveGenerator.h"
#include "cmCPackGenerator.h"
#include "cmTypeMacro.h"

/** \class cmCPackTarBZip2Generator
 * \brief A generator for TarBZip2 files
 */
class cmCPackTarBZip2Generator : public cmCPackArchiveGenerator
{
public:
  cmCPackTypeMacro(cmCPackTarBZip2Generator, cmCPackArchiveGenerator);
  /**
   * Construct generator
   */
  cmCPackTarBZip2Generator();
  ~cmCPackTarBZip2Generator() CM_OVERRIDE;

protected:
  const char* GetOutputExtension() CM_OVERRIDE { return ".tar.bz2"; }
};

#endif
