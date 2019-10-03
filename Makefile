SOURCES=$(wildcard *.cpp)
THREAD_SOURCES=demo_thread.cpp demo_mutex.cpp
THREAD_OBJ=$(THREAD_SOURCES:.cpp=.o)
THREAD_BIN=$(THREAD_SOURCES:.cpp=)
OBJECTS=$(SOURCES:.cpp=.o)
BINS=$(SOURCES:.cpp=)

CXXFLAGS+=--std=c++11

all: $(BINS)

$(THREAD_BIN): $(THREAD_OBJ)
	$(CXX) $(CXXFLAGS) $(patsubst %, %.o, $@) -o $@ -lpthread

clean:
	$(RM) $(OBJECTS) $(BINS)

.PHONY: clean, all
