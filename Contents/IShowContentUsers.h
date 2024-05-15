#ifndef ISHOWCONTENTUSERS_H
#define ISHOWCONTENTUSERS_H

#include "IShowContent.h"
#include "Widgets/MainMenu.h"

namespace Fk::Interface
{
    class IShowContentUsers: public IShowContent
    {
        public:
            IShowContentUsers(FKWgt::MainMenu* const mainMenu);
            void show() override;
        private:
            FKWgt::MainMenu* const _mainMenu;
    };
}
#endif // ISHOWCONTENTUSERS_H
