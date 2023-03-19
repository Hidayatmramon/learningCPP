#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<char> alphabet;
    int aLetterCode = (int)'a'; // ASCII code for letter a (97)
    int zLetterCode = (int)'i'; // ASCII code for letter z (122)
    for (int charAsciiCode = aLetterCode; charAsciiCode <= zLetterCode; charAsciiCode++) {
        alphabet.push_back((char)charAsciiCode);
    }
    for (char c : alphabet) {
        cout << c << " ";
    }
    return 0;
}