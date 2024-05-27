#include "HistorySearchSectionShowCommand.h"
#include "Components/MainMenuWindow.h"

Fk::HistorySearchSectionShowCommand::HistorySearchSectionShowCommand(Fk::MainMenuWindow* const mainMenuWindow):
    _mainMenuWindow{mainMenuWindow}
{

}

void Fk::HistorySearchSectionShowCommand::execute()
{
    _mainMenuWindow->switchOnHistorySearchTable();
}
