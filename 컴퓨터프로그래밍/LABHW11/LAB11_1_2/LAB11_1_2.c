/*LAB11_1_2 컴퓨터학과 3학년 20200997 이미지*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
typedef struct {
    int midterm;
    int final;
}Score;
void printScore(Score* p) {

    printf("중간고사 성적은 %d\n", p->midterm);
    printf("학기말고사 성적은 %d\n", p->final);

} // 매개변수 변경
Score* biggerScore(Score* p1, Score* p2) {
    
    if ((p1->midterm + p1->final) < (p2->midterm + p2->final))
        return p2;
    else
        return p1;

} // 반환타입 변경, 매개변수 변경
void totalScore(Score* p1, Score* p2, Score* tp) {

    tp->midterm = p1->midterm + p2->midterm;
    tp->final = p1->final + p2->final;

} // 반환타입 변경, 매개변수 한 개 추가
Score createScore(int m, int f) {
    Score total;

    total.midterm = m;
    total.final = f;

    return total;
} // 변경되지 않음! 
int main(void) {
    Score s1, s2, temp;
    s1.midterm = 50; s1.final = 100;
    s2.midterm = 70; s2.final = 70;
    printf("1)-----------------------------\n");
    printScore(&s1);
    printScore(&s2);
    printf("2)-----------------------------\n");
    printf("둘중 성적이 좋은 점수:\n");
    printScore(biggerScore(&s1, &s2));
    printf("3)-----------------------------\n");
    printf("두 성적의 총 합:\n");
    totalScore(&s1, &s2, &temp);
    printScore(&temp);
    printf("4)-----------------------------\n");
    temp = createScore(99, 99);
    printScore(&temp);
}
