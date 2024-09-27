#include <stdio.h>

int main() {
    int plaintext_alice = 0xEA, key = 0x88;
    int ciphertext, plaintext_bob;

    ciphertext = plaintext_alice ^ key;
    printf("Plaintext at alice: %X\n", plaintext_alice);

    // Alice�� ��ȣ�� ���� (����)
    ciphertext = plaintext_alice ^ key;
    printf("Ciphertext: %X\n", ciphertext);

    // Bob�� ��ȣ���� �޾� �� ����
    plaintext_bob = ciphertext ^ key;
    printf("Plaintext at Bob: %X\n", plaintext_bob);

    return 0;
}