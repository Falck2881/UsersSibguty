#include "IShowContentHistorySearch.h"

Fk::Interface::IShowContentHistorySearch::IShowContentHistorySearch(FKWgt::MainMenu* const mainMenu):_mainMenu{mainMenu}
{

}

void Fk::Interface::IShowContentHistorySearch::show()
{
    auto data = "История поиска";
    auto contentMainMenu = ftxui::Renderer([&](){return ftxui::paragraphAlignCenter(data);});
    _mainMenu->updateContent(contentMainMenu);
}
