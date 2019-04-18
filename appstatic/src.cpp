#include "libboostrap.h"
#include "appstatic.h"
#include <iostream>

void appstatic_function(){
	std::cout << "appstatic_function called" << std::endl;
	lib_function();
}