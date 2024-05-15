#include "MainMenu.h"
#include "Contents/IShowContent.h"
#include "Contents/IShowContentMain.h"
#include "Contents/IShowContentUsers.h"
#include "Contents/IShowContentFacultets.h"
#include "Contents/IShowContentGroups.h"
#include "Contents/IShowContentHistorySearch.h"

using namespace ftxui;
using namespace Fk::Interface;

FKWgt::MainMenu::MainMenu():
    actionToButtonMain{FkAction::ActionButton(std::make_unique<Fk::Content>(std::make_unique<IShowContentMain>(this)))},
    actionToButtonUsers{FkAction::ActionButton(std::make_unique<Fk::Content>(std::make_unique<IShowContentUsers>(this)))},
    actionToButtonFacultets{FkAction::ActionButton(std::make_unique<Fk::Content>(std::make_unique<IShowContentFacultets>(this)))},
    actionToButtonGroups{FkAction::ActionButton(std::make_unique<Fk::Content>(std::make_unique<IShowContentGroups>(this)))},
    actionHistorySearch{FkAction::ActionButton(std::make_unique<Fk::Content>(std::make_unique<IShowContentHistorySearch>(this)))},
    buttonMain{std::make_unique<Component>(Button("Главная", actionToButtonMain, ButtonOption::Animated()))},
    buttonUsers{std::make_unique<Component>(Button("Пользователи", actionToButtonUsers, ButtonOption::Animated()))},
    buttonFacultets{std::make_unique<Component>(Button("Факультеты", actionToButtonFacultets, ButtonOption::Animated()))},
    buttonGroups{std::make_unique<Component>(Button("Группы", actionToButtonGroups, ButtonOption::Animated()))},
    buttonHistorySearch{std::make_unique<Component>(Button("История поиска", actionHistorySearch, ButtonOption::Animated()))}
{

}

void FKWgt::MainMenu::show()
{
    int value = 0;
      auto action = [&] { value++; };
      auto action_renderer =
          Renderer([&] { return text("count = " + std::to_string(value)); });

      auto buttons =
          Container::Vertical({
              action_renderer,
              Renderer([] { return separator(); }),
              Container::Horizontal({
                  Container::Vertical({
                      Button("Ascii 1", action, ButtonOption::Ascii()),
                      Button("Ascii 2", action, ButtonOption::Ascii()),
                      Button("Ascii 3", action, ButtonOption::Ascii()),
                  }),
                  Renderer([] { return separator(); }),
                  Container::Vertical({
                      Button("Simple 1", action, ButtonOption::Simple()),
                      Button("Simple 2", action, ButtonOption::Simple()),
                      Button("Simple 3", action, ButtonOption::Simple()),
                  }),
                  Renderer([] { return separator(); }),
                  Container::Vertical({
                      Button("Animated 1", action, ButtonOption::Animated()),
                      Button("Animated 2", action, ButtonOption::Animated()),
                      Button("Animated 3", action, ButtonOption::Animated()),
                  }),
                  Renderer([] { return separator(); }),
                  Container::Vertical({
                      Button("Animated 4", action,
                             ButtonOption::Animated(Color::Red)),
                      Button("Animated 5", action,
                             ButtonOption::Animated(Color::Green)),
                      Button("Animated 6", action,
                             ButtonOption::Animated(Color::Blue)),
                  }),
              }),
          }) |
          border;

      auto screen = ScreenInteractive::FitComponent();
      screen.Loop(buttons);
}
