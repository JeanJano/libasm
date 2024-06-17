NASM = nasm
NASMFLAGS = -f elf64
AR = ar
ARFLAGS = rcs
LIB = libasm.a
OBJ = ft_strlen.o ft_strcpy.o ft_strcmp.o ft_write.o ft_read.o ft_strdup.o

all: $(LIB)

$(LIB): $(OBJ)
	$(AR) $(ARFLAGS) $@ $^

%.o: %.s
	$(NASM) $(NASMFLAGS) $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm $(LIB)

re: fclean all

.PHONY: all clean fclean rebuild
