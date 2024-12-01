# import tkinter as tk
# from tkinter import messagebox
# import csv

# # Function to load universities data from the CSV file
# def load_from_csv():
#     universities = []
#     try:
#         with open("universities.csv", newline="") as csvfile:
#             reader = csv.DictReader(csvfile)
#             for row in reader:
#                 universities.append(row)
#     except FileNotFoundError:
#         pass  # If file doesn't exist, return an empty list
#     return universities

# # Function to save universities data to the CSV file
# def save_to_csv(universities):
#     with open("universities.csv", "w", newline="") as csvfile:
#         fieldnames = ["name", "cgpa", "gre", "ielts","toefl","pte"]
#         writer = csv.DictWriter(csvfile, fieldnames=fieldnames)
#         writer.writeheader()
#         writer.writerows(universities)

# def search_universities():
#     # Function to search for universities
#     search_window = tk.Toplevel()
#     search_window.title("Search Universities")

#     # Create input fields
#     tk.Label(search_window, text="CGPA").grid(row=0, column=0)
#     tk.Label(search_window, text="GRE Score").grid(row=1, column=0)
#     tk.Label(search_window, text="IELTS Score").grid(row=2, column=0)
#     tk.Label(search_window, text="TOEFL Score").grid(row=3, column=0)
#     tk.Label(search_window, text="PTE Score").grid(row=4, column=0)

#     cgpa_value = tk.DoubleVar()
#     gre_value = tk.DoubleVar()
#     ielts_value = tk.DoubleVar()
#     toefl_value = tk.IntVar()
#     pte_value = tk.IntVar()

#     tk.Entry(search_window, textvariable=cgpa_value).grid(row=0, column=1)
#     tk.Entry(search_window, textvariable=gre_value).grid(row=1, column=1)
#     tk.Entry(search_window, textvariable=ielts_value).grid(row=2, column=1)
#     tk.Entry(search_window, textvariable=toefl_value).grid(row=3, column=1)
#     tk.Entry(search_window, textvariable=pte_value).grid(row=4, column=1)

#     def suggest_universities():
#         cgpa = cgpa_value.get()
#         gre = gre_value.get()
#         ielts = ielts_value.get()
#         toefl = toefl_value.get()
#         pte = pte_value.get()
        
#         suggested_universities = []
#         for uni in universities:
#             if cgpa >= float(uni["cgpa"]) and gre >= float(uni["gre"]) and ielts >= float(uni["ielts"]) and toefl >= int(uni["toefl"]) and pte >= int(uni["pte"]):
#                 suggested_universities.append(uni["name"])
        
#         if suggested_universities:
#             messagebox.showinfo("Suggested Universities", "\n".join(suggested_universities))
#         else:
#             messagebox.showinfo("Suggested Universities", "No universities match your criteria.")
    
#     tk.Button(search_window, text="Submit", command=suggest_universities).grid(row=5, columnspan=2)

# def add_university():
#     # Function to add new university information
#     add_window = tk.Toplevel()
#     add_window.title("Add University")

#     # Create input fields
#     tk.Label(add_window, text="University Name").grid(row=0, column=0)
#     tk.Label(add_window, text="CGPA").grid(row=1, column=0)
#     tk.Label(add_window, text="GRE Score").grid(row=2, column=0)
#     tk.Label(add_window, text="IELTS Score").grid(row=3, column=0)
#     tk.Label(add_window, text="TOEFL Score").grid(row=4, column=0)
#     tk.Label(add_window, text="PTE Score").grid(row=5, column=0)

#     uni_name = tk.StringVar()
#     cgpa_value = tk.DoubleVar()
#     gre_value = tk.DoubleVar()
#     ielts_value = tk.DoubleVar()
#     toefl_value = tk.IntVar()
#     pte_value = tk.IntVar()

