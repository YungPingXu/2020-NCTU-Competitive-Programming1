#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
    char *result = malloc(sizeof(char)*1048576);
    char buf[1024];
    strcpy(result, "");
    while(scanf("%s",buf) == 1) {
        strcat(result, buf);
    }
    puts(result);
    return 0;
}
