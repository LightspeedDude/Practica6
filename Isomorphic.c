#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool iso(char* s1, char* s2){
    if(strlen(s1) != strlen(s2)){
        return false;
    }
    
    int a1[80];
    int a2[80];

    for(int i=0; i < strlen(s1); i++){
        if(a1[s1[i]]!= a2[s2[i]]){
            return false;
        }
    a1[s1[i]]++;
    a2[s2[i]]++;

    }
    return true;

}

void test(int expected, int actual){
    if(expected == actual){
        printf("PASSED");
    }
    else{
        printf("FAILED");
    }
}

int main(void){
    test(TRUE, iso("aba", "xyx"));
    test(TRUE, iso("ccda", "klm"));
    test(TRUE, iso("kilo", "maiz"));
    test(FALSE, iso("kids", "aa"));
    test(FALSE, iso("adad", "ccbb"))
}