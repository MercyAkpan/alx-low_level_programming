.PHONY:  main del
g = gcc
# This is an alias, that is expanded with {g}
g := ${g} # This should be unneccessary unless you want g to ref. itself
main: main.o #Assumed pr(line 3,5) -- lib.o
	${g}-o $@ $^ 
	@#@ is to not echo __line__
	@# $@ is for the output (main), $^ is for all pre-requiites(pr) (main.o)
%.o : %.c
	${g}-c $< -o $@ 
	@#  $@ --line 3; $< is for name of 1ST prerequisite(pr) (main.c) 
	@# % is replacing each pr(line 3,5) i.e % == main; then it also means lib for 2nd (Assumed)pr
.DEFAULT_GOAL := del
del:
	@rm -f *.o main
	@echo "DELETING...."
echo:
	echo {g}
