#ifndef ISHOWCONTENTHISTORYSEARCH_H
#define ISHOWCONTENTHISTORYSEARCH_H

#include "IShowContent.h"
#include "Widgets/MainMenu.h"

namespace Fk::Interface
{
    class IShowContentHistorySearch: public IShowContent
    {
        public:
            IShowContentHistorySearch(FKWgt::MainMenu* const mainMenu);
            void show() override;
        private:
            FKWgt::MainMenu* const _mainMenu;
    };
}
#endif // ISHOWCONTENTHISTORYSEARCH_H
