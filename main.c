#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int a;
    int b;
    
    printf("���ڸ��Է��ϼ��� : ");
    scanf("%i", &a);
    
    printf("�и��Է��ϼ��� : ");
    scanf("%i", &b);
    
    float result = (float)a/b;
    printf("�������� ����� : %f �Դϴ�.\n", result);
    
    system("PAUSE");
    return 0;
}
