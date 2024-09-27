#include <stdio.h>

int main() {
    int num1, num2, base1, base2;
    char type1, type2;

    while (1) {
        printf("First number's type: Octal (1)? Decimal (2)? Hexadecimal (3)? : ");
        scanf(" %c", &type1);
        if (type1 == 'q' || type1 == 'Q') {
            break;  // 'q' 또는 'Q'를 입력하면 종료
        }

        printf("First number?: ");
        scanf("%x", &num1); // 16진수로 입력받아 num1에 저장 (다른 진수도 마찬가지로 처리)

        printf("Second number's type: Octal (1)? Decimal (2)? Hexadecimal (3)? : ");
        scanf(" %c", &type2);

        printf("Second number?: ");
        scanf("%x", &num2);

        // 입력받은 진수에 따라 num1과 num2를 10진수로 변환
        if (type1 == '1') {
            num1 = (int)strtol(&type1, NULL, 8);
        }
        else if (type1 == '3') {
            // 이미 16진수로 입력받았으므로 변환 필요 없음
        }
        // type2에 대해서도 마찬가지로 처리

        // 덧셈 연산
        int sum = num1 + num2;

        // 결과 출력
        printf("(Octal)   %o\n", sum);
        printf("(Decimal) %d\n", sum);
        printf("(Hexadecimal) %X\n\n", sum);
    }

    return 0;
}