/*

*/
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

void largePrimeFactor(){
	long int number = 600851475143;

	for(long int i = 2; i <= number; i++){
		if(number % i == 0 ){
			if(isPrime(number / i)){
				cout << "The Larger prime factor is " << number / i << endl;
				break;
			}
		}
	}
}

int main()
{
    largePrimeFactor();
    return 0;
}
