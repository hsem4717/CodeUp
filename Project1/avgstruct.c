#include <stdio.h>
#include <stdlib.h>

void genRandom(int a[][5], int r);
void outputArray(int a[][5], int r);
float averageScore(int* row, int size);
int main() {

    int score[4][5], i;
    genRandom(score, 4);
    outputArray(score, 4);

    for (i = 0; i < 4; i++) {
        printf("���� %d : %.2f\n", i + 1, averageScore(score[i], 5));
    }

    return 0;
}
void genRandom(int a[][5], int r) {
    int i, j;
    for (i = 0; i < r; i++)
        for (j = 0; j < 5; j++)
            a[i][j] = (rand() % 10) + 1;  // �� �κп� rand �Լ��� �̿��� 1~10 ���� ����
}
void outputArray(int a[][5], int r) {
    int i, j;
    for (i = 0; i < r; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    // a�迭�� r�� 5���� ������ ���
}
float averageScore(int* row, int size) {
    // ���� �Ѹ��� ������ �Է� �޾� ���� ����� ���Ͽ� ���
    int max = 0, min = 1000, i, tot = 0;
    for (i = 0; i < size; i++) {
        if (max < row[i]) {
            max = row[i];
        }
        if (min > row[i]) {
            min = row[i];
        }
    }
    for (i = 0; i < size; i++) {
        tot += row[i];
    }
    tot -= max;
    tot -= min;
    return tot / 3.0;
}