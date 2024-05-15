#include "ActionButton.h"

Fk::ActionButton::ActionButton(std::unique_ptr<Fk::Content> newContent):
    content{std::move(newContent)}
{
}

Fk::ActionButton::ActionButton(Fk::ActionButton&& oldObj)
{
    this->content = std::move(oldObj.content);
}

Fk::ActionButton::ActionButton(Fk::ActionButton& oldObj)
{
    this->content = std::move(oldObj.content);
}

void Fk::ActionButton::onClick()
{
    content->show();
}

Fk::ActionButton& Fk::ActionButton::operator=(ActionButton&& oldObj)
{
    this->content = std::move(oldObj.content);
    return *this;
}
