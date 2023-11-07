file = open("h.in.txt", "r")
str = ""

for line in file:
    counter = 0
    bin_str = bin(int(line))
    for i, char in enumerate(bin_str):
        if char == "0" and i > 2 and bin_str[i-1] == "1" and bin_str[i-2] == "1":
            counter += 1
            
    if counter == 3:
        print("SPOOKY")
    else:
        print("MEH")