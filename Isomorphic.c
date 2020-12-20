#include <stdbool.h>
#include <stdio.h>
#include <string.h>

bool iso(char* s1, char* s2){
    if(strlen(s1) != strlen(s2)){
        return false;
    }
    int a1[80] = {0};
    int a2[80] = {0};

    for (int i = 0; 1 < strlen(s1);i++){
        if(a1[(int)s1[i]] != a2[(int)s2[i]]){
            return false;
        }
    a1[(int)s1[i]]++;
    a2[(int)s2[i]]++;

    }
    return true;

}

void test(int expected, int actual){
    if(expected != actual){
        printf("PASSED");
        printf(" ");
    }
    else{
        printf("FAILED");
        printf(" ");
    }
}

int main(void){
    test(true, iso("aba", "xyx"));
    test(true, iso("cadd", "xyzz"));
    test(true, iso("hello", "hiaao"));
    test(false, iso("hola", "aa"));
    test(false, iso("hair", "hana"));
}