cmake_minimum_required(VERSION 3.9)

# Automatically set the project name to the directory name
get_filename_component(PROJECT_NAME ${CMAKE_CURRENT_SOURCE_DIR} NAME)
project(${PROJECT_NAME})

# Set C++ standard and ensure Qt installation path
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Automatically include all .cpp files **in the current directory only**
file(GLOB SOURCE_FILES ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)

# Automatically include all .h files **in the current directory only**
file(GLOB HEADER_FILES ${CMAKE_CURRENT_SOURCE_DIR}/*.h)

# Find the necessary Qt packages
find_package(Qt5 REQUIRED COMPONENTS Core Gui Widgets)

# Generate MOC files for any headers containing Q_OBJECT
qt5_wrap_cpp(HEADER_MOC ${HEADER_FILES})

# Add the resource file
qt5_add_resources(RESOURCE_FILES resources/resources.qrc)

# Link the resource file to the executable
add_executable(${PROJECT_NAME} ${SOURCE_FILES} ${HEADER_FILES} ${HEADER_MOC} ${RESOURCE_FILES})

set(QT_LIBS
	Qt5::Core
	Qt5::Gui
	Qt5::Widgets
)

# Link the executable with Qt libraries
target_link_libraries(${PROJECT_NAME}
	PUBLIC
		${QT_LIBS}
)

# Windows-specific settings (optional, can be removed for cross-platform)
if(WIN32)
    target_compile_definitions(${PROJECT_NAME} PRIVATE OS_WINDOWS=1)
    target_compile_options(${PROJECT_NAME} PRIVATE /WX)
endif()
