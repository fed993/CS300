file = open("g.in.txt", "r")

nulllines = 0

arr = [[]]

row = 0
col = 0

# read file
for line in file:
    if nulllines > 0: # reading matrix
        nulllines -= 1
        for letter in line:
            if letter == "\n" or letter == " ":
                continue
            else:
                arr[row][col] = int(letter)
        continue
    else:   # reading matrix info
        list = line.split()
        
        m = int(line[0])
        n = int(line[1])

        nulllines = m

    
