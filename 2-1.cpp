#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>
#include <random>
#include <fstream>

using namespace std;

int main(void)
	ofstream ofs("2-1.csv");

	int n = 1000;
	double x = 0.0;
	double y = 0.0;
	double count = 0.0;
	double pi = 0.0;
	for (int i = 0; i < n; i++) {
		x = (rand()+0.5) / (RAND_MAX + 1.0);
		printf("x= %.8f", x);
		y = (rand() + 0.5) / (RAND_MAX + 1.0);
		printf("y= %.7f \n", y);
		if ((x*x + y*y) <= 1.0) {
			count++;
		}
		if ((x*x + y*y) <= 1.0) {
			ofs << x << "," << y << endl;
		}
	}
	pi = (4 * count) / n;

		printf("pi= %.7f", pi);


	return 0;

}
