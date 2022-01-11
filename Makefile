CC=g++

linked_list: main.cpp List.cpp
	$(CC) -g -o linked_list main.cpp List.cpp
