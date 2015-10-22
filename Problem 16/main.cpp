#include <iostream>
#include <sstream>

using namespace std;

std::ostream& operator<<( std::ostream& dest, __int128_t value ){
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

int main(){
    __int128_t product = 1;
    for(int i = 0; i < 346; i++){
        product *= 3;
    }

    cout << product << endl;
    return 0;
}
