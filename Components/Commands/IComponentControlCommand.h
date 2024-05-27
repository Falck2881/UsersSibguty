#ifndef ABSTRACTIONCOMPONENTCONTROLCOMMAND_H
#define ABSTRACTIONCOMPONENTCONTROLCOMMAND_H

#include <string>

namespace Fk
{
class AbstractCommand
    {
        public:
        AbstractCommand(const std::string name): _name(name){}
        virtual ~AbstractCommand() = default;
            virtual void execute() = 0;
        protected:
            const std::string _name;
    };
}
#endif // ABSTRACTIONCOMPONENTCONTROLCOMMAND_H
