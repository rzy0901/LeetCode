def ip2int(ip):
    nums = list(map(int, ip.split('.')))
    # method 1
    s = bin(nums[0])[2:].zfill(8) + bin(nums[1])[2:].zfill(8) + bin(nums[2])[2:].zfill(8) + bin(nums[3])[2:].zfill(8)
    return int(s, 2)
    # # method 2
    # return (nums[0] << 24) + (nums[1] << 16) + (nums[2] << 8) + nums[3]
    # # method 3 
    # return (nums[0] * 256 ** 3) + (nums[1] * 256 ** 2) + (nums[2] * 256) + nums[3]

def int2ip(int10):
    s = bin(int10)[2:].zfill(32)
    ip = f'{int(s[:8], 2)}.{int(s[8:16], 2)}.{int(s[16:24], 2)}.{int(s[24:], 2)}'
    return ip

while True:
    try:
        ip = input().strip()
        int10 = int(input())
        print(ip2int(ip))
        print(int2ip(int10))
    except:
        break
