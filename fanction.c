#include "fanction.h"



//1000で1秒待つ関数
void sleep(unsigned long x) {
	clock_t start = clock(), end;

	while (1) {
		if ((end = clock()) == (clock_t)-1) {
			printf("clock()のエラー\n");
			break;
		}
		if (1000.000 * (end - start) / CLOCKS_PER_SEC > x) {
			break;
		}
	}
}

//正解か不正解かの判定
int tf_judge(int choice, int ans, long s) {
	if (choice == ans) {
		printf("\n正解です。");
		fflush(stdout);
		sleep(s);
		return 1;
	}else {
		printf("\n不正解です。");
		fflush(stdout);
		sleep(s);
		return 0;
	}	
}

void difficulty(int difi, int *ans, long *s) {
	switch (difi) {
		case 1:
			*ans = rand() %999 +100;
			*s = 500;
			break;
		case 2:
			*ans = rand() %9999 +1000;
			*s = 500;
			break;
		case 3:
			*ans = rand() %99999 +10000;
			*s = 450;
			break;
	}
}

