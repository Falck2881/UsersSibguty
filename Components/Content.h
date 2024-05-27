#ifndef ABSTRACTWIDGETS_H
#define ABSTRACTWIDGETS_H

#include "Components/CreateContent/ICreateContentSection.h"
#include "Components/CreateNavigationPanel/ICreateNavigationPanel.h"
#include <memory>

namespace Fk
{
    class Content
    {
        public:
            Content(std::unique_ptr<Fk::ICreateContentSection> createContentSection,
                    std::unique_ptr<Fk::ICreateNavigationPanel> createNavigationPanel = nullptr);
            virtual ~Content() = default;
            ftxui::Component content() const;
            ftxui::Component navigationPanel() const;
        private:
            std::unique_ptr<Fk::ICreateContentSection> _createContentSection;
            std::unique_ptr<Fk::ICreateNavigationPanel> _createNavigationPanel;
    };
}

#endif // ABSTRACTWIDGETS_H
