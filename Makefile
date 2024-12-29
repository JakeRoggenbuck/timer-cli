main.o:
	gcc -Wall -Werror -Wextra main.c -o timercli

install: main.o
	cp timercli /bin/timercli

