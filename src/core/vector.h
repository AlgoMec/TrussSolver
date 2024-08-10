#pragma once

#include <string>

namespace ts::core
{
    struct Vector
    {
        std::string x;
        std::string y;
        std::string z = "0";
    };

} // namespace ts::core