#     tk.Entry(add_window, textvariable=uni_name).grid(row=0, column=1)
#     tk.Entry(add_window, textvariable=cgpa_value).grid(row=1, column=1)
#     tk.Entry(add_window, textvariable=gre_value).grid(row=2, column=1)
#     tk.Entry(add_window, textvariable=ielts_value).grid(row=3, column=1)
#     tk.Entry(add_window, textvariable=toefl_value).grid(row=4, column=1)
#     tk.Entry(add_window, textvariable=pte_value).grid(row=5, column=1)

#     def save_university():
#         name = uni_name.get()
#         cgpa = cgpa_value.get()
#         gre = gre_value.get()
#         ielts = ielts_value.get()
#         toefl = toefl_value.get()
#         pte = pte_value.get()
        
#         universities.append({"name": name, "cgpa": cgpa, "gre": gre, "ielts": ielts, "toefl": toefl, "pte": pte})
#         save_to_csv(universities)
#         messagebox.showinfo("University Added", f"{name} has been added to the list of universities.")
    
#     tk.Button(add_window, text="Add University", command=save_university).grid(row=6, columnspan=2)

# # Load universities data from the CSV file
# universities = load_from_csv()

# def menu_choice(choice):
#     # Function to handle menu choices
#     if choice == "Search Universities":
#         search_universities()
#     elif choice == "Add University":
#         add_university()

# def main_menu():
#     # Function to create the main menu
#     root = tk.Tk()
#     root.title("Smart Search")
    
#     # Set background color
#     root.configure(bg="lightblue")  # Change "lightblue" to any color you prefer

#     # Create menu buttons
#     search_button = tk.Button(root, text="Search Universities", command=lambda: menu_choice("Search Universities"))
#     search_button.pack(pady=10)

#     add_button = tk.Button(root, text="Add University", command=lambda: menu_choice("Add University"))
#     add_button.pack(pady=10)

#     root.mainloop()

# # Start the program by displaying the main menu
# main_menu()








# import tkinter as tk
# from tkinter import messagebox
# import csv

# # Function to load universities data from the CSV file
# def load_from_csv():
#     universities = []
#     try:
#         with open("universities.csv", newline="") as csvfile:
#             reader = csv.DictReader(csvfile)
#             for row in reader:
#                 universities.append(row)
#     except FileNotFoundError:
#         pass  # If file doesn't exist, return an empty list
#     return universities

# # Function to save universities data to the CSV file
# def save_to_csv(universities):
#     with open("universities.csv", "w", newline="") as csvfile:
#         fieldnames = ["name", "cgpa", "gre", "ielts","toefl","pte"]
#         writer = csv.DictWriter(csvfile, fieldnames=fieldnames)
#         writer.writeheader()
#         writer.writerows(universities)



# def add_sample_universities():
#     universities = [
#         {"name": "Harvard University", "cgpa": 3.5, "gre": 330, "ielts": 7.0, "toefl": 100, "pte": 0},
#         {"name": "Stanford University", "cgpa": 3.5, "gre": 328, "ielts": 7.0, "toefl": 100, "pte": 0},
#         {"name": "MIT", "cgpa": 3.5, "gre": 330, "ielts": 7.0, "toefl": 100, "pte": 0},
#         {"name": "University Of California", "cgpa": 3.5, "gre": 0, "ielts": 7.0, "toefl": 90, "pte": 0},
#         {"name": "Colombia University", "cgpa": 3.5, "gre": 311, "ielts": 7.5, "toefl": 100, "pte": 0},
#         {"name": "University Of Oxford", "cgpa": 3.5, "gre": 314, "ielts": 7.0, "toefl": 100, "pte": 78},
#         {"name": "University of Michigan", "cgpa": 3.5, "gre": 0, "ielts": 6.5, "toefl": 84, "pte": 0},
#         {"name": "ETH Zurich", "cgpa": 3.0, "gre": 0, "ielts": 7.0, "toefl": 100, "pte": 68},
#         {"name": "THe University Of British Columbia", "cgpa": 3.5, "gre": 0, "ielts": 6.5, "toefl": 90, "pte": 65},
#         {"name": "National University Of Singapore", "cgpa": 3.0, "gre": 320, "ielts": 6.0, "toefl": 85, "pte": 62},
#         {"name": "University Of Toronto", "cgpa": 3.0, "gre": 0, "ielts": 7.0, "toefl": 93, "pte": 0},
#         {"name": "Princeton University", "cgpa": 3.5, "gre": 298, "ielts": 8.0, "toefl": 100, "pte": 0},
#         {"name": "University Of Amsterdam", "cgpa": 3.5, "gre": 298, "ielts": 6.5, "toefl": 92, "pte": 0},
#         {"name": "University Of Pennsylvania", "cgpa": 3.0, "gre": 324, "ielts": 6.5, "toefl": 100, "pte": 0},
#         {"name": "Technical University Of Munich", "cgpa": 3.0, "gre": 0, "ielts": 6.5, "toefl": 88, "pte": 65},
#         {"name": "Imperial college London", "cgpa": 3.0, "gre": 314, "ielts": 6.5, "toefl": 92, "pte": 62}

