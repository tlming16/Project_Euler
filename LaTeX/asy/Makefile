all: *.asy 
	asy -f pdf *.asy 
	asy -f svg *.asy
	cp *.svg svg
	cp *.pdf pdf
	rm -f *.aux *.log *.pdf *.svg 

.PONY:clean
copy: *.pdf *.svg 
	cp *.pdf pdf 
	cp *.svg svg 
clean:
	rm -f *.aux *.aux  *.log  *.pdf *.eps 
