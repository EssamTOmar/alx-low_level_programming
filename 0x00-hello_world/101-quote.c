#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * write: Print some words i write for it
 * Return: Always 0 (Success)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19", 61);
	return (1);
}
