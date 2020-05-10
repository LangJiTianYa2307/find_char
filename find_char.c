#include<stdio.h>

char* find_char(char const * src, char const *chars);

int main(){
    const char * src = "ABCDEF";
    const char * chars = "XRCQEF";
    char* result = find_char(src,chars);
    printf("%c\n",*result);
    return 0;
}

char* find_char(char const * src, char const *chars){
    const char * temp1 = src;
    const char * temp2 = chars;
    if(temp1== NULL || chars == NULL)
        return NULL;
    while (*temp1 != '\0')
    {
        temp2 = chars;
        while(*temp2 != '\0'){
            if(*temp1 == *temp2)
                return temp1;
            temp2++;
        }
        temp1++;
    }
    return NULL;
}