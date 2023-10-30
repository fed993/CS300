file = open("h.in.txt", "r")
str = ""

for line in file:
    if (line == "0\n"):
        break
    str += "The number " + line
    str = str[:-1]
    str += " is "
    if (int(line) % 2 == 0):
        str += "EVEN.\n"
    else:
        str += "ODD.\n"

print(str)