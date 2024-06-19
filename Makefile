NASM = nasm
NASMFLAGS = -f elf64
AR = ar
ARFLAGS = rcs
LIB = libasm.a
OBJ_DIR = obj/
SRC_DIR = src/
SRC = 	ft_strlen.s \
		ft_strcpy.s \
		ft_strcmp.s \
		ft_write.s \
		ft_read.s \
		ft_strdup.s \
		ft_list_size.s
OBJ = $(SRC:%.s=$(OBJ_DIR)/%.o)

all: $(LIB)

$(LIB): $(OBJ)
	$(AR) $(ARFLAGS) $@ $^

$(OBJ_DIR)%.o: $(SRC_DIR)%.s
	@mkdir -p $(OBJ_DIR)
	$(NASM) $(NASMFLAGS) $< -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm $(LIB)

re: fclean all

.PHONY: all clean fclean rebuild
