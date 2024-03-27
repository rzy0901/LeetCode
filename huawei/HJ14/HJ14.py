while True:
    try:
        n = int(input())
        v = []
        for i in range(n):
            s = input()
            v.append(s)
        v.sort()
        for i in v:
            print(i)
    except:
        break
