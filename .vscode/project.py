from tkinter import *
root = Tk()

def getvals():
    print("Submitting form")

    print(f"{namevalue.get(),emailvalue.get(), universityvalue.get(), cgpavalue.get(), grevalue.get(), ieltsvalue.get(), scholarshipvalue.get()}")


    with open("records.txt","a") as f:
        f.write(f"{namevalue.get(),emailvalue.get(), universityvalue.get(), cgpavalue.get(), grevalue.get(), ieltsvalue.get(), scholarshipvalue.get()} \n")

root.geometry("666x333")
Label(root,text="Welcome to SmartSearch",font="comicsansms 13 bold",pady=15).grid(row=0,column=5)


name = Label(root, text="Name")
email = Label(root,text="Email")
university = Label(root,text="Current University")
cgpa = Label(root, text="CGPA")
gre = Label(root, text="GRE Score")
ielts = Label(root, text="IELTS Score")


name.grid(row=1,column=4)
email.grid(row=2,column=4)
university.grid(row=3,column=4)
cgpa.grid(row=4,column=4)
gre.grid(row=5,column=4)
ielts.grid(row=6,column=4)


namevalue = StringVar()
emailvalue = StringVar()
universityvalue = StringVar()
cgpavalue = DoubleVar()
grevalue = DoubleVar()
ieltsvalue = DoubleVar()
scholarshipvalue=IntVar()


nameentry = Entry(root, textvariable=namevalue)
emailentry = Entry(root, textvariable=emailvalue)
universityentry = Entry(root, textvariable=universityvalue)
cgpaentry = Entry(root, textvariable=cgpavalue)
greentry = Entry(root, textvariable=grevalue)
ieltsentry = Entry(root, textvariable=ieltsvalue)


nameentry.grid(row=1,column=5)
emailentry.grid(row=2,column=5)
universityentry.grid(row=3,column=5)
cgpaentry.grid(row=4,column=5)
greentry.grid(row=5,column=5)
ieltsentry.grid(row=6,column=5)

scholarship = Checkbutton (text="Apply for scholarship?", variable= scholarshipvalue)
scholarship.grid(row=7,column=5 )

Button(text="Submit",command=getvals).grid(row=8,column=5)


root.mainloop()