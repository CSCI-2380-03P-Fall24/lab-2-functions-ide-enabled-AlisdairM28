#include <iostream> // Used for cin and cout
#include <string>
using namespace std;
// write any code to test out your functions here
int sumOdds(int array[], int start, int end){
	int sum = 0;
	for (int i = start; i < end; i++)
	{
		if (i % 2 == 1)
		{
			sum = sum + array[i];
		}
	}

	return sum;
}
// run comman "make demo" to run this code

int main() {
    return 0;
}