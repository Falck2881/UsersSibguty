#include <memory>
#include "BuilderComponents.h"
#include "ButtonComponent.h"
#include "MainSectionShowCommand.h"
#include "UsersSectionShowCommand.h"
#include "GroupsSectionShowCommand.h"
#include "FacultetsSectionShowCommand.h"
#include "HistorySearchSectionShowCommand.h"
#include "AbstractNavigationPanel.h"
#include "MainMenuNavigationPanel.h"

Fk::BuilderComponents::BuilderComponents(FKWgt::MainMenu* const mainMenu):
    _mainMenu(mainMenu)
{

}

ftxui::Component Fk::BuilderComponents::buildMainMenuNavigation() const
{
    auto contentMainShowCommand = std::make_shared<MainSectionShowCommand>(_mainMenu);
    auto buttonToShowMainMenu = std::make_shared<Fk::ButtonComponent>("Новости", ftxui::ButtonOption::Animated(), std::move(contentMainShowCommand));

    auto contentUsersShowCommand = std::make_shared<UsersSectionShowCommand>(_mainMenu);
    auto buttonToShowUsers = std::make_shared<Fk::ButtonComponent>("Пользователи", ftxui::ButtonOption::Animated(), std::move(contentUsersShowCommand));

    auto contentGroupsShowCommand = std::make_shared<GroupsSectionShowCommand>(_mainMenu);
    auto buttonToShowGroups = std::make_shared<Fk::ButtonComponent>("Группы", ftxui::ButtonOption::Animated(), std::move(contentGroupsShowCommand));

    auto contentFacultetsShowCommand = std::make_shared<FacultetsSectionShowCommand>(_mainMenu);
    auto buttonToShowFacultets = std::make_shared<Fk::ButtonComponent>("Факультеты", ftxui::ButtonOption::Animated(), std::move(contentFacultetsShowCommand));

    auto contentHistroySearchShowCommand = std::make_shared<HistorySearchSectionShowCommand>(_mainMenu);
    auto buttonToShowHistorySearch = std::make_shared<Fk::ButtonComponent>("История поиска", ftxui::ButtonOption::Animated(), std::move(contentHistroySearchShowCommand));

    std::list<std::shared_ptr<Fk::AbstractControlComponent>> components{buttonToShowMainMenu, buttonToShowUsers, buttonToShowGroups,
                                                                        buttonToShowFacultets, buttonToShowHistorySearch};
    
    std::unique_ptr<Fk::AbstractNavigationPanel> navigation = std::make_unique<Fk::MainMenuNavigation>(components);


}
