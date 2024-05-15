#ifndef ISHOWCONTENT_H
#define ISHOWCONTENT_H

namespace Fk::Interface
{
    class IShowContent
    {
        public:
            virtual ~IShowContent() = default;
            virtual void show() = 0;
    };
}

#endif // ISHOWCONTENT_H
