#include "nodes.h"
#include "coordinate.h"
#include <string>

using namespace ts::core;

Node::Node(int id, Coordinate position, std::string label = "")
    : m_id(id), m_position(position), m_label(label)
{
}

Nodes::Nodes()
{
}

void Nodes::add(Node node)
{
    m_nodes.insert_or_assign(node.getId(), node);
}

Node& Nodes::get(int nodeId)
{
    return m_nodes.at(nodeId);
}

void Nodes::remove(int nodeId)
{
    m_nodes.erase(nodeId);
}
