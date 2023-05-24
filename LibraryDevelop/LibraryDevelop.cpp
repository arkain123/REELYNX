#include <iostream>
#include "REELYNX.h"
using namespace std;

int main() {
	int arr[] = { 1, 9, 2, 8, 3, 7, 4, 6, 5, 0 };
	quickSort(*arr, 0, 10);
	consoleOut(*arr, 10);
}