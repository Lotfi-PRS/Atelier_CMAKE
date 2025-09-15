#include "./../../include/calculator.h"

double _add(double a, double b) {
	return a+b;
}

double _sub(double a, double b) {
	return a-b;
}

double _mul(double a, double b) {
	return a*b;
}

double _div(double a, double b) {
	return a/b;
}
double _car(double a, double b) {
	double res = 1;
	while(b > 0)
	{
		res = res * a;
		b = b - 1;
	}
	return res;
