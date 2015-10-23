#include <iostream>
#include <boost/multiprecision/integer.hpp>
#include <sstream>

using namespace std;

int main(){
	boost::multiprecision::int1024_t product = 1;
    for(int i = 0; i < 1000; i++){
        product *= 2;
    }

    stringstream str;
    str << product;
    string s = str.str();
    long int sum = 0;
    int len = s.length();
    for(int i = 0; i < len; i++){
    	sum += s[i] - '0';
    }
    cout << sum << endl;
    return 0;
}
