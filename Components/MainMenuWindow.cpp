#include "MainMenuWindow.h"
#include "Components/CreateNavigationPanel/CreateMainMenuNavigationPanel.h"
#include "Components/CreateContent/CreateMainMenuContent.h"
#include "Components/CreateContent/CreateUsersTableContent.h"
#include "Components/CreateContent/CreateGroupsTableContent.h"
#include "Components/CreateContent/CreateFacultetsTableGroups.h"
#include "Components/CreateContent/CreateHistorySearchContent.h"
#include "Content.h"
#include "Helpers/LayoutHelpers.h"

Fk::MainMenuWindow::MainMenuWindow():
    mainMenu{std::make_unique<Fk::Content>(std::make_unique<CreateMainMenuContent>(), std::make_unique<Fk::CreateMainMenuNavigationPanel>(this))},
    userTable{std::make_unique<Fk::Content>(std::make_unique<CreateUsersTableContent>(), nullptr)},
    groupsTable{std::make_unique<Fk::Content>(std::make_unique<CreateGroupsTableContent>(), nullptr)},
    facultetsTable{std::make_unique<Fk::Content>(std::make_unique<CreateFacultetsTableGroups>(), nullptr)},
    historySearch{std::make_unique<Fk::Content>(std::make_unique<CreateHistorySearchContent>(), nullptr)},
    screen{ftxui::ScreenInteractive::Fullscreen()}
{
    componentNavigationPanel = mainMenu->navigationPanel();

    contentSection = mainMenu->content();

    layoutMainMenu = Helpers::Layout::ResizebleToLeft(componentNavigationPanel, contentSection);

    renderMainMenu = ftxui::Renderer(
        componentNavigationPanel,[&]
        {
            return ftxui::hbox
                            ({
                                layoutMainMenu->Render()
                            }) | ftxui::border;
        });
}

void Fk::MainMenuWindow::switchOnNews()
{

}

void Fk::MainMenuWindow::switchOnUsersTable()
{

}

void Fk::MainMenuWindow::switchOnGroupsTable()
{

}

void Fk::MainMenuWindow::switchOnFacultetsTable()
{

}

void Fk::MainMenuWindow::switchOnHistorySearchTable()
{

}

void Fk::MainMenuWindow::show()
{
    screen.Loop(renderMainMenu);
}
