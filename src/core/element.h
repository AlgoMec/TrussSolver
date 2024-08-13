#pragma once

#include <string>
#include <tuple>

namespace ts::core
{

    class Element
    {
    public:
        Element(int id, std::tuple<int, int> nodeIdPair, std::string label);
        int getId() { return m_id; };
        std::tuple<int, int> getNodeIdPair() { return m_nodeIdPair; };
        std::string getLabel() { return m_label; }
        void setId(int id) { m_id = id; };
        void setNodePair(std::tuple<int, int> nodePair) { m_nodeIdPair = nodePair; };
        void setLabel(std::string label) { m_label = label; };

    private:
        int m_id;
        std::tuple<int, int> m_nodeIdPair;
        std::string m_label;
    };

} // namespace ts::core
