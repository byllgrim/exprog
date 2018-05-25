TARG = exprog

CFLAGS = -D_POSIX_C_SOURCE=200809 -Os -Wall -Wextra -pedantic -std=c89

$(TARG): $(TARG).o
	$(CC) $(CFLAGS) -o $@ $<

.c.o:
	$(CC) $(CFLAGS) -c $<

clean:
	rm -rf $(TARG) *.o
