#ifndef FACULTETSSECTIONSHOWCOMMAND_H
#define FACULTETSSECTIONSHOWCOMMAND_H

#include "ICommand.h"

namespace Fk {
    class MainMenuWindow;
}

namespace Fk
{
class FacultetsSectionShowCommand: public ICommand
    {
        public:
        FacultetsSectionShowCommand(Fk::MainMenuWindow* const mainMenuWindow);
            void execute() override;
        private:
            Fk::MainMenuWindow* const _mainMenuWindow;
    };
}
#endif // FACULTETSSECTIONSHOWCOMMAND_H
