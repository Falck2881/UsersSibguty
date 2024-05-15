#ifndef ISHOWCONTENTGROUPS_H
#define ISHOWCONTENTGROUPS_H

#include "IShowContent.h"
#include "Widgets/MainMenu.h"

namespace Fk::Interface
{
    class IShowContentGroups: public IShowContent
    {
        public:
            IShowContentGroups(FKWgt::MainMenu* const mainMenu);
            void show() override;
        private:
            FKWgt::MainMenu* const _mainMenu;
    };
}
#endif // ISHOWCONTENTGROUPS_H
