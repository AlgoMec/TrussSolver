#pragma once

#include "vector.h"
#include <set>
#include <string>

namespace ts::core
{
    class Load
    {
    public:
        void setId(int id) { m_id = id; };
        void setLabel(std::string label) { m_label = label; };
        int getId() { return m_id; };
        std::string getLabel() { return m_label; };
        virtual Vector getForce(int nodeId) = 0;

    protected:
        int m_id;
        std::string m_label;
    };

    class SingleForce : public Load
    {
    public:
        SingleForce(int id, Vector force, std::string label);
        Vector getForce(int nodeId);
        void applyTo(int nodeId);

    private:
        int m_id;
        std::set<int> m_nodes;
        Vector m_force;
        std::string m_label;
    };

} // namespace ts::core