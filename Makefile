CFLAGS = -Wall
OBJS = func1.o myapp.o func2.o
TARGET = myapp


$(TARGET): $(OBJS)
	$(CC) -o $(TARGET) $(OBJS)


%.o:%.c
	$(CC) -c $(CFLAGS) $< -o $@

clean:
	rm -f $(TARGET) $(OBJS)


