CXX = g++ $(OPTS) $(INC) $(LIBS)
AR = ar
INC = -I ../include/
CFLAGS =
LIBS =
OPTS = -Wall
OBJ = treetest.o treeOps.o searchTree.o makeTree.o showTree.o
BIN = bintree
all: bintree

debug: CXX += -DDEBUG -g
debug: DEBUG = debug
debug: $(SRC) $(BIN)

bintree: $(OBJ)
	$(CXX) $(CFLAGS) -o $(BIN) $(OBJ) $(LIBS)

clean:
	rm -f *.o $(BIN) core

default: $(BIN)
