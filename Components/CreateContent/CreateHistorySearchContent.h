#ifndef CREATEHISTORYSEARCHCONTENT_H
#define CREATEHISTORYSEARCHCONTENT_H

#include "ICreateContentSection.h"

namespace Fk
{
    class CreateHistorySearchContent: public ICreateContentSection
    {
        public:
            CreateHistorySearchContent() = default;
            ftxui::Component execute() override;
    };
}
#endif // CREATEHISTORYSEARCHCONTENT_H
