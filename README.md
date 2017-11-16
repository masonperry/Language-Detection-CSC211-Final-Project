CSC211 Final Project: Language Detection

Design and write a program, when given:
  • A  set of documents of a known language.
  • A skeptical document of unknown languages.
  Goal: Identify the most similar language, by Comparing the "Original" Document
  to the Skeptical document.

**Priorities** Find a Partner Before Monday, 11/20/17!

First... What small problems do I need to solve?
Recognize {"Language Text"} as {"The Language."}
if "Voulez-vous être avec moi?" = French.
if "Would you want to be with me?" = English.

So~... we want to take a string of characters,
then using trigrams, all 26 letters +1 (to include spaces) = 27.
making a window of three starting at position 0, iterate through the string.
then... if string 

• Classes?
    A Class Containing all the languages.
    Or...
    A Class for each language.
    • What class is Public? Private?


• Objects - Attributes of each Language?
• Vectors - for each language containing special Characters?

Using Trigrams.
  • Trigram "Three Letters" starting from the initial index, of a string,
    iterate through the string and take in every position.
    • Trigram Frequency Vectors
