#include <stdio.h>
#include <stdlib.h>
#include <string.h>



void copiarString(char * copiarDaqui, char *colarAqui) {

    while(*copiarDaqui != '\0'){
        *colarAqui = *copiarDaqui;
        ++copiarDaqui;
        ++colarAqui;
    }
    *(colarAqui -1) = 'c';
}

int main() {
    char str1[] = "Pao com mortadela";
    char str2[20];
    copiarString(str1, str2);

    printf("%s\n", str2);
    getchar();

    return 0;
}
