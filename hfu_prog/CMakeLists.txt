cmake_minimum_required(VERSION 3.28)
project(hfu_prog C)

set(CMAKE_C_STANDARD 11)

add_executable(hfu_prog main.c)
add_executable(ex7.1.c Aufgabe_7/ex7.1.c
        Aufgabe_7/ex7.1.c)

# Unter Ubuntu notwendig, damit math.h korrekt benutzt wird
target_link_libraries(ex7.1.c m)

#set(SOURCE_FILES main.c)
#add_executable(log ${SOURCE_FILES})
#target_link_libraries(log m)add_executable(ex7.2 Aufgabe_7/ex7.2.c)
add_executable(ex7.2.c Aufgabe_7/ex7.2.1.c)
add_executable(ex7.2.2.c Aufgabe_7/ex7.2.2.c)
add_executable(ex7.4.1.c Aufgabe_7/ex7.4.1.c)
add_executable(ex7.4.2.c Aufgabe_7/ex7.4.2.c)
add_executable(ex7.5.c Aufgabe_7/ex7.5.c)
add_executable(ex7.6.c Aufgabe_7/ex7.6.c)
add_executable(ex7.3.c Aufgabe_7/ex7.3.c)
