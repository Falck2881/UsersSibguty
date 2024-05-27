#ifndef CREATEGROUPSTABLECONTENT_H
#define CREATEGROUPSTABLECONTENT_H

#include "ICreateContentSection.h"

namespace Fk
{
    class CreateGroupsTableContent: public ICreateContentSection
    {
        public:
            CreateGroupsTableContent() = default;
            ftxui::Component execute() override;
    };
}
#endif // CREATEGROUPSTABLECONTENT_H
