﻿# CMakeList.txt: проект CMake для BP_DZ9_Task2_BezzabotnovDV; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)

# Включение горячей перезагрузки для компиляторов MSVC, если поддерживается.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

project ("BP_DZ9_Task2_BezzabotnovDV")

set (SOURCES
BP_DZ9_Task2_BezzabotnovDV.cpp
Figure.cpp
Quadrate.cpp
Triangle.cpp
RightTriangle.cpp
IsoscelesTriangle.cpp
EquilateralTriangle.cpp
Quadrate.cpp
Rectangle.cpp
Square.cpp
Parallelogram.cpp
Rhombus.cpp
)
set (HEADERS
BP_DZ9_Task2_BezzabotnovDV.h
Figure.h
Quadrate.h
Triangle.h
RightTriangle.h
IsoscelesTriangle.h
EquilateralTriangle.h
Quadrate.h
Rectangle.h
Square.h
Parallelogram.h
Rhombus.h
)

# Добавьте источник в исполняемый файл этого проекта.
add_executable (BP_DZ9_Task2_BezzabotnovDV ${SOURCES} ${HEADERS})

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET BP_DZ9_Task2_BezzabotnovDV PROPERTY CXX_STANDARD 20)
endif()

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
