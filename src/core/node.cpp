#include "node.h"

using namespace ts::core;

void Node::addNeighbor(int nodeId)
{
    neighbors.insert(nodeId);
}

void Node::removeNeighbor(int nodeid)
{
    neighbors.erase(nodeid);
}

bool Node::hasNeighbor(int nodeId)
{
    return neighbors.count(nodeId);
}
