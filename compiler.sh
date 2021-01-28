nasm -f elf64 -o strlen.o ft_strlen.s
nasm -f elf64 -o write.o ft_write.s
nasm -f elf64 -o strcpy.o ft_strcpy.s

clang main.c write.o strlen.o strcpy.o -o exec
./exec