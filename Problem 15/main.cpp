#include <iostream>
#include <cstdint>
#include <sstream>

using namespace std;

__uint128_t factorial(int n){

    __uint128_t product = 1;
    for(int i = 1; i <= n; i++){
        product *= i;
    }
    return product;
}

std::ostream& operator<<( std::ostream& dest, __uint128_t value ){
    std::ostream::sentry s( dest );
    if ( s ) {
        __uint128_t tmp = value < 0 ? -value : value;
        char buffer[ 128 ];
        char* d = std::end( buffer );
        do
        {
            -- d;
            *d = "0123456789"[ tmp % 10 ];
            tmp /= 10;
        } while ( tmp != 0 );
        if ( value < 0 ) {
            -- d;
            *d = '-';
        }
        int len = std::end( buffer ) - d;
        auto buf =  dest.rdbuf();
        if ( buf->sputn( d, len ) != len ) {
            dest.setstate( std::ios_base::badbit );
        }
    }
    return dest;
}

int main()
{
    int i = 30, j = 30;

    /*__uint128_t a = factorial(i + j),
    b = factorial(i),
    c = factorial(j);

    __uint128_t factorialOutcome = (a/b)/c;
    cout << a << " " << b << " " << c << endl;
    cout << factorialOutcome << endl;*/
    double prod = 1;

	for(double k = (i + j) ; k != i; --k)
		prod *= k/(k-20);

	cout << printf("%20f", prod) << '\n';
    return 0;
}
