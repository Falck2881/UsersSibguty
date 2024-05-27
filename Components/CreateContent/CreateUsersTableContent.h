#ifndef CREATEUSERSTABLECONTENT_H
#define CREATEUSERSTABLECONTENT_H

#include "ICreateContentSection.h"

namespace Fk
{
    class CreateUsersTableContent: public ICreateContentSection
    {
        public:
            CreateUsersTableContent() = default;
            ftxui::Component execute() override;
    };
}
#endif // CREATEUSERSTABLECONTENT_H
