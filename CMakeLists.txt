
cmake_minimum_required (VERSION 3.8)

# Включение горячей перезагрузки для компиляторов MSVC, если поддерживается.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

project ("HW_05")

add_executable (HW_05 "main.cpp" "main.h" "Document.h" "Document.cpp" "TFigureController.h" "TFigureController.cpp" "Models/BaseFigure.h" "Models/BaseFigure.cpp" "Common.h" "Common.cpp" "Models/Recangle.cpp" "Models/Square.h" "Models/Square.cpp" "Models/Circle.h" "Models/Circle.cpp" "Models/Ellipse.h" "Models/Ellipse.cpp" "Models/Line.h" "Models/Line.cpp" "View.h" "View.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET HW_05 PROPERTY CXX_STANDARD 20)
endif()
