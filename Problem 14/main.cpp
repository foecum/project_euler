#include <iostream>

using namespace std;

int main()
{
    long int longestSequence = 0,
    number = 0;
    for(long int i = 1000000; i > 1; i--){
        long int j = 0,
        currentNumber = i;

        while( currentNumber > 1){
            if(currentNumber %2 == 0){
                currentNumber /= 2;
                j++;
            }else if(currentNumber %2 == 1){
                currentNumber = (3*currentNumber) + 1;
                currentNumber /= 2;
                j+=2;
            }

        }

        if(j > longestSequence){
            longestSequence = j + 1;
            number = i;
        }
    }

    cout << "Number with longest sequence is "<< number << endl;
    cout << "Longest sequence is "<< longestSequence << endl;
    return 0;
}
