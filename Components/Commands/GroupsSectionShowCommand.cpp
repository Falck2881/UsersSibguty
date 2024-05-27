#include "GroupsSectionShowCommand.h"
#include "Components/MainMenuWindow.h"

Fk::GroupsSectionShowCommand::GroupsSectionShowCommand(Fk::MainMenuWindow* const mainMenuWindow):
    _mainMenuWindow{mainMenuWindow}
{

}

void Fk::GroupsSectionShowCommand::execute()
{
    _mainMenuWindow->switchOnGroupsTable();
}
