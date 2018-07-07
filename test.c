#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){

	int s,t,sum;

	srand(time(NULL));

	s = rand() % 6 + 1;
	t = rand() % 6 + 1;
	sum = s+t;


	printf("‚³‚¢‚±‚ë‚Ìo–Ú = %d \n", sum);

	if (sum > 7) {
		printf("You won\n");
	}
	else {
		printf("You lose\n");
	}

	return 0;
}
