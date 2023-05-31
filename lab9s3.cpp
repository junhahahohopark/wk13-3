#include <iostream>
using namespace std;
#include "CarS3.h"
#include "SUVs3.h"
int main() {
	// klaxon
	Car* newSUV = new SUV();
	std::cout << "klaxon without virtual \n";
	newSUV->klaxon(3);

	// new system
	std::cout << "light with virtual \n";
	newSUV->light(20);

	delete newSUV;
	getchar();
	return 0;
}