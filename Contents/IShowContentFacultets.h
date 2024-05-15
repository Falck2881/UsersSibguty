#ifndef ISHOWCONTENTFACULTETS_H
#define ISHOWCONTENTFACULTETS_H

#include "IShowContent.h"
#include "Widgets/MainMenu.h"

namespace Fk::Interface
{
    class IShowContentFacultets: public IShowContent
    {
        public:
            IShowContentFacultets(FKWgt::MainMenu* const mainMenu);
            void show() override;
        private:
            FKWgt::MainMenu* const _mainMenu;
    };
}
#endif // ISHOWCONTENTFACULTETS_H
