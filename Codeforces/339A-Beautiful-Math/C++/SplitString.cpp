#include <iostream>
#include <string.h>
using namespace std;
int main() {
    char str[] = "Geeks-for-Geeks";
    // Returns the first token
    char *token = strtok(str,"-");
    // Keep printing tokens while one of the delimiters present in str[]
    while (token != NULL) {
        cout << token << "\n";
        token = strtok(NULL, "-");
    }
    return 0;
}