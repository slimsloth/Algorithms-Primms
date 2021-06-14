OBJS	= partB.o functions.o
SOURCE	= partB.cpp functions.cpp
HEADER	= header.h ngraph.hpp set_ops.hpp
OUT	= myproject
CC	 = g++
FLAGS	 = -g -c
LFLAGS	 =

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

partB.o: partB.cpp
	$(CC) $(FLAGS) partB.cpp

functions.o: functions.cpp
	$(CC) $(FLAGS) functions.cpp


clean:
	rm -f $(OBJS) $(OUT)

run: $(OUT)
	./$(OUT)
