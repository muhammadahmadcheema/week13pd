#include <fstream>
#include <iostream>
#include <string>

using namespace std;

string morse(string plaintext) {
    string result = "";
    for (int i = 0; i < plaintext.length(); i++) {
        if (plaintext[i] == 'A' || plaintext[i] == 'a') {
            result += ".-";
        }
        if (plaintext[i] == 'B' || plaintext[i] == 'b') {
            result += "-...";
        }
        if (plaintext[i] == 'C' || plaintext[i] == 'c') {
            result += "-.-.";
        }
        if (plaintext[i] == 'D' || plaintext[i] == 'd') {
            result += "-..";
        }
        if (plaintext[i] == 'E' || plaintext[i] == 'e') {
            result += ".";
        }
        if (plaintext[i] == 'F' || plaintext[i] == 'f') {
            result += "..-.";
        }
        if (plaintext[i] == 'G' || plaintext[i] == 'g') {
            result += "--.";
        }
        if (plaintext[i] == 'H' || plaintext[i] == 'h') {
            result += "....";
        }
        if (plaintext[i] == 'I' || plaintext[i] == 'i') {
            result += "..";
        }
        if (plaintext[i] == 'J' || plaintext[i] == 'j') {
            result += ".---";
        }
        if (plaintext[i] == 'K' || plaintext[i] == 'k') {
            result += "-.-";
        }
        if (plaintext[i] == 'L' || plaintext[i] == 'l') {
            result += ".-..";
        }
        if (plaintext[i] == 'M' || plaintext[i] == 'm') {
            result += "--";
        }
        if (plaintext[i] == 'N' || plaintext[i] == 'n') {
            result += "-.";
        }
        if (plaintext[i] == 'O' || plaintext[i] == 'o') {
            result += "---";
        }
        if (plaintext[i] == 'P' || plaintext[i] == 'p') {
            result += ".--.";
        }
        if (plaintext[i] == 'Q' || plaintext[i] == 'q') {
            result += "--.-";
        }
        if (plaintext[i] == 'R' || plaintext[i] == 'r') {
            result += ".-.";
        }
        if (plaintext[i] == 'S' || plaintext[i] == 's') {
            result += "...";
        }
        if (plaintext[i] == 'T' || plaintext[i] == 't') {
            result += "-";
        }
        if (plaintext[i] == 'U' || plaintext[i] == 'u') {
            result += "..-";
        }
        if (plaintext[i] == 'V' || plaintext[i] == 'v') {
            result += "...-";
        }
        if (plaintext[i] == 'W' || plaintext[i] == 'w') {
            result += ".--";
        }
        if (plaintext[i] == 'X' || plaintext[i] == 'x') {
            result += "-..-";
        }
        if (plaintext[i] == 'Y' || plaintext[i] == 'y') {
            result += "-.--";
        }
        if (plaintext[i] == 'Z' || plaintext[i] == 'z') {
            result += "--..";
        }
        if (plaintext[i] == ' ') {
            result += "-.-.-.-";
        }
    }
    return result;
}


main() {
    string line;
    cout << "Enter text: ";
    getline(cin, line); 

    string morsed = morse(line); 
    cout << "Morse Code: " << morsed << endl;

}
