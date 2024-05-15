cmake_minimum_required(VERSION 3.21)
project(UsersSibguty LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(ftxui 5 REQUIRED)

set(WIDGETS Widgets/MainMenu.h
            Widgets/MainMenu.cpp
            Widgets/ActionButton.h
            Widgets/ActionButton.cpp)

set(Content Contents/Content.cpp Contents/Content.h
            Contents/IShowContent.h
            Contents/IShowContentMain.cpp Contents/IShowContentMain.h
            Contents/IShowContentUsers.h Contents/IShowContentUsers.cpp
            Contents/IShowContentFacultets.h Contents/IShowContentFacultets.cpp
            Contents/IShowContentGroups.h Contents/IShowContentGroups.cpp
            Contents/IShowContentHistorySearch.h Contents/IShowContentHistorySearch.cpp)

add_executable(UsersSibguty main.cpp ${WIDGETS} ${Content})

target_link_directories(UsersSibguty PRIVATE Widgets/ Contents/)

target_link_libraries(UsersSibguty  PRIVATE ftxui::screen
                                    PRIVATE ftxui::dom
                                    PRIVATE ftxui::component)
