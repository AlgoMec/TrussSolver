#include "loads.h"

using namespace ts::core;

SingleForce::SingleForce(int id, Vector force, std::string label = "")
    : m_id(id), m_force(force), m_label()
{
}

Vector SingleForce::getForce(int nodeId)
{
    if (m_nodes.count(nodeId))
    {
        return m_force;
    }
    else
    {
        return Vector(0, 0, 0);
    }
}

void SingleForce::applyTo(int nodeId)
{
    m_nodes.insert(nodeId);
}