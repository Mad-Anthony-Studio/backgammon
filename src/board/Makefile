CXX = g++ $(CXXFLAGS) $(INC) $(LIBS)
AR = ar
CXXFLAGS = -Wall
INC = -I ../include/
LIBS =
SRC = board.cc cmp_move.cc menu2.cc plr_move.cc
OBJ = $(SRC:.cc=.o)
BIN = ../lib/libboard.a
all: $(SRC) $(BIN)

debug: CXX += -DDEBUG -g
debug: DEBUG = debug
debug: $(SRC) $(BIN)

$(BIN): $(OBJ)
ifneq ($(MAKECMDGOALS),debug)
	@printf "[AR]  %-20s ... " "$(BIN)"
	@$(AR) rcs $(BIN) $(OBJ) && echo "SUCCESS" || echo "FAIL"
else
	$(AR) rcs $(BIN) $(OBJ)
endif

.cc.o:
ifneq ($(MAKECMDGOALS),debug)
	@printf "[B]   %-20s ... " "$<"
	@$(CXX) -c $< && echo "OK" || echo "FAIL"
else
	$(CXX) -c $<
endif

clean:
	rm -f *.o $(BIN) core

default: $(BIN)

