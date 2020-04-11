CC = gcc
CFlags = -W -Wall
TARGET = shop
DTARGET = shop_debug
OBJECTS = market.c product.o manager.o 

$(TARGET) : $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^

$(DTARGET) : $(OBJECTS)
	$(CC) $(CFLAGS) -DDEBUG -o $@ $^

clean : 
	rm *.o *.txt
	rm $(TARGET) $(DTARGET)
