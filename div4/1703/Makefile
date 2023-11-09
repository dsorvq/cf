CC := g++
CFLAGS := -Wall -std=c++20 -fsanitize=address -fno-omit-frame-pointer
TARGETS := main a b c d e f g g1 g2 h h1 h2

$(TARGETS): %: %.cpp
	$(CC) $(CFLAGS) -o $@ $<

.PHONY: all clean

all: $(TARGETS)

clean:
	rm -f $(TARGETS)
