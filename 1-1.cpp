#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>
#include <random>
using namespace std;

int main(void) {
    double max= 1.0;
    double min= 0.0;
	double sum = 0.0;    //発生させた一様乱数の合計

	for (int i = 1; i < 1001; i++) {   //一様乱数の発生
		sum = (rand() + 0.5) /( RAND_MAX + 1.0)+sum;    //乱数を繰り返し加える
	}
	double ave = sum / 1000;   //乱数の平均

	printf("%.8f", ave);   //乱数の平均を出力

	return 0;

}
