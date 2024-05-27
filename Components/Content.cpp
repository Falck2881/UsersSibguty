#include "Content.h"

Fk::Content::Content(std::unique_ptr<Fk::ICreateContentSection> createContentSection,
                     std::unique_ptr<Fk::ICreateNavigationPanel> createNavigationPanel):
    _createContentSection{std::move(createContentSection)},
    _createNavigationPanel{std::move(createNavigationPanel)}
{

}

ftxui::Component Fk::Content::content() const
{
    return _createContentSection->execute();
}

ftxui::Component Fk::Content::navigationPanel() const
{
    return _createNavigationPanel->execute();
}

