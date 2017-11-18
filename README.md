# CSC211 Final Project: Language Detection
## Design Document
## mason_perry@my.uri.edu

Design and write a program, when given:
  • A  set of documents of a known language.
  • A skeptical document of unknown languages.
  Goal: Identify the most similar language, by Comparing the "Original" Document
  to the Skeptical document.

# First... What small problems do I need to solve?
    • Recognize {"Language Text"} as {"The Language."}
    • If "Aimeriez-vous prendre un verre?" = French.
    • If "Would you like a drink?" = English.

So~... we want to take a string of characters,
then using trigrams, all 26 letters +1 (to include spaces) = 27.
making a window of three starting at position 0, iterate through the string.
then...
Trigram Frequency Vectors

# Functions...
Switch()
Compare()
Main()

# Libraries Needed...
<cstdlib>
<iostream>
<fstream>
<vector>
<string>

#Compile script
Languages.cpp and Trigram.cpp?
