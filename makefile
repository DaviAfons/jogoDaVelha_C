CC = gcc

CFLAGS = -Wall -Wextra -g -I./include

TARGET = jogodavelha

SRC_DIR = src

SRCS = $(SRC_DIR)/main.c $(SRC_DIR)/visual.c $(SRC_DIR)/tabuleiro.c $(SRC_DIR)/regras.c

OBJS = $(SRCS:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)
	@echo "Compilacao concluida!"

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)
	@echo "Limpeza concluida."