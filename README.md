# 42-testc
Script to link references to a source file, checking 42 norm

# installation
```
git clone https://github.com/qleguennec/42-testc ~/42-testc
~/42-testc/INSTALL.sh
```
Les fonctions a ajouter sont dans ~/42-testc/functions
Le dossier en contient deja deux, main et fr_putchar

# usage
You need to be in the directory where your .c is.
```
testc <source_file.c> <function_to_exec()> <"functions to add, seperated by spaces">
```
example:
testc ft_print_alphabet.c "ft_print_alphabet()" "main ft_putchar"

# notes
- Vous aurez probablement un ou plusieurs warning. Don't panic, la moulinette s'en fout.
- Si vous avez des questions, demandez a tgirou, pas a qle-guen.
- Le script est encore largement ameliorable. Si vous voulez contribuer, demandez moi (qle-guen)
- Si il y a des bugs (tres probable), demandez a ccouenon ou corrigez les vous meme
