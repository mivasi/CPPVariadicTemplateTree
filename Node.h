#pragma once

template<typename T, typename... NT>
class Node
{
private:
    T m_data;
    Node<NT...> *m_next;
public:
    Node(const T& data, Node<NT...>* next = nullptr)
        : m_data(data), m_next(next)
    {}
    
    Node<NT...>* getNext()
    {
        return m_next;
    }

    T getData()
    {
        return m_data;
    }

};