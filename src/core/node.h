#pragma once

#include "vector.h"
#include <string>

namespace ts::core
{
    class Node
    {
    public:
        Node(int id, Vector position, std::string label = "")
            : m_id(id), m_position(position), m_label(label) {};
        int getId() { return m_id; };
        Vector getPosition() { return m_position; };
        std::string getLabel() { return m_label; };
        void setId(int id) { m_id = id; };
        void setPosition(Vector position) { m_position = position; };
        void setLabel(std::string label) { m_label = label; };

    private:
        int m_id;
        Vector m_position;
        std::string m_label;
    };

} // namespace ts::core
