DIRS	= lesson_1 lesson_2 lesson_3 lesson_4 \
lesson05 lesson06 lesson07 lesson08 lesson09 lesson10\
lesson11 lesson12 lesson13 lesson14 lesson15 lesson16 lesson17 lesson18 lesson19\
lesson20 lesson21 lesson22 lesson23 lesson24 lesson25 lesson26 lesson27 lesson28 lesson29\
lesson30 lesson31 lesson32 lesson33 lesson34 lesson35 lesson36

all : objs

objs :
	@for dir in $(DIRS); do \
	make -C $$dir || exit $?;\
	done

clean :
	@for dir in $(DIRS); do \
	make -C $$dir clean; \
	done
