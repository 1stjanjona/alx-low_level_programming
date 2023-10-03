#include "main.h"
#include <string.h>
#include <fcntl.h>
#include <elf.h>
/**
 *  check_elf_header - to display elf header
 * @ei_ident: ident to handle
 * Return: no return
*/
void check_elf_header(unsigned char *ei_ident)
{
	int i;

	for (i = 0; i < EI_NIDENT; i++)
	{
		if (ei_ident[i] != ELFMAG[i])
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);		
		}
	}
}
/**
 * display_magic - display magic
 * @ei_edent: ident to handle
 * Return: no return
*/
void display_magic(unsigned char *ei_ident)
{
	int i;

	printf(" Magic: ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", ei_ident[i]);
		if (i == EI_NIDENT - 1)
		{
			printf("\n");
		}
		else
		{
			printf(" ");
		}
	}
}
/**
 * display_class - display class
 * @ei_class: ident to handle
 * Return: no return
*/
void display_class(unsigned char *ei_class)
{
	printf(" Class: ");
	switch (ei_class[EI_CLASS])
    switch (ei_class)
    {
    case ELFCLASS32:
        printf("Class: 32-bit\n");
        break;
    case ELFCLASS64:
        printf("Class: 64-bit\n");
        break;
    default:
        printf("Class: unknown\n");
        break;
    }
}
/**
 * main - main function for elf header
 * @argc: argument count
 * @argv: argument vector
 * Return: return (0)
*/
int main(int __attribute__((__unused)) argc, char *argv[])
{
	int o, r;
	Elf64_Ehdr *header;

	o = open(argv[1], O_RDONLY);
	if (o == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		close_elf(o);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	r = read(o, header, sizeof(Elf64_Ehdr));
	if (r == -1)
	{
		free(header);
		close_elf(o);
		dprintf(STDERR_FILENO, "Error: '%s': No such file\n", argv[1]);
		exit(98);
	}
	check_elf_header(header->ei_ident);
	printf("Elf Header:\n");
	display_magic(header->ei_ident);
	display_class(header->ei_ident);
	display_data(header->ei_ident);
	display_vesrion(header->ei_ident);
	display_osabi(header->ei_ident);
	display_abi(header->ei_ident);
	display_type(header->e_type, header->e_ident);
	display_entry(header->e_entry, header->ei_ident);
	close_elf(o);
	free(header);
	return (0);
}
