# import sys

# for line in sys.stdin:
#     line = line.strip()
#     length = len(line)
#     if length % 8 != 0:
#         line += '0' * (8 - length % 8)
#     new_length = len(line)
#     for i in range(0, new_length, 8):
#         print(line[i:i+8])

# input 不需要strip
while True:
    try:
        line = input()
        length = len(line)
        if length % 8 != 0:
            line += '0' * (8 - length % 8)
        new_length = len(line)
        for i in range(0, new_length, 8):
            print(line[i:i+8])
    except EOFError:
        break