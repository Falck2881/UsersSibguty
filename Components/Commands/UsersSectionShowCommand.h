#ifndef USERSSECTIONSHOWCOMMAND_H
#define USERSSECTIONSHOWCOMMAND_H

#include "ICommand.h"

namespace Fk {
    class MainMenuWindow;
}

namespace Fk
{
class UsersSectionShowCommand: public ICommand
    {
        public:
            UsersSectionShowCommand(Fk::MainMenuWindow* const mainMenuWindow);
            void execute() override;
        private:
            Fk::MainMenuWindow* const _mainMenuWindow;
    };
}
#endif // USERSSECTIONSHOWCOMMAND_H
