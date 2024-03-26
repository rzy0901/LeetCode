import sys 

def check1(s):
    if len(s) <= 8:
        return False
    return True

def check2(s):
    count = [0]*4
    for c in s:
        if 'A' <= c <= 'Z':
            count[0] = 1
        elif 'a' <= c <= 'z':
            count[1] = 1
        elif '0' <= c <= '9':
            count[2] = 1
        else:
            count[3] = 1
    if sum(count) >= 3:
        return True
    return False

def check3(s):
    for i in range(len(s)-2):
        if s[i:i+3] in s[i+1:]:
            return False
    return True

for line in sys.stdin:
    line = line.strip()
    if check1(line) and check2(line) and check3(line):
        print("OK")
    else:
        print("NG")
        