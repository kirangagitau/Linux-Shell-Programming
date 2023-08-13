#include<stdio.h>
#include<stdlib.h>

void loggedin_users();

/**
 * main - entry point of program
 *
 * Return: Always a success
 **/
int main(void)
{
	printf("****************** AWESOMENESS ***************\n");
	loggedin_users();
	return (EXIT_SUCCESS);
}

/**
 * loggedin_users - shows the loggen in users
 *
 **/
void loggedin_users(void)
{
	printf("******* LOGGED IN USERS ARE: - ******\n\n\n");
	system("who -uH");
	putchar('\n');
}
