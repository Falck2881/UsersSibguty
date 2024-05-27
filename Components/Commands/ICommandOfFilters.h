#ifndef ICOMMANDOFFILTERS_H
#define ICOMMANDOFFILTERS_H

namespace Fk
{
    class ICommandOfFilters
    {
        public:
            virtual ~ICommandOfFilters() = default;
            virtual void execute() = 0;
        protected:
            ICommandOfFilters() = default;
    };
}
#endif // ICOMMANDOFFILTERS_H
