#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
    char *result = malloc(sizeof(char)*1048576);
    char buf[1024];
    strcpy(result, "");
    int len = 0;
    while(scanf("%s",buf) == 1) {
        strcat(result+len, buf);
        len += strlen(buf);
    }
    puts(result);
    return 0;
}
