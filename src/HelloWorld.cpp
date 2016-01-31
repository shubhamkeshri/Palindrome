#include <iostream>
#include <string>
#include <cstring>
#include <cctype>
#include <algorithm>
using namespace std;

void formatString(string &str) {

	str.erase(remove(str.begin(), str.end(), ' '), str.end());

	str.erase(remove(str.begin(), str.end(), '.'), str.end());

	str.erase(remove(str.begin(), str.end(), ','), str.end());

}

int main() {

	cout << "Please Enter The String";
	string userInput;
	getline(cin, userInput);
	formatString(userInput);
	int sizeOfUserInput = userInput.length();
	char userInputChar[sizeOfUserInput];
	strcpy(userInputChar, userInput.c_str());

	bool flag = false;

	for (int i = 0; i < sizeOfUserInput; i++) {

		if (userInputChar[i] != userInputChar[sizeOfUserInput - 1]) {

			flag = true;
			break;

		}

		sizeOfUserInput = sizeOfUserInput - 1;
	}

	if (flag == true) {
		cout << "The String is not palindrome";
	} else {
		cout << "The String is palindrome";
	}
	cout << endl;
	return 0;
}
