#ifndef HISTORYSEARCHSECTIONSHOWCOMMAND_H
#define HISTORYSEARCHSECTIONSHOWCOMMAND_H

#include "ICommand.h"

namespace Fk {
class MainMenuWindow;
}

namespace Fk
{
class HistorySearchSectionShowCommand: public ICommand
    {
        public:
        HistorySearchSectionShowCommand(Fk::MainMenuWindow* const mainMenuWindow);
            void execute() override;
        private:
            Fk::MainMenuWindow* const _mainMenuWindow;
    };
}
#endif // HISTORYSEARCHSECTIONSHOWCOMMAND_H
