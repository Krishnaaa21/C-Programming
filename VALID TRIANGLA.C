#include <stdio.h>

int main(){
    int t, a, b, c;
    scanf("%d", &t);
    while (t != 0){
        scanf("%d%d%d", &a, &b, &c);
        if(a + b + c == 180){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    t = t - 1;
    }
    return 0;
}
