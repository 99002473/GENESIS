SRC = src/addition.c\
src/subtract.c\
src/multiplication.c\
src/division.c\
src/average.c\
src/power.c\
src/percent.c\
src/factorial.c\
src/root.c\
src/log.c\
src/cos.c\
src/sin.c\
src/tan.c\
src/sec.c\
src/cosec.c\
src/cot.c\
main.c

INC= -Iinc

PROJECT_NAME = calc.exe

$(PROJECT_NAME): $(SRC)
	gcc $(SRC) $(INC)  -o $(PROJECT_NAME)

run:$(PROJECT_NAME)
	./${PROJECT_NAME}