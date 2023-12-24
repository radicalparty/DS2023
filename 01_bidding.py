import sys
input = sys.stdin.readline
def main():
    people = []
    price = [0 for i in range(10001)]
    n = int(input())
    for i in range(n):
        name, p = input().rstrip('\n').split()
        price[int(p)] += 1
        people.append([int(p), name])
    people.sort(reverse = True)
    for i in range(n):
        if price[people[i][0]] == 1:
            print(people[i][1])
            return
    print('NONE')
    return
main()
