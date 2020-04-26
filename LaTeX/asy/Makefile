all: pdf svg copy
	cp *.svg svg
	cp *.pdf pdf
pdf:*.asy
	asy -f pdf *.asy 
svg:*.asy
	asy -f svg *.asy 
.PONY:clean
copy: pdf svg 
	cp *.pdf pdf 
	cp *.svg svg 
clean:
	rm -f *.aux *.aux  *.log  *.pdf *.eps 
