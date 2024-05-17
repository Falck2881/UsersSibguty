cmake_minimum_required(VERSION 3.21)
project(UsersSibguty LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)
set(FETCHCONTENT_UPDATES_DISCONNECTED TRUE)
FetchContent_Declare(ftxui
  GIT_REPOSITORY https://github.com/ArthurSonzogni/ftxui
  GIT_TAG main # Important: Specify a version or a commit hash here.
)
FetchContent_MakeAvailable(ftxui)

set(Helpers Helpers/LayoutHelpers.h
            Helpers/LayoutHelpers.cpp
            Helpers/FileStreamHelpers.h
            Helpers/FileStreamHelpers.cpp)

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

configure_file("${CMAKE_CURRENT_SOURCE_DIR}/Data/release.txt" ${CMAKE_CURRENT_BINARY_DIR} COPYONLY)

add_executable(UsersSibguty main.cpp ${WIDGETS} ${Content} ${Helpers})

target_link_directories(UsersSibguty PRIVATE Widgets/ Contents/ Helpers/)

target_link_libraries(UsersSibguty  PRIVATE ftxui::screen
                                    PRIVATE ftxui::dom
                                    PRIVATE ftxui::Component)