#     ]    
#     save_to_csv(universities)

# # Load universities data from the CSV file
# universities = load_from_csv()






# def search_universities():
#     # Function to search for universities
#     search_window = tk.Toplevel()
#     search_window.title("Search Universities")

#     # Create input fields
#     tk.Label(search_window, text="CGPA").grid(row=1, column=1)  # Set rowspan to make it bigger
#     tk.Label(search_window, text="GRE Score").grid(row=2, column=1)
#     tk.Label(search_window, text="IELTS Score").grid(row=3, column=1)
#     tk.Label(search_window, text="TOEFL Score").grid(row=4, column=1)
#     tk.Label(search_window, text="PTE Score").grid(row=5, column=1)

#     cgpa_value = tk.DoubleVar()
#     gre_value = tk.DoubleVar()
#     ielts_value = tk.DoubleVar()
#     toefl_value = tk.IntVar()
#     pte_value = tk.IntVar()

#     tk.Entry(search_window, textvariable=cgpa_value).grid(row=1, column=2)  # Set rowspan to make it bigger
#     tk.Entry(search_window, textvariable=gre_value).grid(row=2, column=2)
#     tk.Entry(search_window, textvariable=ielts_value).grid(row=3, column=2)
#     tk.Entry(search_window, textvariable=toefl_value).grid(row=4, column=2)
#     tk.Entry(search_window, textvariable=pte_value).grid(row=5, column=2)

#     def suggest_universities():
#         cgpa = cgpa_value.get()
#         gre = gre_value.get()
#         ielts = ielts_value.get()
#         toefl = toefl_value.get()
#         pte = pte_value.get()
        
#         suggested_universities = []
#         for uni in universities:
#             if cgpa >= float(uni["cgpa"]) and gre >= float(uni["gre"]) and ielts >= float(uni["ielts"]) and toefl >= int(uni["toefl"]) and pte >= int(uni["pte"]):
#                 suggested_universities.append(uni["name"])
        
#         if suggested_universities:
#             messagebox.showinfo("Suggested Universities", "\n".join(suggested_universities))
#         else:
#             messagebox.showinfo("Suggested Universities", "No universities match your criteria.")
    
#     tk.Button(search_window, text="Submit", command=suggest_universities).grid(row=6, columnspan=3)

# def add_university():
#     # Function to add new university information
#     add_window = tk.Toplevel()
#     add_window.title("Add University")

#     # Create input fields
#     tk.Label(add_window, text="University Name").grid(row=0, column=0)
#     tk.Label(add_window, text="CGPA").grid(row=1, column=0)
#     tk.Label(add_window, text="GRE Score").grid(row=2, column=0)
#     tk.Label(add_window, text="IELTS Score").grid(row=3, column=0)
#     tk.Label(add_window, text="TOEFL Score").grid(row=4, column=0)
#     tk.Label(add_window, text="PTE Score").grid(row=5, column=0)

