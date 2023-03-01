/*LABHW3_3_2 컴퓨터학과 3학년 20200997 이미지*/
#define _CRT_SECURE_NO_WARNINGS
#define SIZE 10
#include <stdio.h>
int askReservation();
void printSeats(int s[], int size);
void processReservation(int s[], int startSeat, int seatNumber);
int main(void) 
{
    int seatChoice = 0;
    int seats[SIZE] = { 0 };
    int startSeat = 0;

    printf("******좌석 예약 시스템******\n");

    while (startSeat < 10)
    {
        printSeats(seats, SIZE); //예약된 좌석 출력
        seatChoice = askReservation(); //선택한 좌석 개수
        processReservation(seats, startSeat, seatChoice); //예약
        startSeat += seatChoice; //예약을 시작할 좌석 번호
        while (getchar() != '\n'); // 버퍼 비움
    }

    printSeats(seats, SIZE); //최종 좌석 결과 출력
}
int askReservation()
{
    int choice;

    printf("\n좌석을 예약하시겠습니까?(몇명) ");
    scanf("%d", &choice);

    return choice;
}
void processReservation(int s[], int start, int seatNumber)
{
    for (int i = start; i < start + seatNumber; i++)
        s[i] = 1;
}
void printSeats(int s[], int size)
{
    printf("----------------------\n");
    printf(" 1 2 3 4 5 6 7 8 9 10\n");
    printf("----------------------\n");

    for (int i = 0; i < size; i++)
        printf("%2d", s[i]);
    printf("\n\n");
}