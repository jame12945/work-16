#include<iostream>
#include<math.h>
int squareroot();
int a, i,j;
int squareroot() {
	scanf_s("%d", &a);//4= 2*2  8=2*2* 25=5*5
	if (a >= 0) {
		for (i = 1; i <= 1; i++) {
			for (j = 1; j * j <= a; j++) {
				if (j == sqrt(a)) {
					printf("the square root of this number is %d", j );
				}
		
			}
			
		}
		if (j - 1 != sqrt(a)) {
			printf("this number cannot square root");
		}
	}
	else if(a<0){
		printf("this number is neggative so that it cannot solve");
	}
	return 0;
}


int main() {
	squareroot();
}