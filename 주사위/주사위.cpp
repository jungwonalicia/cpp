

#include "pch.h"
#include <iostream>
#include <ctime>
int main()
{
	srand(time(NULL));
    int dice1 =  (rand() % 6) + 1; 
    int dice2 =  (rand() % 6) + 1; 

	std::cout << "두 주사위의 합: " << dice1 + dice2 << std::endl;

}

