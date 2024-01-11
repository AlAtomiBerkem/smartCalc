STDFLAGS=-std=c11 -Wall -Werror -Wextra 
TEST_CFLAGS= -g $(STDFLAGS)
GCOV_FLAGS=-fprofile-arcs -ftest-coverage
LINUX_FLAGS=-lpthread -lcheck -pthread -lrt -lm
LIBS=-lcheck
VALGRIND_FLAGS=--trace-children=yes --track-fds=yes --track-origins=yes --leak-check=full --show-leak-kinds=all --verbose

TARGET=smartcalc.a
SRC=$(wildcard smartcalc.c)
OBJ=$(patsubst %.c,%.o, ${SRC})

NEW_TEST_SRC=$(wildcard ./tests/*.c)
NEW_TEST_OBJ=$(patsubst ./tests/%.c, %.o, $(NEW_TEST_SRC))

OS := $(shell uname -s)
USERNAME=$(shell whoami)

ifeq ($(OS),Linux)
  OPEN_CMD = xdg-open
endif
ifeq ($(OS),Darwin)
	OPEN_CMD = open
endif

all: clean $(TARGET) test

$(TARGET): ${SRC}
	gcc -c $(STDFLAGS) $(SRC)
	ar rcs  $@ $(OBJ)
	rm -rf *.o

test: $(TARGET) 
ifeq ($(OS), Darwin)
	${CC} $(STDFLAGS) ${NEW_TEST_SRC} $(TARGET) -o lib_test $(LIBS)
else
	${CC} $(STDFLAGS) ${NEW_TEST_SRC} $(TARGET) -o lib_test $(LIBS) $(LINUX_FLAGS)
endif
	./lib_test

gcov_report: clean_test
ifeq ($(OS), Darwin)
	gcc $(STDFLAGS) $(GCOV_FLAGS) ${NEW_TEST_SRC} ${SRC} -o test $(LIBS)
else
	gcc $(STDFLAGS) $(GCOV_FLAGS) ${NEW_TEST_SRC} ${SRC} -o test $(LIBS) $(LINUX_FLAGS)
endif
	./test
	lcov -t "stest" -o s21_test.info -c -d .
	genhtml -o report s21_test.info
	$(OPEN_CMD) ./report/index.html

style:
	clang-format -style=Google -n *.c *.h */*.c */*.h

toclang:
	clang-format --style=Google -i *.c *.h */*.c */*.h

leaks:
	CK_FORK=no leaks --atExit -- ./lib_test

brew:
	cd ~
	curl -fsSL https://rawgit.com/kube/42homebrew/master/install.sh | zsh

lcov:
ifeq ($(OS),Linux)
	sudo apt install lcov
endif
ifeq ($(OS),Darwin)
	brew install lcov
endif

install:
	mkdir ../build
	cd ../untitled && qmake && make && make clean && mv untitled.app ../build/SmartCalc.app && rm -rf untitled.app

uninstall:
	rm -rf ../build
open:
	cd ../build && open SmartCalc.app

dist:
	rm -rf ../Archive_SmartCalc/
	mkdir ../Archive_SmartCalc/
	mv ../build/SmartCalc.app ../Archive_SmartCalc/
	tar -cvzf ../Archive_SmartCalc.tgz ../Archive_SmartCalc/
	rm -rf ../Archive_SmartCalc/

dvi: 
	open ../description.md

clean_obj:
	rm -rf *.o

clean_lib: 
	rm -rf *.a

clean_test:
	rm -rf *.gcda
	rm -rf *.gcno
	rm -rf *.info
	rm -rf test
	rm -rf report

clean: clean_lib clean_lib clean_test clean_obj
	rm -rf lib_test
	rm -rf unit_test
	rm -rf RESULT_VALGRIND.txt

.PHONY: all clean check lcov

tt:
	gcc my_main.c smartcalc.c | ./a.out