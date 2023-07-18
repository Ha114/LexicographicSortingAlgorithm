#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;

void CompareTwo(string& first, string& second) {
	for (int i = 0; i < first.length(); i++) { //n
		if (second[i] < first[i]) { //n
			string temp = first;
			first = second;
			second = temp;
			break;
		}
		else if (second[i] > first[i]) { //n^2
			break;
		}

	}
}

void contains(std::vector<std::string>& strings) {
	int size = strings.size();

	for (int i = 0; i < size; i++) { //n
		for (int j = 0; j < size - 1; j++) { //n
			CompareTwo(strings[j], strings[j + 1]);
		}
	}
}

int main()
{
	vector<string> words;
	string newWord;

	cout << "Enter an array of strings (to end enter space) : ";
	do {
		cin >> newWord;
		if (newWord.compare("0") && newWord.capacity() < 100000) {
			words.push_back(newWord);
		}
	} while (newWord != "0");

	cout << endl << "Input: [";
	for (auto i : words) {
		cout << "\"" << i << "\", ";
	}
	cout << "]";

	contains(words);

	cout << endl << "Output: ";
	for (auto i : words) {
		cout << i << " ";
	}

	return 0;
}