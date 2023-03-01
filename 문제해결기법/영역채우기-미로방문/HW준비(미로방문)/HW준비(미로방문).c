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
int flood_fill_counter(int x, int y, int count)
{

	if (screen[x][y] == 0 && screen[x][y] != -1)
	{
		screen[x][y] = ++count;
		count = flood_fill_counter(x, y + 1, count); // 3시 방향
		count = flood_fill_counter(x + 1, y, count); // 6시 방향
		count = flood_fill_counter(x, y - 1, count); // 9시 방향
		count = flood_fill_counter(x - 1, y, count); // 12시 방향

		return count;
	}

	return count;
}

void draw_screen() {

	int i, j;

	for (i = 0; i < HEIGHT; i++) {
		for (j = 0; j < WIDTH; j++) {
			printf("%3d", screen[i][j]);
		}
		printf("\n");
	}
}

int main(void) {

	draw_screen();
	printf("\n");

	flood_fill_counter(4, 3, 0);
	draw_screen();
}