"""Optional desktop front end for the local data importer; Python 3.12+ required."""
from pathlib import Path
import threading
import tkinter as tk
from tkinter import filedialog, messagebox
from import_discs import prepare


def main():
    window = tk.Tk()
    window.title('DW3 Disc Data Setup — development build')
    window.geometry('720x300')
    tk.Label(window, text='Prepare your DW3 + Xtreme Legends disc data', font=('', 14)).pack(pady=12)
    tk.Label(window, text='This tool imports data only. Native gameplay and MixJoy integration are unfinished.').pack()
    values = [tk.StringVar() for _ in range(3)]
    for index, label in enumerate(('DW3 NTSC-U ISO', 'Xtreme Legends NTSC-U ISO', 'New output folder')):
        row = tk.Frame(window)
        row.pack(fill='x', padx=12, pady=6)
        tk.Label(row, text=label, width=25, anchor='w').pack(side='left')
        tk.Entry(row, textvariable=values[index]).pack(side='left', fill='x', expand=True)
        if index < 2:
            tk.Button(row, text='Browse', command=lambda i=index: values[i].set(filedialog.askopenfilename(filetypes=[('ISO disc image','*.iso')]))).pack(side='right')
        else:
            tk.Button(row, text='Choose parent', command=lambda: values[2].set(str(Path(filedialog.askdirectory())/'DW3-data'))).pack(side='right')
    status = tk.StringVar(value='Inputs remain local. Existing output folders are never overwritten.')
    tk.Label(window, textvariable=status).pack(pady=8)

    def finish(result, error):
        button.config(state='normal')
        if error:
            status.set('Import failed. Any partial output is retained for diagnosis.')
            messagebox.showerror('Import failed', error)
        else:
            status.set(f"Prepared {result['files']} files. No playable game installed.")

    def start():
        paths = [value.get() for value in values]
        if not all(paths):
            messagebox.showerror('Missing input', 'Choose both ISOs and a new output folder.')
            return
        button.config(state='disabled')
        status.set('Verifying and importing discs. This can take several minutes.')
        def run():
            try:
                result = prepare(*map(Path, paths))
                window.after(0, finish, result, None)
            except Exception as error:
                window.after(0, finish, None, type(error).__name__+': '+str(error))
        threading.Thread(target=run, daemon=True).start()
    button = tk.Button(window, text='Import both discs', command=start)
    button.pack()
    window.mainloop()


if __name__ == '__main__':
    main()
