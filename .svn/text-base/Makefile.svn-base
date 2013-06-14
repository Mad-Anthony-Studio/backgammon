CXX = g++ $(CFLAGS) $(OPTS) $(INC)
INC = -I include/
CFLAGS = -Wall 
LIBS = -lncurses -L./lib -lnode
OPTS =
DEBUG = 
OBJ = main.o menu.o
LIBRARIES = libnode liblnode libtnode liblist libstack libboard libdice libqueue
BIN = backgammon 

default: help

debug: CXX += -DDEBUG -g
debug: DEBUG = debug
debug: $(BIN)

backgammon: $(LIBRARIES) $(OBJ)
	@echo "******************************************"
	@echo "*** Building $(BIN)"
	@echo "******************************************"
	$(CXX) $(CFLAGS) -o $(BIN) $(OBJ) $(LIBS)
	@echo

libs-debug: CXX += -DDEBUG -g
libs-debug: DEBUG = debug
libs-debug: libs

libs: libnode liblnode libtnode liblist libstack libboard libdice libqueue

libnode-debug: CXX += -DDEBUG -g
libnode-debug: DEBUG = debug
libnode-debug: libnode

libnode:
	@echo "***************************************"
	@echo "*** Building library: lib/libnode.a ***"
	@echo "***************************************"
	@cd node ; make $(DEBUG)
	@echo

liblnode-debug: CXX += -DDEBUG -g
liblnode-debug: DEBUG = debug
liblnode-debug: liblnode

liblnode:
	@echo "****************************************"
	@echo "*** Building library: lib/liblnode.a ***"
	@echo "****************************************"
	@cd node/lnode ; make $(DEBUG)
	@echo

libtnode-debug: CXX += -DDEBUG -g
libtnode-debug: DEBUG = debug
libtnode-debug: libtnode

libtnode:
	@echo "****************************************"
	@echo "*** Building library: lib/libtnode.a ***"
	@echo "****************************************"
	@cd node/tnode ; make $(DEBUG)
	@echo

liblist-debug: CXX += -DDEBUG -g
liblist-debug: DEBUG = debug
liblist-debug: liblist

liblist:
	@echo "***************************************"
	@echo "*** Building library: lib/liblist.a ***"
	@echo "***************************************"
	@cd list ; make $(DEBUG)
	@echo

libstack-debug: CXX += -DDEBUG -g
libstack-debug: DEBUG = debug
libstack-debug: libstack

libstack:
	@echo "****************************************"
	@echo "*** Building library: lib/libstack.a ***"
	@echo "****************************************"
	@cd stack ; make $(DEBUG)
	@echo

libboard-debug: CXX += -DDEBUG -g
libboard-debug: DEBUG = debug
libboard-debug: libboard

libboard:
	@echo "****************************************"
	@echo "*** Building library: lib/libboard.a ***"
	@echo "****************************************"
	@cd board ; make $(DEBUG)
	@echo

libdice-debug: CXX += -DDEBUG -g
libdice-debug: DEBUG = debug
libdice-debug: libdice

libdice:
	@echo "****************************************"
	@echo "*** Building library: lib/libdice.a  ***"
	@echo "****************************************"
	@cd dice ; make $(DEBUG)
	@echo

libqueue-debug: CXX += -DDEBUG -g
libqueue-debug: DEBUG = debug
libqueue-debug: libqueue

libqueue:
	@echo "****************************************"
	@echo "*** Building library: lib/libqueue.a ***"
	@echo "****************************************"
	@cd queue ; make $(DEBUG)
	@echo

test-debug: CXX += -DDEBUG -g
test-debug: DEBUG = debug
test-debug: test

test:
	@echo "**********************************"
	@echo "*** Building test applications ***"
	@echo "**********************************"
	@cd testing ; make $(DEBUG) all
	@echo

clean:
	rm -f *.o $(BIN) core
	@cd ./node; make clean
	@cd ./node/lnode; make clean
	@cd ./node/tnode; make clean
	@cd ./list; make clean
	@cd ./stack; make clean
	@cd ./testing; make clean
	@cd ./board; make clean
	@cd ./dice; make clean
	@cd ./queue; make clean

libs-help:
	@echo
	@echo "*************************[ Backgammon Project ]*************************"
	@echo "** CSCS2320 Data Structures                        Fall 2010 Semester **"
	@echo "** APIs/Documentation:         http://lab46.corning-cc.edu/notes/data **"
	@echo "**                                                                    **"
	@echo "** This is the Makefile to handle many of the clerical tasks of the   **"
	@echo "** code. Please use one of the available options listed:              **"
	@echo "**                                                                    **"
	@echo "** make libs                - build all data structure libraries      **"
	@echo "** make libs-debug          - build all libraries with debug symbols  **"
	@echo "** make libs-help           - this information                        **"
	@echo "**                                                                    **"
	@echo "** make libnode             - build node class library (libnode.a)    **"
	@echo "** make libnode-debug       - build node library with debug symbols   **"
	@echo "** make liblnode            - build lnode class library (liblnode.a)  **"
	@echo "** make liblnode-debug      - build lnode library with debug symbols  **"
	@echo "** make libtnode            - build tnode class library (libtnode.a)  **"
	@echo "** make libtnode-debug      - build tnode library with debug symbols  **"
	@echo "** make liblist             - build list class library (liblist.a)    **"
	@echo "** make liblist-debug       - build list library with debug symbols   **"
	@echo "** make libstack            - build stack class library (libstack.a)  **"
	@echo "** make libstack-debug      - build stack library with debug symbols  **"
	@echo "** make libboard		   - build board class library (libboard.a)  **"
	@echo "** make libboard-debug      - build board library with debug symbols  **"
	@echo "** make libdice             - build dice class library (libdice.a)    **"
	@echo "** make libdice-debug       - build dice library with debug symbols   **"
	@echo "** make libqueue	           - build queue class library (libqueue.a)  **"
	@echo "** make libqueue-debug      - build queue library with debug symbols  **"
	@echo "**                                                                    **"
	@echo "************************************************************************"
	@echo

help:
	@echo
	@echo "*************************[ Backgammon Project ]*************************"
	@echo "** CSCS2320 Data Structures                        Fall 2010 Semester **"
	@echo "** APIs/Documentation:         http://lab46.corning-cc.edu/notes/data **"
	@echo "**                                                                    **"
	@echo "** This is the Makefile to handle many of the clerical tasks of the   **"
	@echo "** code. Please use one of the available options listed:              **"
	@echo "**                                                                    **"
	@echo "** make backgammon          - build backgammon binary                 **"
	@echo "** make debug               - build backgammon binary with debugging  **"
	@echo "** make test                - build data structure class test apps    **"
	@echo "** make test-debug          - build test apps with debugging symbols  **"
	@echo "** make libs                - build all data structure libraries      **"
	@echo "** make libs-debug          - build all libraries with debug symbols  **"
	@echo "** make libs-help           - information on specific library builds  **"
	@echo "**                                                                    **"
	@echo "** make clean               - clean; remove all objects/compiled code **"
	@echo "** make help                - this information                        **"
	@echo "************************************************************************"
	@echo
