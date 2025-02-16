#include <stdio.h>
int main(){
char ch;
if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("%c is a Vowel.\n", ch);
    }
    else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("%c is a Consonant.\n", ch);
    }
    else if (ch >= '0' && ch <= '9') {
        printf("%c is a Digit.\n", ch);
    }
    else {
        printf("%c is a Special Character.\n", ch);
    }
}
