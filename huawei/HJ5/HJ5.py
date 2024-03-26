# while True:
#     try:
#         s = input()
#         print(int(s, 16))
#     except:
#         break
dic = {'A':10, 'B':11, 'C':12, 'D':13, 'E':14, 'F':15, '0':0, '1':1, '2':2, '3':3, '4':4, '5':5, '6':6, '7':7, '8':8, '9':9}

while True:
    try:
        s = input()
        length = len(s)
        res = 0
        for i in range(2,length):
            temp = dic[s[i]]
            res = res * 16 + temp
        print(res)
    except:
        break