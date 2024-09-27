#include <stdio.h>

int main() {
    int val_a = 0xAD;
    int result1, result2, result3;

    // 오른쪽 시프트 연산 (충분히 큰 값만큼 시프트)
    result1 = val_a >> 32;

    // AND 연산
    result2 = val_a & 0;

    // XOR 연산 (자기 자신과 XOR)
    result3 = val_a ^ val_a;

    printf("val_a: AD (hex), 173 (dec), 255 (oct)\n");
    printf("result1: %d\n", result1);
    printf("result2: %d\n", result2);
    printf("result3: %d\n", result3);

    return 0;
}