#include "Harl.hpp"

Harl::Harl(void) {
	return ;
}

Harl::~Harl(void) {
	return ;
}

void Harl::debug(void) {
	std::cout << "Debugging..." << std::endl;
}

void Harl::info(void) {
	std::cout << "Informing..." << std::endl;
}

void Harl::warning(void) {
	std::cout << "Warning..." << std::endl;
}

void Harl::error(void) {
	std::cout << "Error..." << std::endl;
}

void Harl::complain(std::string level) {
	std::string codes[4] = {"debug", "info", "warning", "error"};
	void (Harl::*func_array[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	for (int i = 0; i < 4; i++)
	{
		if (codes[i] == level) {
			(this->*func_array[i])();
			return;
		}
	}
	std::cerr << "Error: invalid level \'" << level << "\'" << std::endl;
}
