#n the case of two integers height and width to be
#read on the same line, separated by a space, the following command suffices:
#The inputs can be read line by line via the command input(), which returns the
#next input line in the form of a string, excluding the end-of-line characters.3 The
#module sys contains a similar function stdin.readline(), which does not suppress
#the end-of-line characters, but according to our experience has the advantage of being
#four times as fast!
import sys
height,width=map(int,sys.stdin.readline().split())
'''
reading the whole of the inputs with
a single system call. The following code fragment assumes that the inputs are made
up of only integers, eventually on multiple lines. The parameter 0 in the function
os.read means that the read is from standard input, and the constant M must be an
upper bound on the size of the file.
'''
import os
instance=list(map(int,os.read(0,M).split()))
