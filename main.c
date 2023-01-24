#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void help() {
    // TODO
}

void display(int *seconds) {
    printf("%02d:%02d\n", *seconds / 60, *seconds % 60);
}

void parse_args() {
    // TODO
	//
	// --help
}

int main(int argc, char *argv[]) {
    int mins = 5;

    if (argc > 2) {
        printf("Too many args.");
        exit(-1);
    } else if (argc == 2) {
        mins = atoi(argv[1]);
    }

    int seconds = 60 * mins;

    for (int i = 0; i < seconds; ++i) {
        system("clear");
        display(&seconds);
        sleep(1);

        seconds--;
    }
}
