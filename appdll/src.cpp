#include "appdll.h"
#include "libboostrap.h"
#include <iostream>

void appdll_function() {
	std::cout << "appdll_function called" << std::endl;
	lib_function();
}
