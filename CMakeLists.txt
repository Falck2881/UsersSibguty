cmake_minimum_required(VERSION 3.21)

include(FetchContent)
set(FETCHCONTENT_UPDATES_DISCONNECTED TRUE)
FetchContent_Declare(ftxui
  GIT_REPOSITORY https://github.com/ArthurSonzogni/ftxui
  GIT_TAG main # Important: Specify a version or a commit hash here.
)
FetchContent_MakeAvailable(ftxui)

project(UsersSibguty LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_library(SQLAPI_LIB /usr/lib/SQLAPI++)

find_path(SQLAPI_INCLUDES PATH /usr/include/SQLAPI++)

set(COMPONENTS  Components/Commands/ICommand.h
                Components/Commands/MainSectionShowCommand.cpp Components/Commands/MainSectionShowCommand.h
                Components/Commands/UsersSectionShowCommand.h Components/Commands/UsersSectionShowCommand.cpp
                Components/Commands/FacultetsSectionShowCommand.h Components/Commands/FacultetsSectionShowCommand.cpp
                Components/Commands/GroupsSectionShowCommand.h Components/Commands/GroupsSectionShowCommand.cpp
                Components/Commands/HistorySearchSectionShowCommand.h Components/Commands/HistorySearchSectionShowCommand.cpp

                Components/Commands/ICommandOfFilters.h

                Components/CreateNavigationPanel/ICreateNavigationPanel.h
                Components/CreateNavigationPanel/CreateMainMenuNavigationPanel.h Components/CreateNavigationPanel/CreateMainMenuNavigationPanel.cpp
                Components/CreateNavigationPanel/CreateUsersTableNavigationPanel.h Components/CreateNavigationPanel/CreateUsersTableNavigationPanel.cpp

                Components/Content.h Components/Content.cpp
                Components/MainMenuWindow.h Components/MainMenuWindow.cpp

                Components/CreateContent/ICreateContentSection.h
                Components/CreateContent/CreateMainMenuContent.h Components/CreateContent/CreateMainMenuContent.cpp
                Components/CreateContent/CreateUsersTableContent.h Components/CreateContent/CreateUsersTableContent.cpp
                Components/CreateContent/CreateGroupsTableContent.h Components/CreateContent/CreateGroupsTableContent.cpp
                Components/CreateContent/CreateFacultetsTableGroups.h Components/CreateContent/CreateFacultetsTableGroups.cpp
                Components/CreateContent/CreateHistorySearchContent.h Components/CreateContent/CreateHistorySearchContent.cpp)

set(Helpers Helpers/LayoutHelpers.h
            Helpers/LayoutHelpers.cpp
            Helpers/FileStreamHelpers.h
            Helpers/FileStreamHelpers.cpp)

configure_file("${CMAKE_CURRENT_SOURCE_DIR}/Data/release.txt" ${CMAKE_CURRENT_BINARY_DIR} COPYONLY)

add_executable(UsersSibguty main.cpp ${Helpers} ${COMPONENTS})

include_directories(${SQLAPI_INCLUDES} ${Helpers} ${COMPONENTS})

target_link_directories(UsersSibguty PRIVATE  Helpers/ Extensions/ ${SQLAPI_INCLUDES})

target_link_libraries(UsersSibguty  PRIVATE ftxui::screen
                                    PRIVATE ftxui::dom
                                    PRIVATE ftxui::component
                                    PRIVATE ${SQLAPI_LIB})
