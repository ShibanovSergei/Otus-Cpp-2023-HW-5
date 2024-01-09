
cmake_minimum_required (VERSION 3.2)

set(PATCH_VERSION "1" CACHE INTERNAL "Patch version")
set(PROJECT_VESRION 0.0.${PATCH_VERSION})

# Включение горячей перезагрузки для компиляторов MSVC, если поддерживается.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

project (HW_05 VERSION ${PROJECT_VESRION})

add_executable (HW_05 "main.cpp" "main.h" "Document.h" "Document.cpp" "TFigureController.h" "TFigureController.cpp" "Models/BaseFigure.h" "Models/BaseFigure.cpp" "Common.h" "Common.cpp" "Models/Recangle.cpp" "Models/Square.h" "Models/Square.cpp" "Models/Circle.h" "Models/Circle.cpp" "Models/Ellipse.h" "Models/Ellipse.cpp" "Models/Line.h" "Models/Line.cpp" "View.h" "View.cpp")

set_target_properties(HW_05 PROPERTIES
    CXX_STANDARD 20
    CXX_STANDARD_REQUIRED ON
)
target_include_directories(HW_05 PRIVATE "${CMAKE_BINARY_DIR}")

if (MSVC)
    target_compile_options(HW_05 PRIVATE /W4)
else ()
    target_compile_options(HW_05 PRIVATE -Wall -Wextra -pedantic -Werror)
endif()

install(TARGETS HW_05 RUNTIME DESTINATION bin)

set(CPACK_GENERATOR DEB)

set(CPACK_PACKAGE_VERSION_MAJOR "${PROJECT_VERSION_MAJOR}")
set(CPACK_PACKAGE_VERSION_MINOR "${PROJECT_VERSION_MINOR}")
set(CPACK_PACKAGE_VERSION_PATCH "${PROJECT_VERSION_PATCH}")

set(CPACK_PACKAGE_CONTACT example@example.com)

include(CPack)