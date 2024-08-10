#pragma once

#include "coordinate.h"
#include <map>
#include <string>

namespace ts::core
{
    class Node
    {
    public:
        Node(int id, Coordinate position, std::string label);
        int getId() { return m_id; };
        Coordinate getPosition() { return m_position; };
        std::string getLabel() { return m_label; };
        void setId(int id) { m_id = id; };
        void setPosition(Coordinate position) { m_position = position; };
        void setLabel(std::string label) { m_label = label; };

    private:
        int m_id;
        Coordinate m_position;
        std::string m_label;
    };

    class Nodes
    {
    public:
        Nodes();
        void add(Node);
        Node& get(int nodeId);
        void remove(int nodeId);

    private:
        std::map<int, Node> m_nodes;
    };

} // namespace ts::core
