#ifndef CREATEUSERSTABLENAVIGATIONPANEL_H
#define CREATEUSERSTABLENAVIGATIONPANEL_H

#include "ICreateNavigationPanel.h"

namespace Fk
{
    class CreateUsersTableNavigationPanel: public ICreateNavigationPanel
    {
        public:
            CreateUsersTableNavigationPanel();
        private:
            ftxui::Component execute() override;
    };
}
#endif // CREATEUSERSTABLENAVIGATIONPANEL_H
