#ifndef MAINSECTIONSHOWCOMMAND_H
#define MAINSECTIONSHOWCOMMAND_H

#include "ICommand.h"

namespace Fk {
class MainMenuWindow;
}

namespace Fk
{
class MainSectionShowCommand: public ICommand
    {
        public:
        MainSectionShowCommand(Fk::MainMenuWindow* const mainMenuWindow);
            void execute() override;
        private:
            Fk::MainMenuWindow* const _mainMenuWindow;
    };
}
#endif // MAINSECTIONSHOWCOMMAND_H
