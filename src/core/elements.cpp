#include "elements.h"

using namespace ts::core;

Element::Element(int id, std::tuple<int, int> nodeIdPair, std::string label = "")
    : m_id(id), m_nodeIdPair(nodeIdPair), m_label(label)
{
}

Elements::Elements()
{
}

void Elements::add(Element element)
{
    m_elements.insert_or_assign(element.getId(), element);
}

Element& Elements::get(int elementId)
{
    return m_elements.at(elementId);
}

void Elements::remove(int elementId)
{
    m_elements.erase(elementId);
}