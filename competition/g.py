file = open("g.in.txt", "r")

for line in file:
    list = line.split()

    numppl = int(list[0])
    wrds = int(list[1])

    ppl = range(1, numppl+1)
    ppls = [*ppl]
    index = -1

    while (len(ppls) > 1):
        for i in range(wrds):
            if (index + 1 >= len(ppls)):
                index = 0
            else:
                index += 1
        del ppls[index]
        index -= 1

    print(ppls[0])
