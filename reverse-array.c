#include <stdio.h>

//reversal function felclaration 
void reverses();
int n[12];
int i, j, k;


int main() {

	reverses(n);

	return 0;

}

	// function definition 
	void reverses(int n[12]) {

	// writes array
	for (int i = 0; i <= 12; ++i)
	{
		n[i] = i;
		// output each array element's value
		// printf("Element[%d] = %d\n", i, n[i] );
	}


	for (int j = 0; j < 12/2; j++ ) 
	{
		int other = 12 - j - 1;

		int temp = n[j];
		printf("%d\n", n[j]);
		n[j] = n[other];
		// n[other] = temp;
		
	}



	}


//other:
// 11, 10, 9, 8, 7, 6
//temp:
// 0, 1, 2, 3, 4, 5
//n[j]:
// 0, 1, 2, 3, 4, 5
//n[other]
// 0, 1, 2, 2, 1, 0