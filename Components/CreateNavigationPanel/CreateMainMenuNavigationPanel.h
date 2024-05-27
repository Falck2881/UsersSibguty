#ifndef CREATEMAINMENUNAVIGATIONPANEL_H
#define CREATEMAINMENUNAVIGATIONPANEL_H

#include "ICreateNavigationPanel.h"
#include "Components/Commands/ICommand.h"
#include <memory>

namespace Fk {
    class MainMenuWindow;
}

namespace Fk
{
    class CreateMainMenuNavigationPanel: public Fk::ICreateNavigationPanel
    {
        public:
            CreateMainMenuNavigationPanel(Fk::MainMenuWindow* const mainMenuContext);
        private:
            ftxui::Component execute() override;
        private:
            ftxui::Components controlComponents;
            std::unique_ptr<ICommand> contentMainShowCommand;
            std::unique_ptr<ICommand> contentUsersShowCommand;
            std::unique_ptr<ICommand> contentGroupsShowCommand;
            std::unique_ptr<ICommand> contentFacultetsShowCommand;
            std::unique_ptr<ICommand> contentHistroySearchShowCommand;
            ftxui::Component verticalButtonsLayout;
    };
}
#endif // CREATEMAINMENUNAVIGATIONPANEL_H
