#include <iostream>

using namespace std;

void difference(){
	long int sumOfSquares = 0,
			squareOfSums = 0;
	for(int i = 1; i <= 100; i++){
		sumOfSquares += (i*i);
		squareOfSums += i;
	}
	cout << "The diference is: " << (squareOfSums*squareOfSums) - sumOfSquares << endl;
}

int main()
{
    difference();
    return 0;
}
