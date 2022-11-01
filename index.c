#include "fanction.h"

int main(void) {
	int ans;
	int limit = 0;
	int choice;
	int difi;
	long sleep_time;
	srand((unsigned int)time(NULL));
	
	printf("\n\n＊＊＊＊＊＊＊＊＊＊記憶力トレーニング＊＊＊＊＊＊＊＊＊＊＊\n");
	printf("\nルール:一瞬出てくる数字を記憶して入力してください。\n");	
	printf("\n難易度を選択(1:初級, 2:中級, 3:上級)=>"); scanf("%d", &difi);	
	if (difi > 3 || difi < 1) {
		printf("不正な数値です\n");
	}else {	
	  printf("\n\n＊＊＊＊＊＊＊＊＊＊＊＊START!!＊＊＊＊＊＊＊＊＊＊＊＊＊＊\n");
	  while (1) {
		if (limit == 5) {
			printf("\n");
			break;
		}

		difficulty(difi, &ans, &sleep_time);		

		printf("\n\n%8d        ", ans);
		fflush(stdout);
		sleep(sleep_time);

		printf("\r            ");
		fflush(stdout);
		
		printf("\n\n現れた数字を入力:"); scanf("%d", &choice);

		limit += tf_judge(choice, ans, sleep_time);	
	  }
	}

return 0;
}


