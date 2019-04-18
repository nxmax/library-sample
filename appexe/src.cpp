#include <iostream>
#include "appstatic.h"
#include "appdll.h"

int main(int argc, const char *argv[]) {
	appstatic_function();
	appdll_function();
	return 0;
}