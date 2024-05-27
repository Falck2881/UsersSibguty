#ifndef ICOMMAND_H
#define ICOMMAND_H

#include <string>

namespace Fk
{
    class ICommand
    {
        public:
            virtual ~ICommand() = default;
            virtual void execute() = 0;
        protected:
            ICommand() = default;
    };

}
#endif // ICOMMAND_H
