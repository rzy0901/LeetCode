import re

# Method 1: regex
# while True:
#     try:
#         line = input()
#         vec = line.split(';')
#         regex = r'[0-9]+'
#         x, y = 0, 0
#         for s in vec:
#             if s == '':
#                 continue
#             if re.fullmatch(regex, s[1:]):
#                 num = int(s[1:])
#                 if s[0] == 'A':
#                     x -= num
#                 elif s[0] == 'D':
#                     x += num
#                 elif s[0] == 'W':
#                     y += num
#                 elif s[0] == 'S':
#                     y -= num
#         print(f'{x},{y}')
#     except:
#         break

# Method2: try except
while True:
    try:
        line = input()
        vec = line.split(';')
        x, y = 0,0 
        for s in vec:
            try:
                num = int(s[1:])
                if s[0] == 'A':
                    x -= num
                elif s[0] == 'D':
                    x += num
                elif s[0] == 'W':
                    y += num
                elif s[0] == 'S':
                    y -= num
            except:
                continue
        print(f'{x},{y}')
    except:
        break