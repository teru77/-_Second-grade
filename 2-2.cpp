#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>
#include <random>
#include <fstream>
#include<time.h>

using namespace std;

int main(void) {
	srand((unsigned)time(NULL));
	ofstream ofs("2-2.csv");

	int n = 1000;
	int a = 0;
	int b = 0;
	double avea = 0.0;
	double aveb = 0.0;
	double X = 0.0;

	for (int i = 1; i < n+1; i++) {
		X = (rand() + 0.5) / (RAND_MAX + 1.0);
		//printf("for no nakano X= %.7f\n", X);
		if (0 < X && X < (1.0/3.0)) {
			a+=1;
			//printf("if no nakano a =%d\n", a);
		}
		else if ((1.0 / 3.0) < X && X< (2.0 / 3.0)) {
			b+=1;
		}
		else if ((2.0 / 3.0) < X && X < 1.0) {
			b+=1;
		}

			avea = (double)a / (double)i;
			aveb = (double)b / (double)i;

			//printf("for nonaka no avea=%.7f\n", avea);
			//printf("for nonakano aveb=%.7f", aveb);

			ofs << avea << "," << aveb << endl;
	}
	avea = (double)a /(double) n;
	aveb = (double)b /(double) n;
	printf("%.7f\n",avea);
	printf("%.7f", aveb);



	return 0;

}
