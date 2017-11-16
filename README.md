# CSC211 Final Project: Language Detection
## Design Document
## mason_perry@my.uri.edu

Design and write a program, when given:
  • A  set of documents of a known language.
  • A skeptical document of unknown languages.
  Goal: Identify the most similar language, by Comparing the "Original" Document
  to the Skeptical document.

**Priorities** Find a Partner Before Monday, 11/20/17! *Found Partner!*

# First... What small problems do I need to solve?
    • Recognize {"Language Text"} as {"The Language."}
    • If "Voulez-vous" = French.
    • If "Would you want to be with me?" = English.

So~... we want to take a string of characters,
then using trigrams, all 26 letters +1 (to include spaces) = 27.
making a window of three starting at position 0, iterate through the string.
then...
Trigram Frequency Vectors



# Note

switch()
Compare()
main()

Libraries Needed.
<string>
fstream

Compile script
Languages.cpp and Trigram.cpp?
