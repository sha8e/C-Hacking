/* stack2-stdin.c                               *
 * specially crafted to feed your brain by gera */

#include <stdio.h>

int main() {
	int cookie;
	char buf[12];

	printf("buf: %08x cookie: %08x\n", &buf, &cookie);
	gets(buf);
	// DCBA == 0x41424344
	if (cookie == 0x41424344)
  		printf("you win!\n");
}
