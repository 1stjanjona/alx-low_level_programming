#include "main.h"
#include <elf.h>
/**
 * display_elf_header - to display elf header
 * @filename : file name
 * Return: no return
*/
void display_elf_header(const char *filename)
{
	int i = 0;
	int fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Unable to open file");
	}
	Elf64_Ehdr elf_header;

	if (read(fd, &elf_header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
	{
		dprintf(STDERR_FILENO, "Error: Unable to read ELF header");
	}
	close(fd);
	if (!is_elf_file(&elf_header))
	{
		dprintf(STRDERR_FILENO, "Error: Not an ELF file");
	}
	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%01x ", elf_header.e_ident[i]);
	}
	printf("\n");
}
/**
 * display_elf_header_info - details of elf header info
 * @elf_header: elf header
 * Return: no return
*/
void display_elf_header_info(const Elf64_Ehdr *elf_header)
{
	printf("  Class:                         ");
	switch (elf_header->e_ident[EI_CLASS])
	{
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("Unknwon\n");
	}
	printf("   Data             ");
	switch (elf_header->e_ident[EI_DATA])
	{
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("Unknown\n");
	}
	printf("   Version:         %d (current)\n", elf_header->e_ident[EI_VERSION]);
	printf("   OS/ABI:          %d\n", elf_header->e_ident[EI_OSABI]);
	printf("   ABI Version:     %d\n", elf_header->e_ident[EI_ABIVERSION]);
	printf("   Type:            %d\n", elf_header->e_type);
}
/**
 * is_elf_file - check if elf is a file
 * @elf_header: header file
 * Return: return (0)
*/
int is_elf_file(const Elf64_Ehdr *elf_header)
{
	switch (elf_header->e_ident[EI_MAG0])
	{
		case ELFMAG0:
			switch (elf_header->e_ident[EI_MAG1])
			{
				case ELFMAG1:
					switch (elf_header->e_ident[EI_MAG2])
					{
						case ELFMAG2:
							if (elf_header->e_ident[EI_MAG3] == ELFMAG3)
							{
								return (1);
							}
							break;
					}
					break;
			}
			break;
	}
	return (0);
}
/**
 * main - main function for elf
 * @argc: argument count
 * @argv: argument vectour
 * Return: return (2)
*/
int main(int argc, char *argv)
{
	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename"), exit(98);
	}
	display_elf_header(argv[1]);
	return (0);
}
