#include "MainSectionShowCommand.h"
#include "Components/MainMenuWindow.h"
#include <ftxui/dom/elements.hpp>

Fk::MainSectionShowCommand::MainSectionShowCommand(Fk::MainMenuWindow* const mainMenuWindow):
    _mainMenuWindow{mainMenuWindow}
{

}

void Fk::MainSectionShowCommand::execute()
{
    _mainMenuWindow->switchOnNews();
}
