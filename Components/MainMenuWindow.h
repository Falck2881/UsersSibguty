#ifndef MAINMENUWINDOW_H
#define MAINMENUWINDOW_H

#include <memory>
#include <unordered_map>
#include <list>
#include <ftxui/component/screen_interactive.hpp>
#include "Content.h"

namespace Fk
{
    class MainMenuWindow
    {
        public:
            MainMenuWindow();
            void show();
            void switchOnNews();
            void switchOnUsersTable();
            void switchOnGroupsTable();
            void switchOnFacultetsTable();
            void switchOnHistorySearchTable();
        private:
            void contentLayout();
        private:
            std::unique_ptr<Fk::Content> mainMenu;
            std::unique_ptr<Fk::Content> userTable;
            std::unique_ptr<Fk::Content> groupsTable;
            std::unique_ptr<Fk::Content> facultetsTable;
            std::unique_ptr<Fk::Content> historySearch;
            ftxui::ScreenInteractive screen;
            ftxui::Component layoutMainMenu;
            ftxui::Component renderMainMenu;
            ftxui::Component componentNavigationPanel;
            ftxui::Component contentSection;
    };
}
#endif // MAINMENUWINDOW_H
