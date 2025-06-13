
#include <iostream>
#include <cstring>
#include <cctype>
#include <algorithm>
using namespace std;


/*
    Develop an algorithm that counts the number of occurences of a given character in a string, make sure you use call by reference to the array of a class with char and count as
    a private member attributes when returning from parse function. 

    write a test program that reades a c-string and displays the number of spaces, letters, and digits in the string. In addition, to that you need to output the histogram of the char
    and count array sorted by the ascii char ascending order. 
*/

class CharCounter {
private:
    int count[128]; 

public:
    CharCounter() {
        memset(count, 0, sizeof(count));
    }

    void parse(const char* str) {
        for (int i = 0; str[i] != '\0'; ++i) {
            unsigned char c = str[i];
            if (c < 128) {
                count[c]++;
            }
        }
    }

    void displayStats(string z) {
        int letters = 0, digits = 0, spaces = 0;
        for (int i = 0; i < 128; ++i) {
            if (isalpha(i)) letters += count[i];
            else if (isdigit(i)) digits += count[i];
            else if (isspace(i)) spaces += count[i];
        }

        cout << "The number of Letters in \"" << z << "\" is " << letters << endl;
        cout << "The number of Digits in \"" << z << "\" is " << digits << endl;
        cout << "The number of Spaces in \"" << z << "\" is " << spaces << endl;
    }

    void printHistogram() {
        cout << "\n---- Histogram ----\n";
        cout << "Char          Count\n";
        for (int i = 0; i < 128; ++i) {
            if (count[i] > 0) {
                if (i == ' ') {
                cout << "\nspace         " << count[i] << endl;
            } else {
                cout << "\n" << (char)i << "             " << count[i] << endl;
            }
            }
        }
    }
};

int main() {
    const int SIZE = 1000;
    char input[SIZE];
    cout << "Enter a string:";
    cin.getline(input, SIZE);
    string inputStr(input);
    CharCounter counter;
    counter.parse(input);
    counter.displayStats(inputStr);
    counter.printHistogram();

    return 0;
}