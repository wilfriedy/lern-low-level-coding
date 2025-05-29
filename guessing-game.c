/* guessing-game.c */
#include <stdio.h>

int main ()
{
   int target = 5;
   printf("Guess the number\n");

   while(1){
	int guess;
	scanf("%d", &guess);
	if(guess > target) printf("Guess a lower number\n");
	else if(guess < target ) printf("Guess higher\n");
	else{
	  printf("You guessed correctly");
	  return 0;
	}
   }
}

