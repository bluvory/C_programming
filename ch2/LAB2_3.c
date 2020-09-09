# include <stdio.h>

int main(void) {
	
	int totalSeconds=200;
	int minutes;
	int seconds;

	minutes = totalSeconds / 60;

	seconds = totalSeconds % 60;

	printf("%d√ :\n%dm : %ds", totalSeconds, minutes, seconds);
}