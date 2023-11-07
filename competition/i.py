file = open("i.in.txt", "r")

line_number = 0

for line in file:
    if line[-1] == "\n":
        line = line[:-1]

    if line.isnumeric():
        print("WOW NUMBER TIME")