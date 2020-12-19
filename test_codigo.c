#include <stdio.h>

bool iso(char *string1, char *string2){
    if(strlen(string1) != strlen(string2)){
        return FALSE;
    }
    
    int arr1[80] = {0};
    int arr2[80] = {0};

    for(int i =0; i < strlen(string1); i++){
        if(arr1[] != arr2[]){
            
        }
    }


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
    test(TRUE, iso("cbee", "ikcc"));
    test(TRUE, iso("hola", "face"));
    test(FALSE, iso("buenas", "jjsads"));
    test(FALSE, iso("kidsa", "aaa"));
}