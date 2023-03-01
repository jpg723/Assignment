/*LABHW3_3_2 ��ǻ���а� 3�г� 20200997 �̹���*/
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

    printf("******�¼� ���� �ý���******\n");

    while (startSeat < 10)
    {
        printSeats(seats, SIZE); //����� �¼� ���
        seatChoice = askReservation(); //������ �¼� ����
        processReservation(seats, startSeat, seatChoice); //����
        startSeat += seatChoice; //������ ������ �¼� ��ȣ
        while (getchar() != '\n'); // ���� ���
    }

    printSeats(seats, SIZE); //���� �¼� ��� ���
}
int askReservation()
{
    int choice;

    printf("\n�¼��� �����Ͻðڽ��ϱ�?(���) ");
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