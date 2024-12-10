leftList = []
rightList = []

with open("input.txt", "r") as file:
    for line in file:
        int1, int2 = [int(x) for x in line.split()]

        leftList.append(int1)
        rightList.append(int2)

leftList.sort()
rightList.sort()

distances = []

for i in range(1000):
    distances.append(abs(leftList[i] - rightList[i]))
print(sum(distances))