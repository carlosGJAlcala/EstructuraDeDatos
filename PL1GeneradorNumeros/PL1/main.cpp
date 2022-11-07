
#include <stdio.h>
#include <iostream>
#include "control/Core.hpp"
#include "vista/Vista.hpp"
using namespace std;

int main(int argc, char **argv)
{
    Vista* vista = new Vista();
    vista->MainInterface();
	return 0;
}
