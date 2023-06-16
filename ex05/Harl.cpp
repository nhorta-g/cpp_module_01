#include "Harl.hpp"

Harl::Harl {
	return ;
}

Harl::~Harl {
	return ;
}

void complain(std::string level) {
	if (level == "debug")
		

}

void debug(void) {
	std::cout << "Debugging..." << std::endl;
}

void info(void) {
	std::cout << "Informing..." << std::endl;
}

void warning(void) {
	std::cout << "Warning..." << std::endl;
}

void error(void) {
	std::cout << "Error..." << std::endl;
}
