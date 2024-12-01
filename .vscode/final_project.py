import tkinter as tk
from tkinter import messagebox
import csv

# Function to load universities data from the CSV file
def load_from_csv():
    universities = []
    try:
        with open("universities.csv", newline="") as csvfile:
            reader = csv.DictReader(csvfile)
            for row in reader:
                universities.append(row)
    except FileNotFoundError:
        pass  # If file doesn't exist, return an empty list
    return universities

# Function to save universities data to the CSV file
def save_to_csv(universities):
    with open("universities.csv", "w", newline="") as csvfile:
        pass  # This will truncate the file, effectively clearing its contents

def search_universities():
    # Function to search for universities
    search_window = tk.Toplevel()
    search_window.title("Search Universities")
    search_window.configure(bg="#F0F0F0")  # Setting background color
    
    # Create input fields
    tk.Label(search_window, text="CGPA", bg="#F0F0F0").grid(row=0, column=0)
    tk.Label(search_window, text="GRE Score", bg="#F0F0F0").grid(row=1, column=0)
    tk.Label(search_window, text="IELTS Score", bg="#F0F0F0").grid(row=2, column=0)
    tk.Label(search_window, text="TOEFL Score", bg="#F0F0F0").grid(row=3, column=0)

    cgpa_value = tk.DoubleVar()
    gre_value = tk.DoubleVar()
    ielts_value = tk.DoubleVar()
    toefl_value = tk.IntVar()

    tk.Entry(search_window, textvariable=cgpa_value).grid(row=0, column=1)
    tk.Entry(search_window, textvariable=gre_value).grid(row=1, column=1)
    tk.Entry(search_window, textvariable=ielts_value).grid(row=2, column=1)
    tk.Entry(search_window, textvariable=toefl_value).grid(row=3, column=1)

    def suggest_universities():
        cgpa = cgpa_value.get()
        gre = gre_value.get()
        ielts = ielts_value.get()
        toefl = toefl_value.get()
        
        suggested_universities = []
        for uni in universities:
            if cgpa >= float(uni["cgpa"]) and gre >= float(uni["gre"]) and ielts >= float(uni["ielts"]) and toefl >= int(uni["toefl"]):
                suggested_universities.append(uni["name"])
        
        if suggested_universities:
            messagebox.showinfo("Suggested Universities", "\n".join(suggested_universities))
        else:
            messagebox.showinfo("Suggested Universities", "No universities match your criteria.")
    
    tk.Button(search_window, text="Submit", command=suggest_universities, bg="#007ACC", fg="white").grid(row=4, columnspan=2)

def add_university():
    # Function to add new university information
    add_window = tk.Toplevel()
    add_window.title("Add University")
    add_window.configure(bg="#F0F0F0")  # Setting background color

    # Create input fields
    tk.Label(add_window, text="University Name", bg="#F0F0F0").grid(row=0, column=0)
    tk.Label(add_window, text="CGPA", bg="#F0F0F0").grid(row=1, column=0)
    tk.Label(add_window, text="GRE Score", bg="#F0F0F0").grid(row=2, column=0)
    tk.Label(add_window, text="IELTS Score", bg="#F0F0F0").grid(row=3, column=0)
    tk.Label(add_window, text="TOEFL Score", bg="#F0F0F0").grid(row=4, column=0)

    uni_name = tk.StringVar()
    cgpa_value = tk.DoubleVar()
    gre_value = tk.DoubleVar()
    ielts_value = tk.DoubleVar()
    toefl_value = tk.IntVar()

    tk.Entry(add_window, textvariable=uni_name).grid(row=0, column=1)
    tk.Entry(add_window, textvariable=cgpa_value).grid(row=1, column=1)
    tk.Entry(add_window, textvariable=gre_value).grid(row=2, column=1)
    tk.Entry(add_window, textvariable=ielts_value).grid(row=3, column=1)
    tk.Entry(add_window, textvariable=toefl_value).grid(row=4, column=1)

    def save_university():
        name = uni_name.get()
        cgpa = cgpa_value.get()
        gre = gre_value.get()
        ielts = ielts_value.get()
        toefl = toefl_value.get()
        
        universities.append({"name": name, "cgpa": cgpa, "gre": gre, "ielts": ielts, "toefl": toefl})
        save_to_csv(universities)
        messagebox.showinfo("University Added", f"{name} has been added to the list of universities.")
    
    tk.Button(add_window, text="Add University", command=save_university, bg="#007ACC", fg="white").grid(row=5, columnspan=2)

# Load universities data from the CSV file
universities = load_from_csv()

def menu_choice(choice):
    # Function to handle menu choices
    if choice == "Search Universities":
        search_universities()
    elif choice == "Add University":
        add_university()

def main_menu():
    # Function to create the main menu
    root = tk.Tk()
    root.title("University Search App")
    root.configure(bg="#F0F0F0")  # Setting background color

    # Create menu buttons
    search_button = tk.Button(root, text="Search Universities", command=lambda: menu_choice("Search Universities"), bg="#007ACC", fg="white")
    search_button.pack(pady=10)

    add_button = tk.Button(root, text="Add University", command=lambda: menu_choice("Add University"), bg="#007ACC", fg="white")
    add_button.pack(pady=10)

    root.mainloop()

# Start the program by displaying the main menu
main_menu()
