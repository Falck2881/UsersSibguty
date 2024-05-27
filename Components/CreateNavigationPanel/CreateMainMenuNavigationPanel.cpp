#include "Components/CreateNavigationPanel/CreateMainMenuNavigationPanel.h"
#include "Components/Commands/MainSectionShowCommand.h"
#include "Components/MainMenuWindow.h"
#include "Components/Commands/UsersSectionShowCommand.h"
#include "Components/Commands/GroupsSectionShowCommand.h"
#include "Components/Commands/FacultetsSectionShowCommand.h"
#include "Components/Commands/HistorySearchSectionShowCommand.h"
#include "ftxui/component/component_options.hpp"
#include "ftxui/dom/elements.hpp"

Fk::CreateMainMenuNavigationPanel::CreateMainMenuNavigationPanel(Fk::MainMenuWindow* const mainMenuWindow):
    contentMainShowCommand{std::make_unique<MainSectionShowCommand>(mainMenuWindow)},
    contentUsersShowCommand{std::make_unique<UsersSectionShowCommand>(mainMenuWindow)},
    contentGroupsShowCommand{std::make_unique<GroupsSectionShowCommand>(mainMenuWindow)},
    contentFacultetsShowCommand{std::make_unique<FacultetsSectionShowCommand>(mainMenuWindow)},
    contentHistroySearchShowCommand{std::make_unique<HistorySearchSectionShowCommand>(mainMenuWindow)}
{
    controlComponents.push_back(ftxui::Button("Новости", std::bind(&Fk::ICommand::execute, contentMainShowCommand.get()), ftxui::ButtonOption::Animated()));
    controlComponents.push_back(ftxui::Renderer([]{return ftxui::separator();}));

    controlComponents.push_back(ftxui::Button("Пользователи", std::bind(&Fk::ICommand::execute, contentMainShowCommand.get()), ftxui::ButtonOption::Animated()));
    controlComponents.push_back(ftxui::Renderer([]{return ftxui::separator();}));

    controlComponents.push_back(ftxui::Button("Группы", std::bind(&Fk::ICommand::execute, contentMainShowCommand.get()), ftxui::ButtonOption::Animated()));
    controlComponents.push_back(ftxui::Renderer([]{return ftxui::separator();}));

    controlComponents.push_back(ftxui::Button("Факультеты", std::bind(&Fk::ICommand::execute, contentMainShowCommand.get()), ftxui::ButtonOption::Animated()));
    controlComponents.push_back(ftxui::Renderer([]{return ftxui::separator();}));

    controlComponents.push_back(ftxui::Button("История поиска", std::bind(&Fk::ICommand::execute, contentMainShowCommand.get()), ftxui::ButtonOption::Animated()));
    controlComponents.push_back(ftxui::Renderer([]{return ftxui::separator();}));
}

ftxui::Component Fk::CreateMainMenuNavigationPanel::execute()
{
    verticalButtonsLayout = ftxui::Container::Vertical(controlComponents);
    return ftxui::Renderer(verticalButtonsLayout, [&]{return ftxui::vbox(verticalButtonsLayout->Render()) | ftxui::flex;});
}
