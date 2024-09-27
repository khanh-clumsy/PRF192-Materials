#include <stdio.h>
#include <ctype.h>
int main(){
    char ch;
    int nVowels = 0;
    int nConsonants = 0;
    int nOthers = 0;
    do {
        ch = getchar();
        ch = toupper(ch);
        if (ch>='A' && ch<='Z'){
            switch (ch){
                case 'U':
                case 'E':
                case 'O':
                case 'A':
                case 'I': 
                    nVowels++;
                    break;
                default:
                    nConsonants++;
            }
        }
        else{
            nOthers++;
            break;
        }
    } while (ch != '\n');
    printf("Number of Vowels: %d\n", nVowels);
    printf("Number of Consonants: %d\n", nConsonants);
    printf("Number of Others: %d\n", nOthers);
}
