#pragma once

template<typename T, typename NT = void>
class Node
{
private:
    T m_data;
    NT *m_next;
public:
    Node(const T& data, NT* next = nullptr)
        : m_data(data), m_next(next)
    {}
};