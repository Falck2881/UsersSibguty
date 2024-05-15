#include "ActionButton.h"

FkAction::ActionButton::ActionButton(std::unique_ptr<Fk::Content> newContent):
    content{std::move(newContent)}
{
}


void FkAction::ActionButton::operator()() const
{
    content->show();
}
