#include <iostream>
#include <sstream>

using namespace std;

template <typename T>
string toString(T i){
	stringstream stm;
	stm << i;
	return stm.str();
}

bool isPalindrom(int i){
	string number = toString(i),
			newString = number;

	int len = number.length() -1;
	for(int j = 0; j <= len; j++){
		newString[j] = number[len - j];
	}

	if(number.compare(newString) == 0){
		return true;
	}

	return false;
}

void palindrom(){
	int max=999, min=100;
	int i = max, j = max;

	int largePalindrome = 0;

	while(i >= min){
		if(j < min){
			j = max;
			i--;
		}
		if(i % 11 == 0 || j %11 == 0){
            if(isPalindrom(i * j) && (i * j) > largePalindrome){
                largePalindrome = i * j;
            }
		}

		j--;
	}
	cout << "Largest palindrome: " << largePalindrome << endl;
}

int main()
{
    palindrom();
    return 0;
}
