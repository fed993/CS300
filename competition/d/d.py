file = open("d.in.txt", "r")

n=0
m=0
x=0
y=0

# N M X Y
for line in file:

    list = line.split()

    n = int(list[0])
    m = int(list[1])
    x = int(list[2])
    y = int(list[3])
    if (x > (n/3) and x < (2*n/3) and y > (m/3) and y < (2*m/3)):
        print("GOOD")
    else:
        print("BAD")