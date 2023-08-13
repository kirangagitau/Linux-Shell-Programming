#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

signed int pid(void);

/**
 * main - entry point
 *
 * Return: exit status of porgram. Always a Success
 **/

int main(void)
{
	printf("PROGRAM TO SHOW CURRENT PID\n");
	printf("You PID is: %u\n", pid());
	return (EXIT_SUCCESS);
}

/**
 * pid - function returning the pid of the process
 *
 * Return: the pid of process from system call getpid().
 **/

signed int pid(void)
{
	return (getpid());
}
