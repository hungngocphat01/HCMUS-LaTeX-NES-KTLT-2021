LATEX=latexmk
LFLAGS=-f --shell-escape -synctex=1 -interaction=nonstopmode -file-line-error -pdf
OUTDIR=build
TEX=main.tex
TARGET=$(TEX:.tex=.pdf)

$(TARGET): $(TEX)
	latexmk $(LFLAGS) -outdir=$(OUTDIR) $^
