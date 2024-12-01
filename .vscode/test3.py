# from cgitb import text
from tkinter import *
# from tkinter import font
# from tkinter.ttk import _Padding
# from webbrowser import BackgroundBrowser
root = Tk()
root.geometry("444x244")
root.title("My GUI with Rahim")

# text - adds the text
# bd - Background
# fg - foreground
# font - sets the font
# padx - x padding
# pady - y padding
# relief - border style - SUNKEN, RAISED, GROOVE, RIDGE
title_level = Label(text='''Abdul Rashid Salim Salman Khan (pronounced [səlˈmɑːn xɑːn]\n; born 27 December 1965)[3] is an Indian actor,\n film producer, and television personality who works predominantly\n in Hindi films. In a career spanning over\n three decades, Khan has received numerous awards, including two \n National Film Awards as a film producer, and \n a Filmfare Award as an actor.[4] He is cited in the \n media as one of the most commercially successful actors of Indian \n cinema.[5][6] Forbes has included Khan in listings \n of the highest-paid celebrities in the world, in 2015 \n and 2018, with him being the highest-ranked Indian in the latter year. \n [7][8][9][10] Khan has starred in the annual highest-grossing Hindi film of 10 individual \n years, the highest for any actor.[11]''', bg="red", fg="white",padx=123,pady=94, font=("comicsansms",19,"bold"))
title_level.pack()

root.mainloop()