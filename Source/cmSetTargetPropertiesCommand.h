/*=========================================================================

  Program:   CMake - Cross-Platform Makefile Generator
  Module:    $RCSfile$
  Language:  C++
  Date:      $Date$
  Version:   $Revision$

  Copyright (c) 2002 Kitware, Inc., Insight Consortium.  All rights reserved.
  See Copyright.txt or http://www.cmake.org/HTML/Copyright.html for details.

     This software is distributed WITHOUT ANY WARRANTY; without even 
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR 
     PURPOSE.  See the above copyright notices for more information.

=========================================================================*/
#ifndef cmSetTargetsPropertiesCommand_h
#define cmSetTargetsPropertiesCommand_h

#include "cmCommand.h"

class cmSetTargetPropertiesCommand : public cmCommand
{
public:
  virtual cmCommand* Clone() 
    {
      return new cmSetTargetPropertiesCommand;
    }

  /**
   * This is called when the command is first encountered in
   * the input file.
   */
  virtual bool InitialPass(std::vector<std::string> const& args);

  /**
   * The name of the command as specified in CMakeList.txt.
   */
  virtual const char* GetName() { return "SET_TARGET_PROPERTIES";}

  /**
   * Succinct documentation.
   */
  virtual const char* GetTerseDocumentation() 
    {
    return "Targets can have properties that affect how they are built.";
    }
  
  /**
   * Longer documentation.
   */
  virtual const char* GetFullDocumentation()
    {
      return
        "  SET_TARGET_PROPERTIES(target1 target2 ...\n"
        "                        PROPERTIES prop1 value1\n"
        "                        prop2 value2 ...)\n"
        "Set properties on a target. The syntax for the command is to "
        "list all the files you want "
        "to change, and then provide the values you want to set next.  "
        "Properties that cmake knows about are PREFIX and SUFFIX for UNIX "
        "systems and libraries.   CMake also knows about LINK_FLAGS, which "
        "can be used to add extra flags to the link step of a target. "
        "DEFINE_SYMBOL is a symbol that is defined when compiling C or C++ "
        "sources.  PRE_INSTALL_SCRIPT specifies a CMake script that is run "
        "prior to installing the target. POST_INSTALL_SCRIPT specifies "
        "a CMake script that is run after target is installed. "
        "For shared libraries VERSION and SOVERSION can be used to specify "
        "the build version and api version respectively. When building or "
        "installing appropriate symlinks are created if the platform "
        "supports symlinks and the linker supports so-names. "
        "If only one of both is specified the missing is assumed to have "
        "the same version number. "
        "For executables VERSION can be used to specify the build version. "
        "When building or installing appropriate symlinks are created if "
        "the platform supports symlinks. "
        "The OUTPUT_NAME can be used to set an output name that is "
        "used in place of the target name when creating executables. "
        "If not set here then it is set to target_EXPORTS by default "
        "(with some substitutions if the target is not a valid C "
        "identifier).  You can use any prop value pair you want and "
        "extract it later with the GET_TARGET_PROPERTY command.";
    }
  
  cmTypeMacro(cmSetTargetPropertiesCommand, cmCommand);
};



#endif
