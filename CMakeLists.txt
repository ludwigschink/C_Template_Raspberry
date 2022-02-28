cmake_minimum_required(VERSION 3.1.0)

project(C_Template_Raspberry VERSION 0.1 LANGUAGES C)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

#find_package()

set(
   SOURCES 
   main.c
   ${CMAKE_CURRENT_SOURCE_DIR}/src/MyTemplate_RPI_Source.c
   )

set(
    HEADERS
    ${CMAKE_CURRENT_SOURCE_DIR}/inc/MyTemplate_RPI_Header.h
    )
    
add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS})

find_library(WIRINGPI_LIBRARIES NAMES wiringPi)

target_link_libraries(${PROJECT_NAME} PUBLIC ${WIRINGPI_LIBRARIES})

target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/inc)

set_target_properties(${PROJECT_NAME} PROPERTIES LINKER_LANGUAGE C)
