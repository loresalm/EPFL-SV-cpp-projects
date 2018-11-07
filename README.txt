
This project use sfml to make a graphic test of the class network, it's more a graphic visualization of what the class do then areal test but it can help to see if the network class do what is supposed to do.

At line 14 of the graphic_test.cpp you can set the size and the average of
connections of your network.

In order to make this test work you need to DOWNLOAD SFML 2.5.1 or newer:
https://www.sfml-dev.org/download.php
put the downloaded (SFML-2.5.1) file in your include floder 

--->IF SFML DON'T WORK ON YOUR COMPUTER<---
just comment the folloving lines in the CMakeLists.txt:
...
#option(graphtest "Build tests." ON)
...
#[[
if(graphtest) 
set(SFML_DIR "${CMAKE_CURRENT_SOURCE_DIR}/include/SFML-2.5.1/lib/cmake/SFML")
find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)
add_executable(graphicTest src/graphic_test.cpp src/network.cpp src/random.cpp)
target_link_libraries(graphicTest sfml-graphics sfml-audio)
endif(graphtest)
]]

this will allow you to use the project as if the graphic_test.cpp is not present
