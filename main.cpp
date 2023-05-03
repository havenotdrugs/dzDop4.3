#include <iostream>
#include <variant>

using namespace std;

int word(string greeting);

int main() {
    string greeting = "Privet Kak Dela Suka Blyad";
    cout << word(greeting);
}

int word(string greeting) {
    int words = 0;
    for (char i : greeting) {
        if (i == ' ') words++;
    }
    return words + 1;
}
