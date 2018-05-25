TARG = exprog

CFLAGS = -Os -Wall -Wextra -pedantic -std=c89

$(TARG): $(TARG).o
	$(CC) $(CFLAGS) -o $@ $<

.c.o:
	$(CC) $(CFLAGS) -c $<

clean:
	rm -rf $(TARG) *.o
