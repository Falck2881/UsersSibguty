#include "UsersSectionShowCommand.h"
#include "Components/MainMenuWindow.h"

Fk::UsersSectionShowCommand::UsersSectionShowCommand(Fk::MainMenuWindow* const mainMenuWindow):
    _mainMenuWindow{mainMenuWindow}
{

}

void Fk::UsersSectionShowCommand::execute()
{
    _mainMenuWindow->switchOnUsersTable();
}
