cmake_minimum_required(VERSION 3.10.2)

SET(PROJ_NAME "wxSuper")
PROJECT(${PROJ_NAME})

set(CMAKE_CXX_STANDARD 17)
set_property(GLOBAL PROPERTY USE_FOLDERS ON)
include_directories(include)
add_subdirectory(OpenXLSX)

file(GLOB SOURCES "src/*.cpp" "include/*.h")
SET(wxWidgets_ROOT_DIR "C://Neulii//wxWidgets-3.1.7")
find_package(wxWidgets REQUIRED COMPONENTS net core base)
include(${wxWidgets_USE_FILE})



if(WIN32)
  # WIN32 := subsystem is windows instead of console?
  add_executable(${PROJ_NAME} WIN32 ${SOURCES})
else(WIN32)
  add_executable(${PROJ_NAME} ${SOURCES})
endif()

#add_executable(${PROJ_NAME} ${SOURCES})
target_link_libraries(${PROJ_NAME} ${wxWidgets_LIBRARIES} OpenXLSX::OpenXLSX)
