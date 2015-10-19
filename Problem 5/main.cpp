#include <iostream>
#include <math.h>

using namespace std;

void evenlyDivisible(){
	int number, i, limit =20;
	bool divisibleNumberNotFound = true;

	number = limit * limit;

	while(divisibleNumberNotFound){
		number++;
		for(i = 2; i <= limit; i++){
			if(number % i != 0){
				break;
			}
			if(i == limit){
				divisibleNumberNotFound = false;
			}
		}
	}
	cout << "Smallest multiple: " << number << endl;
}

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

void projectEulerSolution(){
    int k = 20;
    long int n=1;
    bool check = true;
    double limit = sqrt(k);
    int primeNumber = 2;
    int exponent = 1;
    while(primeNumber <= k){
        if(check){
            if(primeNumber <= limit){
                exponent = floor(log(k)/log(primeNumber));
            }else{
                check = false;
            }
        }

        n = n * pow(primeNumber, exponent);
        primeNumber++;
        exponent = 1;
        while(!isPrime(primeNumber)){
            primeNumber++;
        }
    }

    cout << n << endl;
}
int main()
{
    projectEulerSolution();
    return 0;
}
