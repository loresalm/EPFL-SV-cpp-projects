cmake_minimum_required(VERSION 2.6)
project(Network_simulation)

if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE "Debug" CACHE STRING "" FORCE)
endif(NOT CMAKE_BUILD_TYPE)
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -Wall -pedantic")
SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -O3")
option(test "Build tests." ON)
option(graphtest "Build tests." ON)

include_directories("/usr/local/include" ${CMAKE_SOURCE_DIR}/include)
link_directories(${CMAKE_SOURCE_DIR}/lib)


add_executable(NetSim src/main.cpp src/network.cpp src/simulation.cpp src/random.cpp)

if(graphtest) 
set(SFML_DIR "${CMAKE_CURRENT_SOURCE_DIR}/include/SFML-2.5.1/lib/cmake/SFML")
find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)
add_executable(graphicTest src/graphic_test.cpp src/network.cpp src/random.cpp)
target_link_libraries(graphicTest sfml-graphics sfml-audio)
endif(graphtest)


if (test)
  enable_testing()
  find_package(GTest)
  if (NOT GTEST_FOUND)
    SET(GTEST_INCLUDE_DIRS ${CMAKE_SOURCE_DIR}/include)
    SET(GTEST_BOTH_LIBRARIES libgtest.a libgtest_main.a)
  endif(NOT GTEST_FOUND)
  include_directories(${GTEST_INCLUDE_DIRS})
  add_executable(testNetSim src/test_main.cpp src/network.cpp src/simulation.cpp src/random.cpp )
  target_link_libraries(testNetSim ${GTEST_BOTH_LIBRARIES} pthread)
  add_test(Network_simulation testNetSim)
endif(test)

find_package(Doxygen)
if (DOXYGEN_FOUND)
  add_custom_target(doc ${DOXYGEN_EXECUTABLE} ${CMAKE_SOURCE_DIR}/Doxyfile
                    WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
                    COMMENT "Generating API documentation with Doxygen" VERBATIM)
endif(DOXYGEN_FOUND)
