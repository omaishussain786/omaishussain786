#include <iostream>
#include <string>
using namespace std;

int main() {
    string sentence;
    int count = 0;
    cout << "Enter a sentence: ";
    getline(cin, sentence);
    for (size_t i = 0; i < sentence.length(); i++)
        if (sentence[i] == ' ') count++;
    cout << "Word count: " << count + 1 << endl;
    return 0;
}