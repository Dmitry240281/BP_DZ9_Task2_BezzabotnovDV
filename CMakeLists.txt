# CMakeList.txt: проект CMake для BP_DZ9_Task2_BezzabotnovDV; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)

# Включение горячей перезагрузки для компиляторов MSVC, если поддерживается.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

project ("BP_DZ9_Task2_BezzabotnovDV")

# Добавьте источник в исполняемый файл этого проекта.
add_executable (BP_DZ9_Task2_BezzabotnovDV "BP_DZ9_Task2_BezzabotnovDV.cpp" "BP_DZ9_Task2_BezzabotnovDV.h" "Figure.h" "Figure.cpp" "Quadrate.h" "Quadrate.cpp" "Triangle.h" "Triangle.cpp" "RightTriangle.h"
"RightTriangle.cpp" "IsoscelesTriangle.h" "IsoscelesTriangle.cpp" "EquilateralTriangle.h" "EquilateralTriangle.cpp" "Quadrate.h" "Quadrate.cpp" "Rectangle.h" "Rectangle.cpp" "Square.h" "Square.cpp" 
"Parallelogram.h" "Parallelogram.cpp" "Rhombus.h" "Rhombus.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET BP_DZ9_Task2_BezzabotnovDV PROPERTY CXX_STANDARD 20)
endif()

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
