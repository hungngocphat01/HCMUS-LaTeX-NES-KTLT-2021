PDFLATEX=pdflatex 
LFLAGS=-shell-escape
OUTDIR=build

main.pdf: main.tex
	$(PDFLATEX) $(LFLAGS) -output-directory=$(OUTDIR) $^
clean:
	rm build/*