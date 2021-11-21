PROJ_NAME = Billinvoice
BUILD = build
SRC = main.c\
src/bill_operations.c

#To check if the OS is windows or linux and set the executable file extension and delete command accordingly
ifdef OS
   RM = rm
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif

build:
	gcc $(SRC) -o $(call FixPath,$(PROJ_NAME).$(EXEC)) -lm

run: build
	./$(call FixPath,$(PROJ_NAME).$(EXEC))

clean:
	$(RM) $(call FixPath,$(PROJ_NAME).$(EXEC))
