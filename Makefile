SOURCES=$(wildcard *.cpp)
OBJECTS=$(SOURCES:.cpp=.o)
BINS=$(SOURCES:.cpp=)

CXXFLAGS+=--std=c++11


all: $(BINS)

thread: thread.o
	$(CXX) $^ -o $@ -lpthread

clean:
	$(RM) $(OBJECTS) $(BINS)

.PHONY: clean, all
