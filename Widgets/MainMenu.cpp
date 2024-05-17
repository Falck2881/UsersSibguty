#include "MainMenu.h"
#include "Contents/IShowContentMain.h"
#include "Contents/IShowContentUsers.h"
#include "Contents/IShowContentFacultets.h"
#include "Contents/IShowContentGroups.h"
#include "Contents/IShowContentHistorySearch.h"
#include "Helpers/LayoutHelpers.h"
#include "Helpers/FileStreamHelpers.h"
#include <iostream>
#include <fstream>
#include <sstream>

using namespace ftxui;
using namespace Fk::Interface;

FKWgt::MainMenu::MainMenu():
    actionToButtonMain{Fk::ActionButton(std::make_unique<Fk::Content>(std::make_unique<IShowContentMain>(this)))},
    actionToButtonUsers{Fk::ActionButton(std::make_unique<Fk::Content>(std::make_unique<IShowContentUsers>(this)))},
    actionToButtonFacultets{Fk::ActionButton(std::make_unique<Fk::Content>(std::make_unique<IShowContentFacultets>(this)))},
    actionToButtonGroups{Fk::ActionButton(std::make_unique<Fk::Content>(std::make_unique<IShowContentGroups>(this)))},
    actionHistorySearch{Fk::ActionButton(std::make_unique<Fk::Content>(std::make_unique<IShowContentHistorySearch>(this)))},
    buttonMain{std::make_unique<Component>(Button("Главная",
                                                    std::bind(&Fk::ActionButton::onClick, &actionToButtonMain),
                                                    ButtonOption::Animated()))},
    buttonUsers{std::make_unique<Component>(Button("Пользователи",
                                                     std::bind(&Fk::ActionButton::onClick, &actionToButtonUsers),
                                                     ButtonOption::Animated()))},
    buttonFacultets{std::make_unique<Component>(Button("Факультеты",
                                                         std::bind(&Fk::ActionButton::onClick, &actionToButtonFacultets),
                                                         ButtonOption::Animated()))},
    buttonGroups{std::make_unique<Component>(Button("Группы",
                                                      std::bind(&Fk::ActionButton::onClick, &actionToButtonGroups),
                                                      ButtonOption::Animated()))},
    buttonHistorySearch{std::make_unique<Component>(Button("История поиска",
                                                             std::bind(&Fk::ActionButton::onClick, &actionHistorySearch),
                                                             ButtonOption::Animated()))},
    screen{ScreenInteractive::Fullscreen()}
{
    placeComponents();
}

void FKWgt::MainMenu::placeComponents()
{
    allButtons = Fk::Helpers::Layout::Vertical({*buttonMain.get(),
                                               Renderer([]{return separatorHeavy();}),
                                               *buttonUsers.get(),
                                               Renderer([]{return separatorHeavy();}),
                                               *buttonFacultets.get(),
                                               Renderer([]{return separatorHeavy();}),
                                               *buttonGroups.get(),
                                               Renderer([]{return separatorHeavy();}),
                                                *buttonHistorySearch.get()}) | flex;

    sectionContent = Renderer([&]{return paragraphAlignCenter(Fk::Helpers::FileStream::data());});

    layoutInMainMenu = Fk::Helpers::Layout::ResizebleToLeft(allButtons, sectionContent) | flex;

    sectionRender = Renderer(layoutInMainMenu, [&](){return vbox({layoutInMainMenu->Render()}) | borderHeavy;});

}

void FKWgt::MainMenu::show()
{
    screen.Loop(sectionRender);
}

void FKWgt::MainMenu::updateContent(ftxui::Component content)
{
    layoutInMainMenu = Fk::Helpers::Layout::ResizebleToLeft(allButtons, content) | flex;
    sectionRender = Renderer(layoutInMainMenu, [&](){return vbox({layoutInMainMenu->Render()}) | borderHeavy;});
    show();
}
