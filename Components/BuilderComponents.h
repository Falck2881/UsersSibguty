#ifndef BUILDERCOMPONENTS_H
#define BUILDERCOMPONENTS_H

#include <Widgets/MainMenu.h>
#include <ftxui/component/component.hpp>
#include <map>

namespace Fk {

    class BuilderComponents
    {
        public:
            BuilderComponents(FKWgt::MainMenu* const mainMenu);
            ftxui::Component buildMainMenuNavigation() const;
        private:
            FKWgt::MainMenu* const _mainMenu;
    };
}
#endif // BUILDERCOMPONENTS_H
