#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
    char *buf = malloc(sizeof(char) * 255 * 1024 * 1024);
    while (fgets(buf, 255 * 1024 * 1024, stdin)) {
        int sum = 0;
        for (char *p = strtok(buf, " "); p != NULL; p = strtok(NULL, " ")) {
            sum += atoi(p);
        }
        printf("%d\n",sum);
    }
    return 0;
}
