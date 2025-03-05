import tkinter as tk
import subprocess
import time

def read_array_from_file(filename):
    with open(filename, 'r') as file:
        return list(map(int, file.readline().split()))

def update_canvas(canvas, array):
    canvas.delete("all")
    bar_width = 800 // len(array)
    for i, value in enumerate(array):
        x0, y0 = i * bar_width, 400 - value * 10
        x1, y1 = (i + 1) * bar_width, 400
        canvas.create_rectangle(x0, y0, x1, y1, fill="blue", outline="black")
    canvas.update()
    time.sleep(0.5)

def visualize_sorting():
    subprocess.run(["./a.out"])  # Run compiled C program
    sorted_array = read_array_from_file("sorted_output.txt")
    update_canvas(canvas, sorted_array)

root = tk.Tk()
root.title("Sorting Visualization")
canvas = tk.Canvas(root, width=800, height=400, bg='white')
canvas.pack()
btn_sort = tk.Button(root, text="Start Sorting", command=visualize_sorting)
btn_sort.pack()
root.mainloop()
