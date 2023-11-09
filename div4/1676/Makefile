CC := g++
CFLAGS := -Wall -std=c++20
TARGETS := main a b c d e f g1 g2 h1 h2

$(TARGETS): %: %.cpp
	$(CC) $(CFLAGS) -o $@ $<

.PHONY: all clean

all: $(TARGETS)


# Clean rule
clean:
	rm -f $(TARGETS)
