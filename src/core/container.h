#pragma once

#include <cstddef>
#include <iterator>

namespace ts::core
{
    template <typename T>
    class Container
    {
    public:
        struct Iterator;
        Iterator begin();
        Iterator end();
    };

    template <typename T>
    struct Container<T>::Iterator
    {
        using iterator_category = std::forward_iterator_tag;
        using difference_type = std::ptrdiff_t;
        using value_type = T;
        using pointer = T*;
        using reference = T&;

    private:
        pointer m_ptr;
    };

} // namespace ts::core