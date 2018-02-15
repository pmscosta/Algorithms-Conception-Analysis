/*
 * Factorial.cpp
 */

#include "Factorial.h"
#include <vector>

using namespace std;
//espaço em tempo - n
// espaço de memória - n, O(n)
int factorialRecurs(int n) {

	if (n == 1 || n == 0)
		return 1;

	return n * factorialRecurs(n - 1);

}
//espaço em tempo - n
//espaço de memória - constante, é O(1);
int factorialDinam(int n) {

	if (n == 1 || n == 0)
		return 1;

	int fact_value = 1;

	for (int i = 2; i <= n; i++) {

		fact_value *= i;

	}

	return fact_value;

}
