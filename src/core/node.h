#pragma once

#include <set>
#include <string>

namespace ts::core
{

    struct Node
    {
        int id;
        std::string x;
        std::string y;
        std::string label;
        std::set<int> neighbors;

        void addNeighbor(int nodeId);
        void removeNeighbor(int nodeId);
        bool hasNeighbor(int nodeId);
    };

} // namespace ts::core
