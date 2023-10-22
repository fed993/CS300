/* 
 * CS300 In Class Lab (ArrayList)
 * Fedor Polyanskiy - f.polyanskiy@bellevuecollege.edu
 * Student ID: 201 690 498
 * 2023.10.05 - Fall Quarter
 *
 *	This is an implementation of a dynamic array using 
 *
 */

#include <iostream>

template <class T>
class DynamicArray
{
	public:
		DynamicArray(int size) : m_data(new T[size])
		{
			m_size = size;
			m_firstEmptyElement = 0;
		}
		~DynamicArray()
		{
			delete[] m_data;
		}

		int getSize() { return m_size; }

		void add(T data)
		{
			// if array too small, make it bigger! then add elements.
			if (m_firstEmptyElement >= m_size) {
				increaseArraySize();
			}

			m_data[m_firstEmptyElement] = data;
			m_firstEmptyElement++;
		}

		void removeByElement(int index)
		{
			// std::cout << "m_firstEmptyElement is " << m_firstEmptyElement << std::endl;

			std::cout << " the array before removal is [";
			for (int i = 0; i < m_size; i++) {
				std::cout << " " << m_data[i];
			}
			std::cout << " ]" << std::endl;

			for (int i = index; i < (m_size - 1); i++) {
				// std::cout << "overwriting " << m_data[i] << " with " << m_data[(i + 1)] << std::endl;
				m_data[i] = m_data[(i + 1)];
			}

			m_data[m_size - 1] = 0;

			m_firstEmptyElement--;

			if ( (m_size / 4) >= m_firstEmptyElement ) {
				decreaseArraySize();
			}
		}

		T getByElement(int index)
		{
			try
			{
				if (index < m_size)
				{
					return m_data[index];
				}
				else
				{
					throw index;
				}
			}
			catch (int index)
			{
				std::cout << "Index " << index << " is out of bounds." << std::endl;
				return 0;
			}

		}

		void increaseArraySize()
		{
			T* new_m_data = new T[m_size * 2]; // we double the array size to save reallocations later

			for (int i = 0; i < m_size; i++) {
				new_m_data[i] = m_data[i]; // write each value of the old array into the new array
			}
			m_data = new_m_data; // overwrite old array address with new array address
			m_size *= 2;
		}
		
		void decreaseArraySize()
		{
			std::cout << "shrinking" << std::endl;
			T* new_m_data = new T[m_size / 2]; // create new array with half the current capacity

			for (int i = 0; i < m_size; i++) {
				new_m_data[i] = m_data[i]; // write each value of the old array into the new array
			}

			m_data = new_m_data; // overwrite old array address with new array address
			m_size /= 2;
			std::cout << "size is " << m_size << std::endl;
		}

	private:
		T* m_data;
		int m_size;
		int m_firstEmptyElement;
};