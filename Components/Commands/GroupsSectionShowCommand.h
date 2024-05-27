#ifndef GROUPSSECTIONSHOWCOMMAND_H
#define GROUPSSECTIONSHOWCOMMAND_H

#include "ICommand.h"

namespace Fk {
    class MainMenuWindow;
}

namespace Fk
{
class GroupsSectionShowCommand: public ICommand
    {
        public:
        GroupsSectionShowCommand(Fk::MainMenuWindow* const mainMenuWindow);
            void execute() override;
        private:
            Fk::MainMenuWindow* const _mainMenuWindow;
    };
}
#endif // GROUPSSECTIONSHOWCOMMAND_H
