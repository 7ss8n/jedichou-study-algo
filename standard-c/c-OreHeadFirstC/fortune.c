#include <stdio.h>
#include <stdlib.h>

void fortune_cookie(char msg[]) {
    printf("Message reads: %s\n", msg);
    printf("msg occupies %i bytes\n", sizeof(msg));
}

int main(void) {
    char * msg = "cookies";
    fortune_cookie(msg);
}


