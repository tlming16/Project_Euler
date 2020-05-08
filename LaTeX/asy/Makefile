all: pdf_g svg_g
	cp *.svg svg
	cp *.pdf pdf
pdf_g:*.asy
	asy -f pdf $^ 
svg_g:*.asy
	asy -f svg $^
.PONY:clean
copy: pdf_g svg_g 
	cp *.pdf pdf 
	cp *.svg svg 
clean:
	rm -f *.aux *.aux  *.log  *.pdf *.eps *.svg *.png 
