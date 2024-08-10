#include "nodemap.h"
#include <ranges>

using namespace ts::core;

NodeMap::NodeMap()
{
}

void NodeMap::add(Node node)
{
    m_nodes.insert_or_assign(node.id, node);
}

Node& NodeMap::get(int nodeId)
{
    return m_nodes.at(nodeId);
}

void NodeMap::remove(int nodeId)
{
    for (Node& node : std::views::values(m_nodes))
    {
        if (node.id == nodeId)
        {
            continue;
        }

        if (node.hasNeighbor(nodeId))
        {
            node.removeNeighbor(nodeId);
        }
    }

    m_nodes.erase(nodeId);
}

void NodeMap::connect(int nodeId1, int nodeId2)
{
    Node& node1 = m_nodes.at(nodeId1);
    Node& node2 = m_nodes.at(nodeId2);

    node1.addNeighbor(nodeId2);
    node2.addNeighbor(nodeId1);
}
