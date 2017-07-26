cmake_minimum_required (VERSION 2.6)
project (UE4)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_COMPILER "/usr/bin/clang++")
set(CMAKE_C_COMPILER "/usr/bin/clang")

include("/Users/gakhov/Space/unrealProjects/UCRoomescape/Intermediate/ProjectFiles/IncludeDirectories.cmake")
include("/Users/gakhov/Space/unrealProjects/UCRoomescape/Intermediate/ProjectFiles/Definitions.cmake")
include("/Users/gakhov/Space/unrealProjects/UCRoomescape/Intermediate/ProjectFiles/UCRoomescapeEditor.cmake")

set(MONO_ROOT_PATH "/Users/Shared/Epic Games/UE_4.16/Engine/Binaries/DotNET")
set(BUILD cd "${MONO_ROOT_PATH}")

# Custom target for UCRoomescapeEditor project, Development configuration
add_custom_target(UCRoomescapeEditor-Development ${BUILD} && mono UnrealBuildTool.exe UCRoomescapeEditor Mac Development -project="/Users/gakhov/Space/unrealProjects/UCRoomescape/UCRoomescape.uproject" -game -progress)
add_custom_target(UCRoomescapeEditor-Development-CLEAN ${BUILD} && mono UnrealBuildTool.exe UCRoomescapeEditor Mac Development -project="/Users/gakhov/Space/unrealProjects/UCRoomescape/UCRoomescape.uproject" -clean)

add_executable(PleaseIgnoreMe ${UCRoomescapeEditor_FILES})