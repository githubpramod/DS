TARGET=algorithm
OBJS=sort.o hashTable.o graph.o tree.o list.o stack.o queue.o main.o
$(TARGET):$(OBJS)
	g++ $^ -o $@
# main.o, bank.o, account.o can be built using implicit rules
clean:
	rm -rf $(OBJS) $(TARGET)