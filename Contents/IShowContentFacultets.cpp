#include "IShowContentFacultets.h"

Fk::Interface::IShowContentFacultets::IShowContentFacultets(FKWgt::MainMenu* const mainMenu):_mainMenu{mainMenu}
{

}

void Fk::Interface::IShowContentFacultets::show()
{
    auto data = "Факультеты";
    auto contentMainMenu = ftxui::Renderer([&](){return ftxui::paragraphAlignCenter(data);});
    _mainMenu->updateContent(contentMainMenu);
}
