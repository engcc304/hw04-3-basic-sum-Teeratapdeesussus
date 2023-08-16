
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

int main(){

    float H, W ;
    printf( "Enter H & W :\n" ) ;
    scanf( "%f %f", &H, &W );

    float total ;
    total = (H * W) /2 ;

    printf( "Triagle Area : " ) ;
    printf( "%0.1f", total ) ;

    return 0 ;
}