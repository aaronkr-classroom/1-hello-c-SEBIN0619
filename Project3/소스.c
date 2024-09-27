#include <stdio.h>

int main() {
    int val_a = 0xAD;
    int result1, result2, result3;

    // ������ ����Ʈ ���� (����� ū ����ŭ ����Ʈ)
    result1 = val_a >> 32;

    // AND ����
    result2 = val_a & 0;

    // XOR ���� (�ڱ� �ڽŰ� XOR)
    result3 = val_a ^ val_a;

    printf("val_a: AD (hex), 173 (dec), 255 (oct)\n");
    printf("result1: %d\n", result1);
    printf("result2: %d\n", result2);
    printf("result3: %d\n", result3);

    return 0;
}