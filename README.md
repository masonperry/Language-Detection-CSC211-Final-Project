# CSC211 Final Project: Language Detection
## Design Document
## mason_perry@my.uri.edu

Design and write a program, when given:
  • A  set of documents of a known language.
  • A skeptical document of unknown languages.
  Goal: Identify the most similar language, by Comparing the "Original" Document
  to the Skeptical document.

# First... What small problems do we need to solve?
We want this program to read through a text file,
Using trigrams, making a window of three characters {Letters and Spaces},
iterate through the file.

If certain Word matches a language characteristic then the Text file is "Language."
a word matches the characteristic of "English" then it is English.

Trigram Frequency Vectors

We just need to include spaces in between.

# Functions we could potentially use
  Switch()
  - Won't work with trigrams but wanted to think about other ways, to identify
    the Language.
    • case "Hello": return "English"
    • case "Hola": return "Spanish"
    • case "Bonjour": return "French"

  Similarities()
  - Compare trigrams
    If a there is trigram it is most likely that trigram is a language.
  Main()


# Libraries Needed
<cstdlib>
<iostream>
<fstream>
<vector>
<string>

#Compile script
Languages.cpp and Trigram.cpp
get it from a3
Get from Caesar Lab
