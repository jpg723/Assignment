#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	int num[5];
	int i = 0, key, index = 0;

	printf("Enter 5개의 정수: ");
	
	for (i = 0; i < 5; i++) { // 5개 정수 입력
		scanf("%d", &num[i]);
	}

	printf("Enter a key: "); // key 입력
	scanf("%d", &key);

	for (i = 0; i < 5; i++) {

		if (num[i] == key) { // num과 key가 같다면
			index = i + 1; // num의 위치 저장
			break; // key가 여러 개일 경우 앞에 있는 위치 출력을 위해 같다면 바로 종료
		}
	}

	if (index == 0)
		printf("없다\n");
	
	else
		printf("%d번째에 있다\n", index);

	
}