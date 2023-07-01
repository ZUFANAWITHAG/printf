#include "main.h"
#include <stdio.h>
void print_buffer(char buffer[], int *buff_ind);

/**
 * _printf - Printf function
 * @format: format.
 * Return: Printed chars.
 */

int _printf(const char *format, ...)

{
	@@ -28,18 +17,12 @@ va_list list;

	char buffer[BUFF_SIZE];



	if (format == NULL)

	return (-1);



	va_start(list, format);



	for (i = 0; format && format[i] != '\0'; i++)

{
	@@ -90,30 +73,26 @@ printed_chars += printed;

}
	print_buffer(buffer, &buff_ind);

 


	va_end(list);

 


	return (printed_chars);

}

/**
 * print_buffer - Prints the contents of the buffer if it exist
 * @buffer: Array of chars
 * @buff_ind: Index at which to add next char, represents the length.
 */
void print_buffer(char buffer[], int *buff_ind)
	@@ -124,8 +103,8 @@ if (*buff_ind > 0)

	write(1, &buffer[0], *buff_ind);

	*buff_ind = 0;
}
}
