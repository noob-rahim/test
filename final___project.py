# import tkinter as tk
# from tkinter import messagebox
# import requests

# def search_universities():
#     search_window = tk.Toplevel()
#     search_window.title("Search Universities")
#     search_window.configure(bg="#F0F0F0")  # Setting background color
    
#     tk.Label(search_window, text="CGPA", bg="#F0F0F0").grid(row=0, column=0)
#     tk.Label(search_window, text="GRE Score", bg="#F0F0F0").grid(row=1, column=0)
#     tk.Label(search_window, text="IELTS Score", bg="#F0F0F0").grid(row=2, column=0)
#     tk.Label(search_window, text="TOEFL Score", bg="#F0F0F0").grid(row=3, column=0)

#     cgpa_value = tk.DoubleVar()
#     gre_value = tk.DoubleVar()
#     ielts_value = tk.DoubleVar()
#     toefl_value = tk.IntVar()

#     tk.Entry(search_window, textvariable=cgpa_value).grid(row=0, column=1)
#     tk.Entry(search_window, textvariable=gre_value).grid(row=1, column=1)
#     tk.Entry(search_window, textvariable=ielts_value).grid(row=2, column=1)
#     tk.Entry(search_window, textvariable=toefl_value).grid(row=3, column=1)

#     def suggest_universities():
#         cgpa = cgpa_value.get()
#         gre = gre_value.get()
#         ielts = ielts_value.get()
#         toefl = toefl_value.get()

#         url = f"https://universities.hipolabs.com/search?cgpa_lte={cgpa}&gre_lte={gre}&ielts_lte={ielts}&toefl_lte={toefl}"
#         response = requests.get(url)
#         if response.status_code == 200:
#             universities = response.json()
#             if universities:
#                 result_window = tk.Toplevel()
#                 result_window.title("Matching Universities")
#                 result_window.configure(bg="#F0F0F0")  # Setting background color
                
#                 tk.Label(result_window, text="University Name", bg="#F0F0F0").grid(row=0, column=0)
#                 for i, uni in enumerate(universities, start=1):
#                     tk.Label(result_window, text=uni["name"], bg="#F0F0F0").grid(row=i, column=0)
#             else:
#                 messagebox.showinfo("Matching Universities", "No universities match your criteria.")
#         else:
#             messagebox.showerror("Error", "Failed to fetch data from API.")

#     tk.Button(search_window, text="Submit", command=suggest_universities, bg="#007ACC", fg="white").grid(row=4, columnspan=2)

# def main_menu():
#     root = tk.Tk()
#     root.title("University Search App")
#     root.configure(bg="#F0F0F0")  # Setting background color

#     search_button = tk.Button(root, text="Search Universities", command=search_universities, bg="#007ACC", fg="white")
#     search_button.pack(pady=10)

#     root.mainloop()

# main_menu()




# import tkinter as tk
# from tkinter import messagebox
# import requests

# def search_universities():
#     search_window = tk.Toplevel()
#     search_window.title("Search Universities")
#     search_window.configure(bg="#F0F0F0")  # Setting background color
    
#     tk.Label(search_window, text="CGPA", bg="#F0F0F0").grid(row=0, column=0)
#     tk.Label(search_window, text="GRE Score", bg="#F0F0F0").grid(row=1, column=0)
#     tk.Label(search_window, text="IELTS Score", bg="#F0F0F0").grid(row=2, column=0)
#     tk.Label(search_window, text="TOEFL Score", bg="#F0F0F0").grid(row=3, column=0)

#     cgpa_value = tk.DoubleVar()
#     gre_value = tk.DoubleVar()
#     ielts_value = tk.DoubleVar()
#     toefl_value = tk.IntVar()

#     tk.Entry(search_window, textvariable=cgpa_value).grid(row=0, column=1)
#     tk.Entry(search_window, textvariable=gre_value).grid(row=1, column=1)
#     tk.Entry(search_window, textvariable=ielts_value).grid(row=2, column=1)
#     tk.Entry(search_window, textvariable=toefl_value).grid(row=3, column=1)

#     def suggest_universities():
#         cgpa = cgpa_value.get()
#         gre = gre_value.get()
#         ielts = ielts_value.get()
#         toefl = toefl_value.get()

#         url = f"https://universities.hipolabs.com/search?cgpa_min={cgpa}&gre_min={gre}&ielts_min={ielts}&toefl_min={toefl}"
#         response = requests.get(url)
#         if response.status_code == 200:
#             universities = response.json()
#             if universities:
#                 result_window = tk.Toplevel()
#                 result_window.title("Matching Universities")
#                 result_window.configure(bg="#F0F0F0")  # Setting background color
                
#                 tk.Label(result_window, text="University Name", bg="#F0F0F0").grid(row=0, column=0)
#                 for i, uni in enumerate(universities, start=1):
#                     tk.Label(result_window, text=uni["name"], bg="#F0F0F0").grid(row=i, column=0)
#             else:
#                 messagebox.showinfo("Matching Universities", "No universities match your criteria.")
#         else:
#             messagebox.showerror("Error", "Failed to fetch data from API.")

#     tk.Button(search_window, text="Submit", command=suggest_universities, bg="#007ACC", fg="white").grid(row=4, columnspan=2)

# def main_menu():
#     root = tk.Tk()
#     root.title("University Search App")
#     root.configure(bg="#F0F0F0")  # Setting background color

#     search_button = tk.Button(root, text="Search Universities", command=search_universities, bg="#007ACC", fg="white")
#     search_button.pack(pady=10)

#     root.mainloop()

# main_menu()




import tkinter as tk
from tkinter import messagebox
import requests

def search_universities():
    search_window = tk.Toplevel()
    search_window.title("Search Universities")
    search_window.configure(bg="#F0F0F0")  # Setting background color
    
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

        url = f"https://universities.hipolabs.com/search?cgpa_lte={cgpa}&gre_lte={gre}&ielts_lte={ielts}&toefl_lte={toefl}"
        response = requests.get(url)
        if response.status_code == 200:
            universities = response.json()
            if universities:
                result_window = tk.Toplevel()
                result_window.title("Matching Universities")
                result_window.configure(bg="#F0F0F0")  # Setting background color
                
                tk.Label(result_window, text="University Name", bg="#F0F0F0").grid(row=0, column=0)
                for i, uni in enumerate(universities, start=1):
                    tk.Label(result_window, text=uni["name"], bg="#F0F0F0").grid(row=i, column=0)
            else:
                messagebox.showinfo("Matching Universities", "No universities match your criteria.")
        else:
            messagebox.showerror("Error", "Failed to fetch data from API.")

    tk.Button(search_window, text="Submit", command=suggest_universities, bg="#007ACC", fg="white").grid(row=4, columnspan=2)

def main_menu():
    root = tk.Tk()
    root.title("University Search App")
    root.configure(bg="#F0F0F0")  # Setting background color

    search_button = tk.Button(root, text="Search Universities", command=search_universities, bg="#007ACC", fg="white")
    search_button.pack(pady=10)

    root.mainloop()

main_menu()
