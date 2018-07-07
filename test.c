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

	return 0;
}