#     uni_name = tk.StringVar()
#     cgpa_value = tk.DoubleVar()
#     gre_value = tk.DoubleVar()
#     ielts_value = tk.DoubleVar()
#     toefl_value = tk.IntVar()
#     pte_value = tk.IntVar()

#     tk.Entry(add_window, textvariable=uni_name).grid(row=0, column=1)
#     tk.Entry(add_window, textvariable=cgpa_value).grid(row=1, column=1)
#     tk.Entry(add_window, textvariable=gre_value).grid(row=2, column=1)
#     tk.Entry(add_window, textvariable=ielts_value).grid(row=3, column=1)
#     tk.Entry(add_window, textvariable=toefl_value).grid(row=4, column=1)
#     tk.Entry(add_window, textvariable=pte_value).grid(row=5, column=1)

#     def save_university():
#         name = uni_name.get()
#         cgpa = cgpa_value.get()
#         gre = gre_value.get()
#         ielts = ielts_value.get()
#         toefl = toefl_value.get()
#         pte = pte_value.get()
        
#         universities.append({"name": name, "cgpa": cgpa, "gre": gre, "ielts": ielts, "toefl": toefl, "pte": pte})
#         save_to_csv(universities)
#         messagebox.showinfo("University Added", f"{name} has been added to the list of universities.")
    
#     tk.Button(add_window, text="Add University", command=save_university).grid(row=6, columnspan=2)

# # Load universities data from the CSV file
# universities = load_from_csv()

# def menu_choice(choice):
#     # Function to handle menu choices
#     if choice == "Search Universities":
#         search_universities()
#     elif choice == "Add University":
#         add_university()

# def main_menu():
#     # Function to create the main menu
#     root = tk.Tk()
#     root.title("Smart Search")
    
#     # Set background color
#     root.configure(bg="lightblue")  # Change "lightblue" to any color you prefer

#     # Create menu buttons
#     search_button = tk.Button(root, text="Search Universities", command=lambda: menu_choice("Search Universities"))
#     search_button.pack(pady=10)

#     add_button = tk.Button(root, text="Add University", command=lambda: menu_choice("Add University"))
#     add_button.pack(pady=10)

#     root.mainloop()

# # Start the program by displaying the main menu
# main_menu()





from tempfile import TemporaryFile
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
        fieldnames = ["name", "cgpa", "gre", "ielts","toefl","pte"]
        writer = csv.DictWriter(csvfile, fieldnames=fieldnames)
        writer.writeheader()
        writer.writerows(universities)

def search_universities():
    # Function to search for universities
    search_window = tk.Toplevel()
    search_window.title("Search Universities")

    # Create input fields
    tk.Label(search_window, text="CGPA", fg="blue", font=("Arial Bold", 10)).grid(row=0, column=0)
    tk.Label(search_window, text="GRE Score", fg="blue", font=("Arial Bold", 10)).grid(row=1, column=0)
    tk.Label(search_window, text="IELTS Score", fg="blue", font=("Arial Bold", 10)).grid(row=2, column=0)
    tk.Label(search_window, text="TOEFL Score", fg="blue", font=("Arial Bold", 10)).grid(row=3, column=0)
    tk.Label(search_window, text="PTE Score", fg="blue", font=("Arial Bold", 10)).grid(row=4, column=0)

    cgpa_value = tk.DoubleVar()
    gre_value = tk.DoubleVar()
    ielts_value = tk.DoubleVar()
    toefl_value = tk.IntVar()
    pte_value = tk.IntVar()

    tk.Entry(search_window, textvariable=cgpa_value).grid(row=0, column=1)
    tk.Entry(search_window, textvariable=gre_value).grid(row=1, column=1)
    tk.Entry(search_window, textvariable=ielts_value).grid(row=2, column=1)
    tk.Entry(search_window, textvariable=toefl_value).grid(row=3, column=1)
    tk.Entry(search_window, textvariable=pte_value).grid(row=4, column=1)

    def suggest_universities():
        cgpa = cgpa_value.get()
        gre = gre_value.get()
        ielts = ielts_value.get()
        toefl = toefl_value.get()
        pte = pte_value.get()
        
        suggested_universities = []
        for uni in universities:
            if cgpa >= float(uni["cgpa"]) and gre >= float(uni["gre"]) and ielts >= float(uni["ielts"]) and toefl >= int(uni["toefl"]) and pte >= int(uni["pte"]):
                suggested_universities.append(uni["name"])
        
        if suggested_universities:
            messagebox.showinfo("Suggested Universities", "\n".join(suggested_universities))
        else:
            messagebox.showinfo("Suggested Universities", "No universities match your criteria.")
    
    tk.Button(search_window, text="Submit", bg="green", fg="white", command=suggest_universities).grid(row=5, columnspan=2)

