# Testing cURL
# MAKEFILE

# C Compiler (Default: gcc)
CXX = gcc
CFLAGS = -Wall -Werror

# Librarys
INCLUDE = -I/usr/local/include
LDFLAGS = -L/usr/local/lib 
LDLIBS = -lcurl

# Details
SOURCES = main_program.c
OUT = main_program

.PHONY: all

all: build

$(OUT): $(patsubst %.cpp,%.o,$(SOURCES))
build: $(SOURCES)
	$(CXX) -o $(OUT) $(INCLUDE) $(CFLAGS) $(LDFLAGS) $(LDLIBS) $(SOURCES)
