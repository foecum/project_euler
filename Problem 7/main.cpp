#include <iostream>
#include <math.h>

using namespace std;

bool isPrime(long int n){
    if(n < 2){
        return false;
    }else{
        if(n < 4){
            return true;
        }
        else{
            if(n % 2 == 0){
                return false;
            }
            if(n < 9){
                return true;
            }
            if(n % 3 == 0){
                return false;
            }
            else{
                long int r = floor(sqrt(n)),
                f = 5;
                while(f <= r){
                    if( n % f == 0){
                        return false;
                    }
                     if( n % (f + 2) == 0){
                        return false;
                    }

                    f += 6;
                }
                return true;
            }
        }

    }
}

void primeNumberPosition(){
	long int primePosition = 0, i = 1;
	bool positionFound = false;

	while(true){
        if(primePosition == 10001){
            break;
        }

        i++;
        if(isPrime(i)){
            primePosition++;

        }
	}
	cout << "10 001st prime number: " << i << endl;
}


int main()
{
    primeNumberPosition();
    return 0;
}
