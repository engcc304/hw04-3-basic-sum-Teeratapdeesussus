
/*
    จงกรอกหมายเลขทั้งหมดจำนวน 3 ค่า และแสดงผลรวมดังแสดงดังผลลัพธ์ด้านล่าง
    
    Test case:
        2 3 1
    Output:
        Answer = 6

    Test case:
        4 -1 3
    Output:
        Answer = 6
*/
#include <stdio.h>

int main() {
    float h, w;
    printf("Enter H & W :\n");
    scanf("%f %f", &h, &w);

    float area = (h * w) / 2;
    printf("Triagle Area : %.1f\n", area);

    return 0;
}