#pragma once

#include <exprtk.hpp>
#include <string>
#include <vector>

namespace ts::core
{
    struct Variable
    {
        std::string name;
        std::string definition;
    };

    class Definitions
    {
    public:
        Definitions();

    private:
        std::vector<Variable> m_definitions;
    };

} // namespace ts::core