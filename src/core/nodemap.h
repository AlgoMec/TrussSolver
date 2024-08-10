#pragma once

#include "node.h"
#include <map>

namespace ts::core
{

    class NodeMap
    {
      public:
        NodeMap();
        void add(Node);
        void connect(int nodeId1, int nodeId2);
        Node& get(int nodeId);
        void remove(int nodeId);

      private:
        std::map<int, Node> m_nodes;
    };

} // namespace ts::core
