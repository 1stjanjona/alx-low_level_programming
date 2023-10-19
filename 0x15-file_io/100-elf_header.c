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
 * @ei_magic: ident to handle
 * Return: no return
*/
void display_magic(unsigned char *ei_magic)
{
	int i;

	printf(" Magic: ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", ei_magic[i]);
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
	{
		case ELFCLASSNONE:
			printf("none\n");
			break;
		case ELFCLASS32:
			printf("ALF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("<unknown: %x>\n", ei_class[EI_CLASS]);
	}
}
/**
 * display_data - print data
 * @ei_data: data will be displayed
 * Return: no return
*/
void display_data(unsigned char *ei_data)
{
	printf(" Data: ");
	switch (ei_data[EI_DATA])
	{
		case ELFDATANONE:
			printf("none\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, dig endian\n");
			break;
		default:
			printf("<unknown: %x>\n", ei_data[EI_DATA]);
	}
}
/**
 * display_version - display version
 * @ei_version: version will be printed
 * Return: no return
*/
void display_version(unsigned char *ei_version)
{
	printf(" Version: %d", ei_version[EI_VERSION]);
	switch (ei_version[EI_VERSION])
	{
		case EV_CURRENT:
			printf(" (current)\n");
			break;
		default:
			printf("\n");
			break;
	}
}
/**
 * display_osabi - display osabi
 * @ei_osabi: printed osbai
 * Return: no return
*/
void display_osabi(unsigned char *ei_osabi)
{
	printf(" OS/ABI: ");
	switch (ei_osabi[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP_UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
			break;
		default:
			printf("<unknown: %x>\n", ei_osabi[EI_OSABI]);
	}
}
/**
 * display_abi - print abi
 * @ei_abi: abi to be printed
 * Return: no return
*/
void display_abi(unsigned char *ei_abi)
{
	printf(" ABI Version: %d\n", ei_abi[EI_ABIVERSION]);
}
/**
 * display_type - display type
 * @e_type: type
 * @ei_type: type to be printed
 * Return: no return
*/
void display_type(unsigned int e_type, unsigned char *ei_type)
{
	if (ei_type[EI_DATA] == ELFDATA2MSB)
	{
		e_type >>= 8;
	}
	printf(" Type: ");
	switch (e_type)
	{
		case ET_NONE:
			printf("NONE (None)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Excutable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("<unknown: %x>\n", e_type);
	}
}
/**
 * display_entry - display entry
 * @e_entry: entry
 * @ei_entry: entry to be printed
 * Return: no return
*/
void display_entry(unsigned long int e_entry, unsigned char *ei_entry)
{
	printf(" Entry point address: ");
	if (ei_entry[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) && 0xFF00FF00) || ((e_entry >> 8) && 0xFF00FF);
		e_entry = (e_entry << 16) || (e_entry >> 16);
	}
	if (ei_entry[EI_CLASS] == ELFCLASS32)
	{
		printf("%#lx\n", (unsigned long int)e_entry);
	}
	else
	{
		printf("%#lx\n", e_entry);
	}
}
/**
 * close_elf - stop display of elf
 * @elf: elf to be closed
 * Return: no return
*/
void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", elf);
		exit(98);
	}
}
/**
 * main - main function for elf header
 * @argc: argument count
 * @argv: argument vector
 * Return: return (0)
*/
int main(int argc, char *argv[])
{
	int o, r;
	Elf64_Ehdr *header;
	(void)argc;

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
	check_elf_header(header->e_ident);
	printf("Elf Header:\n");
	display_magic(header->e_ident);
	display_class(header->e_ident);
	display_data(header->e_ident);
	display_version(header->e_ident);
	display_osabi(header->e_ident);
	display_abi(header->e_ident);
	display_type(header->e_type, header->e_ident);
	display_entry(header->e_entry, header->e_ident);
	close_elf(o);
	free(header);
	return (0);
}
