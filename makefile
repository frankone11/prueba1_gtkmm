

.PHONY = all clear run

CXX:=g++
COMPILERFLAGS:=`pkg-config gtkmm-4.0 --cflags` -std=c++17 -Wall
LINKERFLAGS:=`pkg-config gtkmm-4.0 --libs` -no-pie

BIN:=prueba1
SRCS:=$(wildcard *.cpp)
OBJS:=$(SRCS:%.cpp=%.o)

all: ${BIN}

${BIN}: ${OBJS}
	${CXX} ${LINKERFLAGS} ${OBJS} -o $@

%.o:%.cpp
	${CXX} -c $< ${COMPILERFLAGS}

clean:
	@echo "Cleaning..."
	rm -rf *.o ${BIN}

run:
	@echo "Running application."
	./${BIN}