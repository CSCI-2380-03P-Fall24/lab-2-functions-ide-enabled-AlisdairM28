#include <iostream> // Used for cin and cout
#include <string>
using namespace std;
// write any code to test out your functions here
int replaceVariable(int array[], int target, int start, int end) {
	for (int i = start; i <= end; i++)
	{
		if (array[i] == target)
		{
			array[i] = 1000;
		}
	}

	return 0;
}
// run comman "make demo" to run this code

int main() {
    return 0;
}