# Makefile

RM = rm -f
CXX = g++
CXXFLAGS = -Wall -g
INCLUDE = 
LDFLAGS = -lpthread
LDPATH = 

PROGS =	client2 test_singleton_multiple_threads

.PHONY: all
all: $(PROGS)
	@echo "build OK!"

clean:
	@$(RM) $(PROGS) *.o
	@echo "clean OK!"

%.o:%.cpp
	$(CXX) -o $@ -c $< $(CXXFLAGS) $(INCLUDE)

client2: client2.o tool_tip_manager2.o
	$(CXX) -o $@ $^ $(LDFLAGS) $(LDPATH)

test_singleton_multiple_threads: test_singleton_multiple_threads.o singleton_test_thread.o tool_tip_manager2.o
	$(CXX) -o $@ $^ $(LDFLAGS) $(LDPATH)

