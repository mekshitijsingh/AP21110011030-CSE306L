/*2. Implementation of Language recognizer for set of all strings ending with two symbols of
same type.
*/
#include <stdio.h>
#define MAX 100

int main() {
    char a[] = "String is accepted";
    char na[] = "String is not accepted";
    char str[MAX], state = 'a';
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        switch (state) {
            case 'a':
                if (str[i] == '0') {
                    state = 'b';
                } else if (str[i] == '1') {
                    state = 'd';
                }
                break;
            case 'b':
                if (str[i] == '1') {
                    state = 'd';
                } else if (str[i] == '0') {
                    state = 'c';
                }
                break;
            case 'c':
                if (str[i] == '0') {
                    state = 'c';
                } else if (str[i] == '1') {
                    state = 'd';
                }
                break;
            case 'd':
                if (str[i] == '0') {
                    state = 'b';
                } else if (str[i] == '1') {
                    state = 'e';
                }
                break;
            case 'e':
                if (str[i] == '0') {
                    state = 'b';
                } else if (str[i] == '1') {
                    state = 'e';
                }
                break;
        }
    }

    if (state == 'e' || state == 'c') {
        printf("%s", a);
    } else {
        printf("%s", n);
    }

    return 0;
}
