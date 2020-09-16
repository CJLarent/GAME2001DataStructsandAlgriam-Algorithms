#include<iostream>
#include<array>
#include<algorithm>

template <class T>
class CustomOderedArray
{
	
private:

	
	
public:
	// makeing the array a const allows for read only 
	const T& operator[](int index)
	{
		assert(m_array != NULL && index < m_numElements);
		return m_array[index];
	}
	void PrintArray()
	{
		
	}
	int find(T findKey)
	{
		assert(m_array != NULL);// making sure the array is not empty 
		inline getm_array
			int lowwerlimt = 0;
			int upperlimt = m_numElements - 1;
			int element;
			while (1)
			{
				element = (lowwerlimt + upperlimt) >> 1;
				if (m_array[element] == findKey)
				{
					return element;
				}
					
				else if (lowwerlimt > upperlimt)
				{
					return -1;
				}
				else
				{
					if (m_array[element] < findKey)
					
						lowwerlimt = element + 1;
					else
						upperlimt = element - 1;
					

				}

			}
			return -1;
	}

};
int main()
{

}