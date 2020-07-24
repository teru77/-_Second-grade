#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>
#include <random>
using namespace std;

int main(void) {

	double x1 = 0.0; //1の目
	double x2 = 0.0; //2の目
	double x3 = 0.0; //3の目
	double x4 = 0.0; //4の目
	double x5 = 0.0; //5
	double x6 = 0.0; //6の目
	double U = 0.0; //乱数
	double ave1 = 0.0; //1の目の平均
	double ave2 = 0.0; //2の目の平均
	double ave3 = 0.0; //3の目の平均
	double ave4 = 0.0; //4の目の平均
	double ave5 = 0.0; //5の目の平均
	double ave6 = 0.0; //6の目の平均

	for (int i = 1; i < 501; i++) {
		U = (rand() + 0.5) / (RAND_MAX + 1); //さいころを振る
		if (0.0 < U && U < 5.0 / 10.0) {
			x1 += 1.0;
		}
		else if (5.0 / 10.0 < U && U < 6.0 / 10.0) {
			x2 += 1.0;
		}
		else if (6.0 / 10.0 < U && U < 7.0 / 10.0) {
			x3 += 1.0;
		}
		else if (7.0 / 10.0 < U && U < 8.0 / 10.0) {
			x4 += 1.0;
		}
		else if (8.0 / 10.0 < U && U < 9.0 / 10.0) {
			x5 += 1.0;
		}
		else {
			x6 += 1.0;
		}
		if (i % 10 == 0) {  //10回ごとの期待値（平均値）を求める
			double a1 = (x1 / i) * 1;
			double a2 = (x2 / i) * 2;
			double a3 = (x3 / i) * 3;
			double a4 = (x4 / i) * 4;
			double a5 = (x5 / i) * 5;
			double a6 = (x6 / i) * 6;

			double ans = a1 + a2 + a3 + a4 + a5 + a6;//期待値
			printf("%.d %.3f\n", i, ans);

		}
	}
	ave1 = x1 / 500.0;	//最終的な期待値（平均値)を求める
	ave2 = x2 / 500.0;
	ave3 = x3 / 500.0;
	ave4 = x4 / 500.0;
	ave5 = x5 / 500.0;
	ave6 = x6 / 500.0;
	double ans2 = (ave1 * 1) + (ave2 * 2) + (ave3 * 3) + (ave4 * 4) + (ave5 * 5) + (ave6 * 6);

	printf("%.3f\n", ans2);

	return 0;

}
