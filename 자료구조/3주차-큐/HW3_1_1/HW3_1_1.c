#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define MAX_QUEUE_SIZE 3
#define MAX_NAME_SIZE 20

typedef struct {
    char name[MAX_NAME_SIZE];
} element;

typedef struct {
    element queue[MAX_QUEUE_SIZE];
    int front, rear;
} QueueType;

void error(char* message) {
    fprintf(stderr, "%s\n", message);
    exit(1);
}
void init(QueueType* q) { 
    q->front = q->rear = 0; 
}
int is_empty(QueueType* q) { 
    return (q->front == q->rear); 
}
int is_full(QueueType* q) { 
    return ((q->rear + 1) % MAX_QUEUE_SIZE == q->front); 
}
void enqueue(QueueType* q, element item) {
    if (is_full(q))
        printf("대기자가 꽉찼으니 담기회를 이용\n");
    else {
        printf("기다려주십시요.\n");
        q->rear = (q->rear + 1) % MAX_QUEUE_SIZE;
        q->queue[q->rear] = item;
    }
}
element dequeue(QueueType* q) {
    element* empty = NULL;

    if (is_empty(q)) 
        return;
    q->front = (q->front + 1) % MAX_QUEUE_SIZE;
    return q->queue[q->front];
}

element peek(QueueType* q) {
    if (is_empty(q))
        error("큐가 공백상태입니다");
    return q->queue[(q->front + 1) % MAX_QUEUE_SIZE];
}

int get_count(QueueType* q) {
    int count = 0;
    int front = q->front;
    int rear = q->rear;
    
    if (front <= rear) {
        for (int i = front + 1; i <= rear; i++)
            count++;
        return count;
    }
    for (int i = front + 1; i < MAX_QUEUE_SIZE; i++)
        count++;
    
    for (int i = 0; i <= rear; i++)
        count++;
    return count;
}

void print_queue(QueueType* q) {
    int i = q->front;
    
    if (is_empty(q)) {
        printf("\n");
        return;
    }
    while (1) {
        i = (i + 1) % MAX_QUEUE_SIZE;
        printf("%s ", q->queue[i].name);
        if (i == q->rear || i == q->front)
            break;
    }
    printf("\n");
}

void main() {
    QueueType q1, q2;
    element elem;
    char select, sex;
    
    init(&q1);
    init(&q2);
    
    printf("미팅 주선 프로그램입니다.\n");
    while (1) {
        printf("i(nsert 고객입력), c(heck, 대기자 체크), q(uit): ");
        scanf(" %c", &select);

        if (select == 'i') {
            printf("이름을 입력:");
            scanf("%s", elem.name);
            printf("성별을 입력(m or f):");
            scanf(" %c", &sex);
         
            if (sex == 'm') {
                if (is_empty(&q2)) {
                    printf("아직 대상자가 없습니다. ");
                    enqueue(&q1, elem);
                }
                else {
                    enqueue(&q1, elem);
                    printf("커플이 탄생했습니다! %s과 %s\n", dequeue(&q1).name, dequeue(&q2).name);
                }
            }
            else if (sex == 'f') {
                if (is_empty(&q1)) {
                    printf("아직 대상자가 없습니다. ");
                    enqueue(&q2, elem);
                }
                else {
                    enqueue(&q2, elem);
                    printf("커플이 탄생했습니다! %s과 %s\n", dequeue(&q1).name, dequeue(&q2).name);
                }
            }
        }
        else if (select == 'c') {
            printf("남성 대기자 %d명: ", get_count(&q1));
            print_queue(&q1);
            printf("여성 대기자 %d명: ", get_count(&q2));
            print_queue(&q2);
        }
        else if (select == 'q')
            break;
    }
}