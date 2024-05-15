#include "Content.h"

Fk::Content::Content(std::unique_ptr<Fk::Interface::IShowContent> newContent):
    content{std::move(newContent)}
{
}

void Fk::Content::show()
{
    content->show();
}
