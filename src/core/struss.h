#pragma once

#include <map>

#include "element.h"
#include "load.h"
#include "node.h"

namespace ts::core
{

    class Struss
    {
    public:
        Struss();

    private:
        std::map<int, Node> m_nodes;
        std::map<int, Element> m_elements;
        std::map<int, Load> m_loads;
    };

} // namespace ts::core