def add_university():
    # Function to add new university information
    add_window = tk.Toplevel()
    add_window.title("Add University")

    # Create input fields
    tk.Label(add_window, text="University Name", fg="blue", font=("Arial Bold", 10)).grid(row=0, column=0)
    tk.Label(add_window, text="CGPA", fg="blue", font=("Arial Bold", 10)).grid(row=1, column=0)
    tk.Label(add_window, text="GRE Score", fg="blue", font=("Arial Bold", 10)).grid(row=2, column=0)
    tk.Label(add_window, text="IELTS Score", fg="blue", font=("Arial Bold", 10)).grid(row=3, column=0)
    tk.Label(add_window, text="TOEFL Score", fg="blue", font=("Arial Bold", 10)).grid(row=4, column=0)
    tk.Label(add_window, text="PTE Score", fg="blue", font=("Arial Bold", 10)).grid(row=5, column=0)

    uni_name = tk.StringVar()
    cgpa_value = tk.DoubleVar()
    gre_value = tk.DoubleVar()
    ielts_value = tk.DoubleVar()
    toefl_value = tk.IntVar()
    pte_value = tk.IntVar()

    tk.Entry(add_window, textvariable=uni_name).grid(row=0, column=1)
    tk.Entry(add_window, textvariable=cgpa_value).grid(row=1, column=1)
    tk.Entry(add_window, textvariable=gre_value).grid(row=2, column=1)
    tk.Entry(add_window, textvariable=ielts_value).grid(row=3, column=1)
    tk.Entry(add_window, textvariable=toefl_value).grid(row=4, column=1)
    tk.Entry(add_window, textvariable=pte_value).grid(row=5, column=1)

    def save_university():
        name = uni_name.get()
        cgpa = cgpa_value.get()
        gre = gre_value.get()
        ielts = ielts_value.get()
        toefl = toefl_value.get()
        pte = pte_value.get()
        
        universities.append({"name": name, "cgpa": cgpa, "gre": gre, "ielts": ielts, "toefl": toefl, "pte": pte})
        save_to_csv(universities)
        messagebox.showinfo("University Added", f"{name} has been added to the list of universities.")
    
    tk.Button(add_window, text="Add University", bg="green", fg="white", command=save_university).grid(row=6, columnspan=2)

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

    # Create menu buttons
    search_button = tk.Button(root, text="Search Universities", bg="blue", fg="white", font=("Arial Bold", 12), command=lambda: menu_choice("Search Universities"))
    search_button.pack(pady=10)

    add_button = tk.Button(root, text="Add University", bg="blue", fg="white", font=("Arial Bold", 12), command=lambda:menu_choice("Add University"))
    add_button.pack(pady=10)

    root.mainloop()

# Start the program by displaying the main menu
main_menu()