#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int re(int a, int b, int c)
{
    int d;
    int z = 0;
    scanf_s("%d", &d);
    if (c == d)
    {
        printf("�����Դϴ�.");
        return 0;//�����̶�� ����
    }
    else
    {
        printf("�����Դϴ�.");
        printf("\n");
        re(a, b, c);// �ڱ��ڽ��� ȣ���Ͽ� �ٽ� ������ �Է�

    }

}

int main()
{
    srand((unsigned int)time(NULL)); //�ð��� ���� ������ ����
    int a, b, c;
    a = rand() % 10;// 10 �̸��� ������ ���� ���
    b = rand() % 10;// 10 �̸��� ������ ���� ���
    if (a == 0)
        a++; //�������� 1���� ���������� 0�̶�� 1�� ���
    else if (b == 0)
        b++;
    printf("%d x %d = ?", a, b);// ������ ���� ���� ������
    printf("\n");
    c = a * b;// ���� ����
    re(a, b, c); // re�Լ� ȣ��

    return 0;
}