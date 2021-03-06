CXX = g++ $(CXXFLAGS) $(INC)
CXXFLAGS = -Wall -static
LIBS = -L../lib/
INC = -I../include/
ListBIN = listtest
ListOBJ = listtest.o
NodeBIN = lnodetest
NodeOBJ = lnodetest.o
StackBIN = stacktest
StackOBJ = stacktest.o
TreeOBJ = treetest
TreeBIN = treetest.o
default: help

all: $(NodeBIN) $(ListBIN) $(StackBIN)

debug: CXX += -g -DDEBUG
debug: DEBUG = debug
debug: all

stacktest-debug: CXX += -g -DDEBUG
stacktest-debug: DEBUG = debug
stacktest-debug: stacktest

stacktest: LIBS += -lstack -llist -llnode -lnode
stacktest: ../lib/libstack.a ../lib/liblist.a ../lib/liblnode.a ../lib/libnode.a $(StackOBJ)
	@echo "***"
	@echo "*** Building stacktest"
	@echo "***"
	$(CXX) -o $(StackBIN) $(StackOBJ) $(LIBS)
	@echo

listtest: LIBS += -llist -llnode -lnode
listtest: ../lib/liblist.a ../lib/liblnode.a ../lib/libnode.a $(ListOBJ)
	@echo "***"
	@echo "*** Building listtest"
	@echo "***"
	$(CXX) -o $(ListBIN) $(ListOBJ) $(LIBS)
	@echo

lnodetest: LIBS += -llnode -lnode
lnodetest: ../lib/liblnode.a ../lib/libnode.a $(NodeOBJ)
	@echo "***"
	@echo "*** Building lnodetest"
	@echo "***"
	$(CXX) -o $(NodeBIN) $(NodeOBJ) $(LIBS)
	@echo

../lib/libstack.a:
	@echo "Building prerequisite libstack.a ... "
	@cd ../stack; make
	@echo "Completed build of libstack.a"

../lib/liblist.a:
	@echo "Building prerequisite liblist.a ... "
	@cd ../list; make
	@echo "Completed build of liblist.a"
	@echo

../lib/liblnode.a:
	@echo "Building prerequisite liblnode.a ... "
	@cd ../node/lnode; make
	@echo "Completed build of liblnode.a"
	@echo

../lib/libnode.a:
	@echo "Building prerequisite libnode.a ... "
	@cd ../node; make
	@echo "Completed build of libnode.a"
	@echo

clean:
	rm -f *.o $(NodeBIN) $(ListBIN) $(StackBIN) core

help:
	@echo
	@echo "*************************[ Backgammon Project ]*************************"
	@echo "** CSCS2320 Data Structures                        Fall 2010 Semester **"
	@echo "** APIs/Documentation:         http://lab46.corning-cc.edu/notes/data **"
	@echo "**                                                                    **"
	@echo "** This is the Makefile to handle many of the clerical tasks of the   **"
	@echo "** code. Please use one of the available options listed:              **"
	@echo "**                                                                    **"
	@echo "** make all                 - build all test applications             **"
	@echo "** make debug               - build all test applications (w/debug)   **"
	@echo "** make lnodetest           - build LNode test application            **"
	@echo "** make lnodetest-debug     - build LNode test application (w/debug)  **"
	@echo "** make listtest            - build List test application             **"
	@echo "** make listtest-debug      - build List test application (w/debug)   **"
	@echo "** make stacktest           - build Stack test application            **"
	@echo "** make stacktest-debug     - build Stack test application (w/debug)  **"
	@echo "**                                                                    **"
	@echo "** make clean               - clean; remove all objects/compiled code **"
	@echo "** make help                - this information                        **"
	@echo "**                                                                    **"
	@echo "************************************************************************"
	@echo
