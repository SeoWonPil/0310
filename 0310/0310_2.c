#include <stdio.h>

int main() {
    float num;
    short fixed;

    printf("실수를 입력하시요: ");
    scanf_s("%f", &num);

    // 고정 소수점 변환 (소수부 8비트 → 2^8 곱함)
    fixed = (short)(num * 256);

    printf("출력값: ");

    for (int i = 15; i >= 0; i--) {
        printf("%d", (fixed >> i) & 1);

        // 보기 좋게 8비트씩 구분
        if (i == 8) printf(".");
    }

    printf("\n");

    return 0;
}