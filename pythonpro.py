import tkinter as tk
from tkinter import messagebox
import csv

class UniversityApp:
    def __init__(self, master):
        self.master = master
        master.title("University Search App")
        master.configure(bg="#F0F0F0") 

        self.universities = self.load_from_csv()

        self.create_main_menu()

    def load_from_csv(self):
        universities = []
        try:
            with open("universities.csv", newline="") as csvfile:
                reader = csv.DictReader(csvfile)
                for row in reader:
                    universities.append(row)
        except FileNotFoundError:
            pass  
        return universities

    def save_to_csv(self):
        with open("universities.csv", "w", newline="") as csvfile:
            fieldnames = ["name", "cgpa", "gre", "ielts", "toefl"]
            writer = csv.DictWriter(csvfile, fieldnames=fieldnames)
            writer.writeheader()
            writer.writerows(self.universities)

    def create_main_menu(self):
        self.search_frame = tk.Frame(self.master, bg="#F0F0F0")
        self.search_frame.pack(pady=10)

        tk.Label(self.search_frame, text="University Search App", bg="#F0F0F0", font=("Arial", 18)).pack(pady=10)

        tk.Label(self.search_frame, text="CGPA", bg="#F0F0F0").grid(row=1, column=0)
        tk.Label(self.search_frame, text="GRE Score", bg="#F0F0F0").grid(row=2, column=0)
        tk.Label(self.search_frame, text="IELTS Score", bg="#F0F0F0").grid(row=3, column=0)
        tk.Label(self.search_frame, text="TOEFL Score", bg="#F0F0F0").grid(row=4, column=0)

        self.cgpa_value = tk.DoubleVar()
        self.gre_value = tk.DoubleVar()
        self.ielts_value = tk.DoubleVar()
        self.toefl_value = tk.IntVar()

        tk.Entry(self.search_frame, textvariable=self.cgpa_value).grid(row=1, column=1)
        tk.Entry(self.search_frame, textvariable=self.gre_value).grid(row=2, column=1)
        tk.Entry(self.search_frame, textvariable=self.ielts_value).grid(row=3, column=1)
        tk.Entry(self.search_frame, textvariable=self.toefl_value).grid(row=4, column=1)

        tk.Button(self.search_frame, text="Search Universities", command=self.suggest_universities, bg="#007ACC", fg="white").grid(row=5, columnspan=2, pady=10)

        tk.Button(self.search_frame, text="Add University", command=self.add_university, bg="#007ACC", fg="white").grid(row=6, columnspan=2, pady=10)

    def suggest_universities(self):
        cgpa = self.cgpa_value.get()
        gre = self.gre_value.get()
        ielts = self.ielts_value.get()
        toefl = self.toefl_value.get()

        matching_universities = [uni for uni in self.universities if
        cgpa >= float(uni["cgpa"]) and gre >= float(uni["gre"]) and
        ielts >= float(uni["ielts"]) and toefl >= int(uni["toefl"])]

        if matching_universities:
            self.display_results(matching_universities)
        else:
            messagebox.showinfo("Matching Universities", "No universities match your criteria.")

    def display_results(self, universities):
        result_window = tk.Toplevel(self.master)
        result_window.title("Matching Universities")
        result_window.configure(bg="#F0F0F0")

        tk.Label(result_window, text="University Name", bg="#F0F0F0").grid(row=0, column=0)
        tk.Label(result_window, text="CGPA", bg="#F0F0F0").grid(row=0, column=1)
        tk.Label(result_window, text="GRE Score", bg="#F0F0F0").grid(row=0, column=2)
        tk.Label(result_window, text="IELTS Score", bg="#F0F0F0").grid(row=0, column=3)
        tk.Label(result_window, text="TOEFL Score", bg="#F0F0F0").grid(row=0, column=4)

        for i, uni in enumerate(universities, start=1):
            tk.Label(result_window, text=uni["name"], bg="#F0F0F0").grid(row=i, column=0)
            tk.Label(result_window, text=uni["cgpa"], bg="#F0F0F0").grid(row=i, column=1)
            tk.Label(result_window, text=uni["gre"], bg="#F0F0F0").grid(row=i, column=2)
            tk.Label(result_window, text=uni["ielts"], bg="#F0F0F0").grid(row=i, column=3)
            tk.Label(result_window, text=uni["toefl"], bg="#F0F0F0").grid(row=i, column=4)

    def add_university(self):
        self.search_frame.destroy()

        self.add_frame = tk.Frame(self.master, bg="#F0F0F0")
        self.add_frame.pack(pady=10)

        tk.Label(self.add_frame, text="Add University", bg="#F0F0F0", font=("Arial", 18)).pack(pady=10)

        tk.Label(self.add_frame, text="University Name", bg="#F0F0F0").pack()
        self.uni_name = tk.StringVar()
        tk.Entry(self.add_frame, textvariable=self.uni_name).pack()

        tk.Label(self.add_frame, text="CGPA", bg="#F0F0F0").pack()
        self.cgpa_value = tk.DoubleVar()
        tk.Entry(self.add_frame, textvariable=self.cgpa_value).pack()

        tk.Label(self.add_frame, text="GRE Score", bg="#F0F0F0").pack()
        self.gre_value = tk.DoubleVar()
        tk.Entry(self.add_frame, textvariable=self.gre_value).pack()

        tk.Label(self.add_frame, text="IELTS Score", bg="#F0F0F0").pack()
        self.ielts_value = tk.DoubleVar()
        tk.Entry(self.add_frame, textvariable=self.ielts_value).pack()

        tk.Label(self.add_frame, text="TOEFL Score", bg="#F0F0F0").pack()
        self.toefl_value = tk.IntVar()
        tk.Entry(self.add_frame, textvariable=self.toefl_value).pack()

        tk.Button(self.add_frame, text="Add University", command=self.save_university, bg="#007ACC", fg="white").pack(pady=10)

    def save_university(self):
        name = self.uni_name.get()
        cgpa = self.cgpa_value.get()
        gre = self.gre_value.get()
        ielts = self.ielts_value.get()
        toefl = self.toefl_value.get()

        self.universities.append({"name": name, "cgpa": cgpa, "gre": gre, "ielts": ielts, "toefl": toefl})
        self.save_to_csv()
        messagebox.showinfo("University Added", f"{name} has been added to the list of universities.")
        self.add_frame.destroy()
        self.create_main_menu()

def main():
    root = tk.Tk()
    app = UniversityApp(root)
    root.mainloop()

if __name__ == "__main__":
    main()
