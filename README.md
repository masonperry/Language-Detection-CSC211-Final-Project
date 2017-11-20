# CSC211 Final Project: Language Detection
## Design Document
## mason_perry@my.uri.edu

Design and write a program, when given:
  • A  set of documents of a known language.
  • A skeptical document of unknown languages.
  Goal: Identify the most similar language, by Comparing the "Original" Document
  to the Skeptical document.

# First... What small problems do we need to solve?
    • Recognize {"Language Text"} as {"The Language."}
    • If "Aimeriez-vous prendre un verre?" = French.
    • If "Would you like a drink?" = English.

We want this program to read through a txt file,
Using trigrams, making a window of three characters {Letters and Spaces},
iterate through the file.

If certain Word matches a language characteristic then the Text file is "Language."
a word matches the characteristic of "English" then it is English.


Trigram Frequency Vectors
Similar to DNA sequencing we just need to include spaces in between.

# Functions we could potentially use
Switch()
Compare()
Main()

# Libraries Needed
<cstdlib>
<iostream>
<fstream>
<vector>
<string>

#Compile script
Languages.cpp and Trigram.cpp?
