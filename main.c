#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int a;
    int b;
    
    printf("분자를입력하세요 : ");
    scanf("%i", &a);
    
    printf("분모를입력하세요 : ");
    scanf("%i", &b);
    
    float result = (float)a/b;
    printf("나누기의 결과는 : %f 입니다.\n", result);
    
    system("PAUSE");
    return 0;
}
