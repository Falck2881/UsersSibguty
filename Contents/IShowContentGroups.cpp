#include "IShowContentGroups.h"

Fk::Interface::IShowContentGroups::IShowContentGroups(FKWgt::MainMenu* const mainMenu):_mainMenu{mainMenu}
{

}

void Fk::Interface::IShowContentGroups::show()
{
    auto data = "Группы";
    auto contentMainMenu = ftxui::Renderer([&](){return ftxui::paragraphAlignCenter(data);});
    _mainMenu->updateContent(contentMainMenu);
}
