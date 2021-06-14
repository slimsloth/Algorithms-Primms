OBJS	= partB.o functions.o partC.o
SOURCE	= partB.cpp functions.cpp partC.cpp
HEADER	= header.h ngraph.hpp set_ops.hpp, set_ops.hpp
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

partC.o: partC.cpp
	$(CC) $(FLAGS) partC.cpp


clean:
	rm -f $(OBJS) $(OUT)

run: $(OUT)
	./$(OUT)
