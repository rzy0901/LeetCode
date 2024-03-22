while True:
    try:
        N = input()
        lst = []
        for i in range(int(N)):
            lst.append(int(input()))
        uniq = set(lst)
        lst = list(uniq)
        lst.sort()
        for i in lst:
            print(i)    
    except:
        break
