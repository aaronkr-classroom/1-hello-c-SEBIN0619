#include <stdio.h>

int main() {
    int num1, num2, base1, base2;
    char type1, type2;

    while (1) {
        printf("First number's type: Octal (1)? Decimal (2)? Hexadecimal (3)? : ");
        scanf(" %c", &type1);
        if (type1 == 'q' || type1 == 'Q') {
            break;  // 'q' �Ǵ� 'Q'�� �Է��ϸ� ����
        }

        printf("First number?: ");
        scanf("%x", &num1); // 16������ �Է¹޾� num1�� ���� (�ٸ� ������ ���������� ó��)

        printf("Second number's type: Octal (1)? Decimal (2)? Hexadecimal (3)? : ");
        scanf(" %c", &type2);

        printf("Second number?: ");
        scanf("%x", &num2);

        // �Է¹��� ������ ���� num1�� num2�� 10������ ��ȯ
        if (type1 == '1') {
            num1 = (int)strtol(&type1, NULL, 8);
        }
        else if (type1 == '3') {
            // �̹� 16������ �Է¹޾����Ƿ� ��ȯ �ʿ� ����
        }
        // type2�� ���ؼ��� ���������� ó��

        // ���� ����
        int sum = num1 + num2;

        // ��� ���
        printf("(Octal)   %o\n", sum);
        printf("(Decimal) %d\n", sum);
        printf("(Hexadecimal) %X\n\n", sum);
    }

    return 0;
}