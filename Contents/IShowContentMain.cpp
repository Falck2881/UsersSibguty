#include "IShowContentMain.h"
#include "Helpers/FileStreamHelpers.h"
#include <ftxui/dom/elements.hpp>

Fk::Interface::IShowContentMain::IShowContentMain(FKWgt::MainMenu* const mainMenu):_mainMenu{mainMenu}
{

}

void Fk::Interface::IShowContentMain::show()
{
    auto data = Fk::Helpers::FileStream::data();
    auto contentMainMenu = ftxui::Renderer([&](){return ftxui::paragraphAlignCenter(data);});
    _mainMenu->updateContent(contentMainMenu);
}


