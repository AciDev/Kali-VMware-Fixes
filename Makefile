CC=gcc
CFLAGS=-I.

suid-vm-tools: suid-vm-tools.c
	$(CC) -o suid-vm-tools suid-vm-tools.c