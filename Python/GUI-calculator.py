import tkinter as tk
import math

calculation = ""

def add_to_calculation(symbol):
    global calculation
    calculation += str(symbol)
    text_result.delete(1.0, "end")
    text_result.insert(1.0, calculation)

def evaluate_calculation():
    global calculation
    try:
        calculation = str(eval(calculation))
        text_result.delete(1.0, "end")
        text_result.insert(1.0, calculation)
    except:
        clear_field()
        text_result.insert(1.0, "Error")

def clear_field():
    global calculation
    calculation = ""
    text_result.delete(1.0, "end")

def backspace():
    global calculation
    calculation = calculation[:-1]
    text_result.delete(1.0, "end")
    text_result.insert(1.0, calculation)

def sqrt():
    global calculation
    try:
        calculation = str(math.sqrt(eval(calculation)))
        text_result.delete(1.0, "end")
        text_result.insert(1.0, calculation)
    except:
        clear_field()
        text_result.insert(1.0, "Error")

root = tk.Tk()
root.geometry("440x520")
root.title("Hridoy Calculator")
root.configure(bg="#1D3849")

text_result = tk.Text(root, height=2.5, width=24, font=("Arial", 24), bg="white", fg="black")
text_result.grid(columnspan=5)

# Button Colors
button_color = "#455054"
operation_color = "#FF9500"
text_color = "white"

# Buttons
tokens = [
    ("C", clear_field, 1, 1, "red"), ("⌫", backspace, 1, 2, "#578494"), ("%", lambda: add_to_calculation("%"), 1, 3, "#578494"), ("/", lambda: add_to_calculation("/"), 1, 4, "#578494"),
    ("7", lambda: add_to_calculation(7), 2, 1, button_color), ("8", lambda: add_to_calculation(8), 2, 2, button_color), ("9", lambda: add_to_calculation(9), 2, 3, button_color), ("*", lambda: add_to_calculation("*"), 2, 4, operation_color),
    ("4", lambda: add_to_calculation(4), 3, 1, button_color), ("5", lambda: add_to_calculation(5), 3, 2, button_color), ("6", lambda: add_to_calculation(6), 3, 3, button_color), ("-", lambda: add_to_calculation("-"), 3, 4, operation_color),
    ("1", lambda: add_to_calculation(1), 4, 1, button_color), ("2", lambda: add_to_calculation(2), 4, 2, button_color), ("3", lambda: add_to_calculation(3), 4, 3, button_color), ("+", lambda: add_to_calculation("+"), 4, 4, operation_color),
    ("(", lambda: add_to_calculation("("), 5, 1, button_color), ("0", lambda: add_to_calculation(0), 5, 2, button_color), (")", lambda: add_to_calculation(")"), 5, 3, button_color), (".", lambda: add_to_calculation("."), 5, 4, "#FF9500"),
    ("√", sqrt, 6, 1, operation_color), ("^", lambda: add_to_calculation("**"), 6, 2, operation_color), ("=", evaluate_calculation, 6, 3, "#067388", 2)
]

for (text, command, row, col, color, *cs) in tokens:
    btn = tk.Button(root, text=text, command=command, width=5 if not cs else 11, font=("Arial", 24), bg=color, fg=text_color)
    btn.grid(row=row, column=col, columnspan=cs[0] if cs else 1)

root.mainloop()

