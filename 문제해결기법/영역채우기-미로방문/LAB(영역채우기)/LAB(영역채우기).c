#define WIDTH 10
#define HEIGHT 10
#include<stdio.h>
int screen[WIDTH][HEIGHT] = {
-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
-1,-1, 0, 0,-1,-1,-1, 0,-1,-1,
-1,-1,-1, 0, 0, 0, 0, 0,-1,-1,
-1,-1,-1, 0,-1,-1,-1,-1,-1,-1,
-1,-1,-1, 0, 0, 0, 0, 0,-1,-1,
-1,-1,-1, 0,-1, 0,-1,-1,-1,-1,
-1,-1,-1, 0,-1, 0,-1,-1,-1,-1,
-1,-1,-1, 0,-1, 0, 0, 0,-1,-1,
-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
};
void flood_fill(int x, int y)
{
	int num;
	if (screen[x][y] == 0)
	{
		screen[x][y] = 9;
		flood_fill(x, y + 1); // 3시 방향
		flood_fill(x + 1, y); // 6시 방향
		flood_fill(x, y - 1); // 9시 방향
		flood_fill(x - 1, y); // 12시 방향
	}
}

void draw_screen() {

	int i, j;

	for (i = 0; i < HEIGHT; i++) {
		for (j = 0; j < WIDTH; j++) {
			printf("%2d", screen[i][j]);
		}
		printf("\n");
	}
}

int main(void) {

	draw_screen();
	printf("\n");

	flood_fill(4, 3);
	draw_screen();
}