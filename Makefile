TARG = exprog

CFLAGS = -Os -Wall -Wextra -pedantic -std=c89

$(TARG): $(TARG).o
	$(CC) $(CFLAGS) -o $@ $<

.c.o:
	$(CC) -c $<

clean:
	rm -rf $(TARG) *.o
