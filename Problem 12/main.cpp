#include <iostream>
#include <math.h>

using namespace std;

int getDivisorCount(long int num){
    int count = 0;
    for(long int i = 1; i <= sqrt(num); i++){
        if(num % i == 0){
            count += 2;
        }
    }
    return count;
}

int getTriangleNumber(){
    long int nextNumber = 1, incr = 2;
    int divisors = 0;
    while(divisors <= 500){
        nextNumber += incr++;
        divisors = getDivisorCount(nextNumber);
    }

    cout << "The first triangle number with more than 500 divisors is " << nextNumber << endl;
}
int main(){
    getTriangleNumber();
    return 0;
}
