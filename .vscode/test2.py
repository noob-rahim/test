from tkinter import *
from PIL import Image, ImageTk
easinrahim_root=Tk()

easinrahim_root.geometry("444x244")
photo = PhotoImage(file="delicious-pizza-png.png")

#for jpg image
# image= Image.open("1.jpg")
# photo=ImageTk.PhotoImage(image)
arafat_label = Label(image= photo)
arafat_label.pack()


easinrahim_root.mainloop()