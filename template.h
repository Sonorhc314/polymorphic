#ifndef __TEMP_H__
#define __TEMP_H__
#include "types.h"

template <class T>
class Array
{
private:
    int m_length;
    T* m_data;

public:
    Array()
    {
        m_length = 0;
        m_data = nullptr;
    }

    Array(int length)
    {
        assert(length > 0);
        m_data = new T[length];
        m_length = length;
        for (int i = 0; i < length; i++)
        {
            if (typeid(m_data[0]) == typeid(char))
            {
                m_data[i] = '0';
            }
            else
            {
                m_data[i] = 0;
            }
        }
    }

    Array(int length, int amount, T ch)
    {
        assert(length > 0);
        m_data = new T[length];
        m_length = length;
        for (int i = 0; i < amount; i++)
        {
            m_data[i] = ch;
        }
        if (amount < length)
        {
            for (int i=amount;i<length;i++)
            {
                if (typeid(m_data[0]) == typeid(char))
                {
                    m_data[i] = '0';
                }
                else
                {
                    m_data[i] = 0;
                }
            }
        }
    }

    ~Array()
    {
        delete[] m_data;
    }

    void erase() 
    {
        delete[] m_data;
        m_data = nullptr;
        m_length = 0;
    }

    T& operator[](int const &index) const
    {
        assert(index >= 0 && index < m_length);
        return m_data[index];
    }

    int getLength()
    { 
        return m_length; 
    }

    void resize(int newLength)
    {
        if (newLength == m_length)
            return;
        if (newLength <= 0)
        {
            erase();
            return;
        }
        T* data = new T[newLength];
        if (newLength > m_length)
        {
            for (int i=m_length;i<newLength;i++)
            {
                if (typeid(data[0]) == typeid(char))
                {
                    data[i] = '0';
                }
                else
                {
                    data[i] = 0;
                }
            }
        }
        if (m_length > 0)
        {
            T elementsToCopy = (newLength > m_length) ? m_length : newLength;
            for (int index = 0; index < elementsToCopy; ++index)
                data[index] = m_data[index];
        }
        delete[] m_data;
        m_data = data;
        m_length = newLength;
    }

    void printType()
    { 
        cout << "\n???"; 
    }
};
template<>
void Array<char>::printType() { cout << "\nchar[" << m_length << "]\n"; }
void Array<int>::printType() { cout << "\nint[" << m_length << "]\n"; }
void Array<double>::printType() { cout << "\ndouble[" << m_length << "]\n"; }
void Array<float>::printType() { cout << "\nfloat[" << m_length << "]\n"; }
void Array<bool>::printType() { cout << "\nbool[" << m_length << "]\n"; }

#endif