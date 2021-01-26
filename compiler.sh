nasm -f elf64 -o test.o ft_write.s
gcc main.c test.o -o exec
./exec