# Install script for directory: D:/ISCO/flowlinkapps/Kirigami/src/ecm

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/Users/mtmcp/Documents/LibKirigami/Release/android/x86")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "0")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "TRUE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ECM/modules" TYPE FILE FILES
    "D:/ISCO/flowlinkapps/Kirigami/src/ecm/modules/ECMAddAppIcon.cmake"
    "D:/ISCO/flowlinkapps/Kirigami/src/ecm/modules/ECMAddQch.cmake"
    "D:/ISCO/flowlinkapps/Kirigami/src/ecm/modules/ECMAddQtDesignerPlugin.cmake"
    "D:/ISCO/flowlinkapps/Kirigami/src/ecm/modules/ECMAddTests.cmake"
    "D:/ISCO/flowlinkapps/Kirigami/src/ecm/modules/ECMConfiguredInstall.cmake"
    "D:/ISCO/flowlinkapps/Kirigami/src/ecm/modules/ECMCoverageOption.cmake"
    "D:/ISCO/flowlinkapps/Kirigami/src/ecm/modules/ECMCreateQmFromPoFiles.cmake"
    "D:/ISCO/flowlinkapps/Kirigami/src/ecm/modules/ECMEnableSanitizers.cmake"
    "D:/ISCO/flowlinkapps/Kirigami/src/ecm/modules/ECMFindModuleHelpers.cmake"
    "D:/ISCO/flowlinkapps/Kirigami/src/ecm/modules/ECMFindQMLModule.cmake.in"
    "D:/ISCO/flowlinkapps/Kirigami/src/ecm/modules/ECMGenerateDBusServiceFile.cmake"
    "D:/ISCO/flowlinkapps/Kirigami/src/ecm/modules/ECMGenerateExportHeader.cmake"
    "D:/ISCO/flowlinkapps/Kirigami/src/ecm/modules/ECMGenerateHeaders.cmake"
    "D:/ISCO/flowlinkapps/Kirigami/src/ecm/modules/ECMGeneratePkgConfigFile.cmake"
    "D:/ISCO/flowlinkapps/Kirigami/src/ecm/modules/ECMGeneratePriFile.cmake"
    "D:/ISCO/flowlinkapps/Kirigami/src/ecm/modules/ECMGenerateQmlTypes.cmake"
    "D:/ISCO/flowlinkapps/Kirigami/src/ecm/modules/ECMInstallIcons.cmake"
    "D:/ISCO/flowlinkapps/Kirigami/src/ecm/modules/ECMMarkAsTest.cmake"
    "D:/ISCO/flowlinkapps/Kirigami/src/ecm/modules/ECMMarkNonGuiExecutable.cmake"
    "D:/ISCO/flowlinkapps/Kirigami/src/ecm/modules/ECMOptionalAddSubdirectory.cmake"
    "D:/ISCO/flowlinkapps/Kirigami/src/ecm/modules/ECMPackageConfigHelpers.cmake"
    "D:/ISCO/flowlinkapps/Kirigami/src/ecm/modules/ECMPoQmTools.cmake"
    "D:/ISCO/flowlinkapps/Kirigami/src/ecm/modules/ECMQMLModules.cmake"
    "D:/ISCO/flowlinkapps/Kirigami/src/ecm/modules/ECMQchDoxygen.config.in"
    "D:/ISCO/flowlinkapps/Kirigami/src/ecm/modules/ECMQchDoxygenLayout.xml"
    "D:/ISCO/flowlinkapps/Kirigami/src/ecm/modules/ECMQmLoader.cpp.in"
    "D:/ISCO/flowlinkapps/Kirigami/src/ecm/modules/ECMQtDeclareLoggingCategory.cmake"
    "D:/ISCO/flowlinkapps/Kirigami/src/ecm/modules/ECMQtDeclareLoggingCategory.cpp.in"
    "D:/ISCO/flowlinkapps/Kirigami/src/ecm/modules/ECMQtDeclareLoggingCategory.h.in"
    "D:/ISCO/flowlinkapps/Kirigami/src/ecm/modules/ECMQueryQmake.cmake"
    "D:/ISCO/flowlinkapps/Kirigami/src/ecm/modules/ECMSetupQtPluginMacroNames.cmake"
    "D:/ISCO/flowlinkapps/Kirigami/src/ecm/modules/ECMSetupVersion.cmake"
    "D:/ISCO/flowlinkapps/Kirigami/src/ecm/modules/ECMSourceVersionControl.cmake"
    "D:/ISCO/flowlinkapps/Kirigami/src/ecm/modules/ECMUninstallTarget.cmake"
    "D:/ISCO/flowlinkapps/Kirigami/src/ecm/modules/ECMUseFindModules.cmake"
    "D:/ISCO/flowlinkapps/Kirigami/src/ecm/modules/ECMVersionHeader.h.in"
    "D:/ISCO/flowlinkapps/Kirigami/src/ecm/modules/ECMWinResolveSymlinks.cmake"
    "D:/ISCO/flowlinkapps/Kirigami/src/ecm/modules/ecm_uninstall.cmake.in"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ECM/test-modules" TYPE FILE FILES "D:/ISCO/flowlinkapps/Kirigami/src/ecm/test-modules/test_execute_and_compare.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ECM/kde-modules" TYPE FILE FILES
    "D:/ISCO/flowlinkapps/Kirigami/src/ecm/kde-modules/KDECMakeSettings.cmake"
    "D:/ISCO/flowlinkapps/Kirigami/src/ecm/kde-modules/KDEClangFormat.cmake"
    "D:/ISCO/flowlinkapps/Kirigami/src/ecm/kde-modules/KDECompilerSettings.cmake"
    "D:/ISCO/flowlinkapps/Kirigami/src/ecm/kde-modules/KDEFrameworkCompilerSettings.cmake"
    "D:/ISCO/flowlinkapps/Kirigami/src/ecm/kde-modules/KDEInstallDirs.cmake"
    "D:/ISCO/flowlinkapps/Kirigami/src/ecm/kde-modules/KDEPackageAppTemplates.cmake"
    "D:/ISCO/flowlinkapps/Kirigami/src/ecm/kde-modules/appstreamtest.cmake"
    "D:/ISCO/flowlinkapps/Kirigami/src/ecm/kde-modules/clang-format.cmake"
    "D:/ISCO/flowlinkapps/Kirigami/src/ecm/kde-modules/prefix.sh.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ECM/find-modules" TYPE FILE FILES
    "D:/ISCO/flowlinkapps/Kirigami/src/ecm/find-modules/ECMFindModuleHelpersStub.cmake"
    "D:/ISCO/flowlinkapps/Kirigami/src/ecm/find-modules/FindCanberra.cmake"
    "D:/ISCO/flowlinkapps/Kirigami/src/ecm/find-modules/FindEGL.cmake"
    "D:/ISCO/flowlinkapps/Kirigami/src/ecm/find-modules/FindFontconfig.cmake"
    "D:/ISCO/flowlinkapps/Kirigami/src/ecm/find-modules/FindGLIB2.cmake"
    "D:/ISCO/flowlinkapps/Kirigami/src/ecm/find-modules/FindGperf.cmake"
    "D:/ISCO/flowlinkapps/Kirigami/src/ecm/find-modules/FindIcoTool.cmake"
    "D:/ISCO/flowlinkapps/Kirigami/src/ecm/find-modules/FindInotify.cmake"
    "D:/ISCO/flowlinkapps/Kirigami/src/ecm/find-modules/FindKF5.cmake"
    "D:/ISCO/flowlinkapps/Kirigami/src/ecm/find-modules/FindLibExiv2.cmake"
    "D:/ISCO/flowlinkapps/Kirigami/src/ecm/find-modules/FindLibGit2.cmake"
    "D:/ISCO/flowlinkapps/Kirigami/src/ecm/find-modules/FindOpenEXR.cmake"
    "D:/ISCO/flowlinkapps/Kirigami/src/ecm/find-modules/FindPhoneNumber.cmake"
    "D:/ISCO/flowlinkapps/Kirigami/src/ecm/find-modules/FindPoppler.cmake"
    "D:/ISCO/flowlinkapps/Kirigami/src/ecm/find-modules/FindPulseAudio.cmake"
    "D:/ISCO/flowlinkapps/Kirigami/src/ecm/find-modules/FindPythonModuleGeneration.cmake"
    "D:/ISCO/flowlinkapps/Kirigami/src/ecm/find-modules/FindQHelpGenerator.cmake"
    "D:/ISCO/flowlinkapps/Kirigami/src/ecm/find-modules/FindQtWaylandScanner.cmake"
    "D:/ISCO/flowlinkapps/Kirigami/src/ecm/find-modules/FindSasl2.cmake"
    "D:/ISCO/flowlinkapps/Kirigami/src/ecm/find-modules/FindSeccomp.cmake"
    "D:/ISCO/flowlinkapps/Kirigami/src/ecm/find-modules/FindSharedMimeInfo.cmake"
    "D:/ISCO/flowlinkapps/Kirigami/src/ecm/find-modules/FindTaglib.cmake"
    "D:/ISCO/flowlinkapps/Kirigami/src/ecm/find-modules/FindUDev.cmake"
    "D:/ISCO/flowlinkapps/Kirigami/src/ecm/find-modules/FindWayland.cmake"
    "D:/ISCO/flowlinkapps/Kirigami/src/ecm/find-modules/FindWaylandScanner.cmake"
    "D:/ISCO/flowlinkapps/Kirigami/src/ecm/find-modules/FindX11_XCB.cmake"
    "D:/ISCO/flowlinkapps/Kirigami/src/ecm/find-modules/FindXCB.cmake"
    "D:/ISCO/flowlinkapps/Kirigami/src/ecm/find-modules/GeneratePythonBindingUmbrellaModule.cmake"
    "D:/ISCO/flowlinkapps/Kirigami/src/ecm/find-modules/Qt5Ruleset.py"
    "D:/ISCO/flowlinkapps/Kirigami/src/ecm/find-modules/rules_engine.py"
    "D:/ISCO/flowlinkapps/Kirigami/src/ecm/find-modules/run-sip.py"
    "D:/ISCO/flowlinkapps/Kirigami/src/ecm/find-modules/sip_generator.py"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ECM/toolchain" TYPE FILE FILES
    "D:/ISCO/flowlinkapps/Kirigami/src/ecm/toolchain/Android.cmake"
    "D:/ISCO/flowlinkapps/Kirigami/src/ecm/toolchain/ECMAndroidDeployQt.cmake"
    "D:/ISCO/flowlinkapps/Kirigami/src/ecm/toolchain/deployment-file-qt514.json.in"
    "D:/ISCO/flowlinkapps/Kirigami/src/ecm/toolchain/deployment-file.json.in"
    "D:/ISCO/flowlinkapps/Kirigami/src/ecm/toolchain/hasMainSymbol.cmake"
    "D:/ISCO/flowlinkapps/Kirigami/src/ecm/toolchain/specifydependencies.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ECM/cmake" TYPE FILE FILES
    "C:/Users/mtmcp/Documents/LibKirigami/Release/android/x86/build/ecm/ECMConfig.cmake"
    "C:/Users/mtmcp/Documents/LibKirigami/Release/android/x86/build/ecm/ECMConfigVersion.cmake"
    )
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("C:/Users/mtmcp/Documents/LibKirigami/Release/android/x86/build/ecm/docs/cmake_install.cmake")
  include("C:/Users/mtmcp/Documents/LibKirigami/Release/android/x86/build/ecm/tests/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "C:/Users/mtmcp/Documents/LibKirigami/Release/android/x86/build/ecm/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
