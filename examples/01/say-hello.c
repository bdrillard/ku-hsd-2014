#include <stdio.h>

int main() {
    int ntests;
    char name[100];

    scanf("%d\n", &ntests);

    int i;
    for (i = 0; i < ntests; i++) {
        scanf("%s\n", name);
        printf("Hello %s!\n", name);
    }

    return 0;
}
