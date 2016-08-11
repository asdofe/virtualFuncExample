#include "animal.h"

void animal::eat(void)
{
	std::cout << " animal " << "eat" << std::endl;
};
void animal::drink(void)
{
	std::cout << " animal " << "drink" << std::endl;
};
void animal::move(void)
{
	std::cout << " animal " << "move" << std::endl;
};
void animal::live(void)
{
	this->eat();
	this->drink();
	this->move();
};