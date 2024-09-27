#include <stdio.h>

int main() {
    int plaintext_alice = 0xEA, key = 0x88;
    int ciphertext, plaintext_bob;

    ciphertext = plaintext_alice ^ key;
    printf("Plaintext at alice: %X\n", plaintext_alice);

    // Alice가 암호문 생성 (예시)
    ciphertext = plaintext_alice ^ key;
    printf("Ciphertext: %X\n", ciphertext);

    // Bob이 암호문을 받아 평문 복구
    plaintext_bob = ciphertext ^ key;
    printf("Plaintext at Bob: %X\n", plaintext_bob);

    return 0;
}