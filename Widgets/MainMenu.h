#ifndef MAINMENU_H
#define MAINMENU_H

#include <vector>
#include <string>
#include <functional>
#include <memory>
#include <ftxui/component/captured_mouse.hpp>       // for ftxui
#include <ftxui/component/component.hpp>            // for MenuEntryAnimated, Renderer, Vertical
#include <ftxui/component/component_base.hpp>       // for ComponentBase
#include <ftxui/component/component_options.hpp>    // for MenuentryAnimated
#include <ftxui/component/screen_interactive.hpp>   // for ScreenInteractive
#include <ftxui/dom/elements.hpp>                   // for operator|, separator, Element, Decorator, color, text, hbox, size, bold, frame, inverted, vbox, HEIGHT, LESS_THAN, border
#include <ftxui/screen/color.hpp>                   // for Color, Color::Blue, Color::Cyan, Color::Green, Color::Red, Color::Yellow
#include "ActionButton.h"

namespace FKWgt
{
    class MainMenu
    {
        public:
            MainMenu();

        public:
            void show();

        private:
            void initializedLayouts();

        private:
            FkAction::ActionButton actionToButtonMain;
            FkAction::ActionButton actionToButtonUsers;
            FkAction::ActionButton actionToButtonFacultets;
            FkAction::ActionButton actionToButtonGroups;
            FkAction::ActionButton actionHistorySearch;
            std::unique_ptr<ftxui::Component> buttonMain;
            std::unique_ptr<ftxui::Component> buttonUsers;
            std::unique_ptr<ftxui::Component> buttonFacultets;
            std::unique_ptr<ftxui::Component> buttonGroups;
            std::unique_ptr<ftxui::Component> buttonHistorySearch;
    };

};
#endif // MAINMENU_H