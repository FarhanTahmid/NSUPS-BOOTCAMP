from sys import stdin
from re import split

line=stdin.read()
line=line.strip().lower()
wordsInLine=set(split(r'[^a-z]',line))

for words in sorted(wordsInLine):
    if(words):
        print(words)