// Template class  example GAME2001 
// compairing two things amd retrun the snallest value 

#include <iostream>
using namespace std;

template <class T>
T min_power( T Power1, T Power2)
{
	if (Power1>Power2)
	{
		return Power2; 
	}

	return Power1;

}

int main()
{

}