#include "IShowContentUsers.h"
#include "SQLAPI.h"

Fk::Interface::IShowContentUsers::IShowContentUsers(FKWgt::MainMenu* const mainMenu):_mainMenu{mainMenu}
{

}

void Fk::Interface::IShowContentUsers::show()
{
    auto data = "Пользователи";
    auto contentMainMenu = ftxui::Renderer([&](){return ftxui::paragraphAlignCenter(data);});
    _mainMenu->updateContent(contentMainMenu);
}
