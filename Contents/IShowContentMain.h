#ifndef ISHOWCONTENTMAIN_H
#define ISHOWCONTENTMAIN_H

#include "IShowContent.h"
#include "Widgets/MainMenu.h"

namespace Fk::Interface
{
    class IShowContentMain: public IShowContent
    {
        public:
            IShowContentMain(FKWgt::MainMenu* const mainMenu);
            void show() override;
        private:
            FKWgt::MainMenu* const _mainMenu;
    };
}
#endif // ISHOWCONTENTMAIN_H
