LATEX=latexmk
LFLAGS=-f --shell-escape -synctex=1 -interaction=nonstopmode -file-line-error -pdf
OUTDIR=build
TARGET=main
TEX=main.tex

$(TARGET): $(TEX)
	latexmk $(LFLAGS) -outdir=$(OUTDIR) $^
	mv $(OUTDIR)/$(patsubst %.tex,%.pdf,$^) $(OUTDIR)/$@
