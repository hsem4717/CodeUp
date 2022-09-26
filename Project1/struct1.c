#include <stdio.h>
#include <stdlib.h>
#define MAX_TERMS 100
//1. ������ ���� ����ü ����
//2. ��������� ����ü ����
typedef struct {
    int row;
    int col;
    int value;
}element;

typedef struct {
    element data[100];
    int rows;
    int cols;
    int terms;
}Smatrix;

Smatrix matrixTrans2(Smatrix a) {
    int i, j, bi = 0; //��� b���� ���� ������ġ 
    Smatrix b;
    b.terms = a.terms;
    b.rows = a.cols;
    b.cols = a.rows;
    for (j = 0; j < b.rows; j++) {
        for (i = 0; i < a.terms; i++) {
            if (j == a.data[i].col) {
                b.data[bi].row = a.data[i].col;
                b.data[bi].col = a.data[i].row;
                b.data[bi].value = a.data[i].value;
                bi++;
            }
        }
    }
    //������ (��,��,��)�� ��ġ��� (��,��,��) ���� �����ϴ� �Լ� �ۼ�
    return b;
}

void matrixPrint(Smatrix a) {
    for (int i = 0; i < a.terms; i++) {
        printf("(%d, %d, %d) \n", a.data[i].row, a.data[i].col, a.data[i].value);
    }
    printf("---------------------\n");
}

int main(void) {
    Smatrix m;
    //��� ���� �װ���,�ళ��,������ �Է�
    scanf("%d %d %d", &m.terms, &m.rows, &m.cols);
    for (int i = 0; i < m.terms; i++) {
        scanf("%d %d %d", &m.data[i].row, &m.data[i].col, &m.data[i].value);
    }
    Smatrix r;
    matrixPrint(m);
    r = matrixTrans2(m);
    matrixPrint(r);
    return 0;

}