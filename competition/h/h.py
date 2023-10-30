file = open("h.in.txt", "r")
str = ""

for line in file:
    counter = 0
    bin_str = bin(int(line))
    for i, char in enumerate(bin_str):
        if char == "0" and i > 2 and bin_str[i-1] == "1" and bin_str[i-2] == "1":
            counter += 1
    
    
    # # check if at least 3 times
    # for i in range(3) :
    #     if "110" in bin_str:
    #         # print("found a spooker")
    #         print(bin_str)
    #         bin_str = bin_str.replace("110", "", 1)
    #         print(bin_str)
    #         counter += 1
    # # check for more than 3 times
    # if "110" in bin_str:
    #     counter = 0

    if counter == 3:
        print("SPOOKY")
    else:
        print("MEH")