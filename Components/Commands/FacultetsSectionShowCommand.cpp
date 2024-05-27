#include "FacultetsSectionShowCommand.h"
#include "Components/MainMenuWindow.h"

Fk::FacultetsSectionShowCommand::FacultetsSectionShowCommand(Fk::MainMenuWindow* const mainMenuWindow):
    _mainMenuWindow{mainMenuWindow}
{

}

void Fk::FacultetsSectionShowCommand::execute()
{
    _mainMenuWindow->switchOnFacultetsTable();
}
