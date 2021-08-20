PROJ_NAME = Digital
TEST_PROJ_NAME = Test_$(PROJ_NAME)


SRC = src/decoder.c\
src/encoder.c 

hos_SRC = d_main.c

TEST_SRC = test/d_main.c\
unity/unity.c\
main.c

INC_H = inc
INC_T = unity
INC_TE=test

ifdef OS
   RM = del 
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif

.PHONY: run clean test doc all

all:
	gcc -I $(INC_H) $(SRC) d_main.c -o $(call FixPath,$(PROJ_NAME).$(EXEC))
	
run:
	$(call FixPath,$(PROJ_NAME).$(EXEC))
test:
	gcc -I $(INC_H) -I $(INC_T) -I $(INC_TE) $(TEST_SRC) $(SRC) -o $(call FixPath,$(TEST_PROJ_NAME).$(EXEC))
	./$(call FixPath,$(TEST_PROJ_NAME).$(EXEC))

coverage:
	cp test/d_main.c .
	gcc -fprofile-arcs -ftest-coverage -I $(INC_H) -I $(INC_T) -I $(INC_TE) unity/unity.c test/d_main.c main.c $(SRC) -o $(call FixPath, $(TEST_PROJ_NAME).$(EXEC))
	$(call FixPath, ./$(TEST_PROJ_NAME).$(EXEC))
	gcov -a $(hos_SRC)
	$(RM) *.$(EXEC)
	
	
	$(RM) d_main.c


cppcheck:
	cppcheck --enable=all $(SRC) d_main.c
debug:
	gcc -I $(INC_H) $(SRC) d_main.c -g -o $(PROJ_NAME).$(EXEC)
	gdb $(PROJ_NAME).$(EXEC)

valgrind:
	valgrind ./$(TEST_PROJ_NAME).$(EXEC)


clean:
	
	$(RM) *.$(EXEC)
