# Get_Next_Line

Function that returns a line ending with a newline, read from a file descriptor. It is able to manage multiple file descriptors at the same time, without losing the reading thread on each of the descriptors.

## How to use

- Compile : `make`
- Remove object files : `make clean`
- Remove object files and program : `make fclean`
- Start fresh and re-compile : `make re`

## Executing

To use the function, compile with the bash script : `sh gcc.sh`
And execute the program with the file of your choice : `./test_gnl yourfile`
