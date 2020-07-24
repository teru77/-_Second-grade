#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>
#include <random>
using namespace std;

int main(void) {
	
	double x = 0.0;    //表
	double y = 0.0;    //裏
	double U = 0.0;    //乱数

	for (int i = 1; i < 1001; i++) {   //コインを投げる
		U = (rand() + 0.5) / (RAND_MAX + 1.0);
		if (U < 0.5) {
			x += 1;
		}
		else{
			y += 1;
		}
	}
	double X = x / 1000.0;   //表の出る確率
	double Y = y / 1000.0;   //裏の出る確率

	printf("%.5f\n", X);
	printf("%.5f\n", Y);

	return 0;

}
