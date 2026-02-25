#include <stdio.h>
int main(){

 /* for (int i = 1; i <= 1; i++) {
    for (int j = 1; j <= 2; j++) {
        printf("O cavalo andou uma casa na vertical.\n");
    }
    printf("O cavalo andou uma casa na horizontal.\n");
}

*/
int i = 1;
int j = 1;

do {
    i++;
    printf("O cavalo andou uma casa na Horizontal.\n");
do {
    j++;
    printf("O cavalo andou uma casa na Vertical.\n");
}
while ( j<=i);
}
while(i<=1);

    return 0;
}