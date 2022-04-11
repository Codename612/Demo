#include <iostream>
#include "Runner.h"

int main()
{
	std::cout << "Hello World!";

	Runner app = Runner();

	app.CheckForPackages();
	app.InstallPackages();
	app.UpdatePackages();

	return 0;
}
