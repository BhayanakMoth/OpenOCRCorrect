# Ubuntu and Qt version

Compiled and Tested on Ubuntu Ubuntu 18.04. with Qt 5

# Installation

1. Add the Shobhika Font to Ubuntu from https://github.com/Sandhi-IITBombay/Shobhika/releases/ for reading Devanagari:
- Download latest version zip.
- Unzip the file.
- Open otf files with Font Viewer.
- Click Install on Top Right Corner.

2. Install qt5:
- $ sudo apt-get install qt5-default
- $ sudo apt-get install qtwebengine5-dev

3. Go to folder "FrameWorkCode", compile qpadfinal.pro and make:
- $ cd FrameWorkCode
- $ qmake qpadfinal.pro
- $ make
- Ignore the warnings. Will be removed in the next version.



Execute file qpadfinal in folder "FrameWorkCode"
- $ ./qpadfinal

# Creating Databse for Framework:

The folder “data/Book1Sanskrit” contains:-
1) A book named “Aryabhatiyabhashya of Nilakantha III Golapada (1957).pdf” for demo example.
2) “Dict” which is text file for Sanskrit Dictionary of 1.3 million words.
3) “IEROCR” text file that contains the OCR output of the book, each page separated by newline. ER represents English Removed, we ignore the words in english as Sanskrit ind-senz does not recognize English. Instead of ind-senz, output any OCR system can be used with the same filename.
4) “GEROCR” text file that contains the Google Doc output of the book, each page separated by newline. Instead of ind-senz, output any OCR system, other than one used in step 3 (above), can be used with the same filename.
5) SRules that contain 71 Sandhi Splitting Rules.
6) A text file with name "PWords" may be additionally added in folder "Book1Sanskrit" with Domain words, each separated by a newline, if known in advance.
7) A text file with name "CPair" may be additionally added in folder "Book1Sanskrit" with tab separated Correction pairs, one pair in one line, if known in advance. Prior OCR Confusions are also loaded from this file in additions to the autocorrections performed.
8) Folder “Inds” with jpeg files for first 20 pages of book and corresponding per page output from Indsenz.
9) Folder “Correct” with correct output of corresponding 20 pages in folder “Inds”.
10) Folder “Corrected” in which the output corrected by the user would be loaded while using the application.

# How to use the Framework

1) Select the Language out of Sanskrit, Hindi/Marathi or English from top right. Click on the “Open” icon on top left, or press “Ctrl+O”.
2) Open the file “data/Book1Sanskrit/Inds/page-1.txt”. This also link the files and folders in “Book1Sanskrit/”.
3) Click on “Load Data” to load Dictionary, Confusions, Sandhi Rules, GEROCR , IEROCR. Common OCR words in GEROCR and IEROCR will be loaded in Domain Vocabulary. It will take few seconds.
If you forget to “Load Data”, data will be loaded whenever you right click a word.
4) Finally, after loading data, page1.txt will again appear in the text browzer. Left click on the word to change the mouse cursor position and then right click on the colored words to generate suggestions.
5) Type in slp1 format and press “Cntrl+d” to change the text under cursor to Devanagari.
e.g. :-
प्रन्थाङ्कः -> graन्थाङ्कः -> (Cntrl D) -> ग्रन्थाङ्कः
If there are any issues in the format, just right click on the word and select the correct suggestion. Leave the correct colored words as it is.
6) Do not forget to use “Cntrl + S” to save the partially/fully corrected page to folder “Corrected”. Next time you come to the same page, the page will be uploaded from folder “Corrected” automatically.
7) Very Important: Afther the whole page is corrected load the words in Domainvocabulary by clicking “Cntrl + Shift + P”.
8) There is a timer on top left which gets updated on each right click or “Ctrl S”. It resets to 0 on loading the new page. Use “Ctrl+Shift+R” to move to next page and “Ctrl+Shift+L” to move to previous page.
9) As you use “Cntrl + Shift + P” to load domain words, you will observe improvement in suggestions page by page.
10) A useful tip: keep the GEROCR open in an editor as certain correct lines can be directly copied from it.

# Citations

You can read about our papers on: https://www.cse.iitb.ac.in/~rohitsaluja/publication.html
If you use this framework or learn from our publications, please cite our papers:

@article{RohitErrorDetectionNCorrection,
    author="Rohit Saluja and Devaraj Adiga and Parag Chaudhuri and Ganesh Ramakrishnan and Mark Carman",
    title="Error Detection and Corrections in {I}ndic {OCR} using {LSTM}s",
    journal = "International Conference on Document Analysis and Recognition ({ICDAR})",
    location="Kyoto, Japan",
    year="2017"
}

@article{RohitOpenOCRCorrect,
        author="Rohit Saluja and Devaraj Adiga and Parag Chaudhuri and Ganesh Ramakrishnan and Mark Carman",
    title="A Framework for Document Specific Error Detection and Corrections in {I}ndic {OCR}",
    journal="1st International Workshop on Open Services and Tools for Document Analysis (ICDAR- OST)",
    location="Kyoto, Japan",
    year="2017"
}

# References:
1. We started the code (and used icons) from: https://www.youtube.com/watch?v=x858_WCtl_Y
2. We further improved the application via ideas from "QPlainTextEdit With In Line Spell Check". Visit: https://john.nachtimwald.com/2009/08/22/qplaintextedit-with-in-line-spell-check/
3. For generating suggestions and  we used "Algorithm: Edit distance using a trie-tree (Dynamic Programming)" by Author: Murilo Adriano Vasconcelos <muriloufg@gmail.com>.
Visit: https://murilo.wordpress.com/2011/02/01/fast-and-easy-levenshtein-distance-using-a-trie-in-c/
4. For extracting OCR confusions, we used C++ implementation of "A linear space algorithm for computing maximal common subsequences" by D. S. Hirschberg for allignment. Visit  http://portal.acm.org/citation.cfm?id=360861. 
We further developed the code to extract OCR confusions from unalligned OCR text, alligned OCR text and Correct text.
5. Abdulkader, Ahmad, and Mathew R. Casey. "Low cost correction of OCR errors using learning in a multi-engine environment." Document Analysis and Recognition, 2009. ICDAR'09. 10th International Conference on. IEEE, 2009.


