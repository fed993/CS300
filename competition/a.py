file = open("./a.in.txt", "r")


gluten = ["soy sauce", "bread", "wheat", "kamut", "peanut chocolate"]
nut = ["peanut", "almond", "nut butter", "peanut chocolate", "cashew"]

for line in file:
    line = line.lower()

    if line[-1] == "\n":
        line = line[:-1]

    if (line in gluten) and (line in nut):
        print("BOTH")
    elif line in gluten:
        print("GLUTEN")
    elif line in nut:
        print("NUT")
    else:
        print("SAFE")