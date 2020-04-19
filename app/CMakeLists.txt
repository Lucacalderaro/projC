set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

find_package(Qt5Core)

add_executable(app
    main.cpp
)

target_link_libraries(app Qt5::Core projD)
