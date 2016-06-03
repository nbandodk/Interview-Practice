def urlifyString(str):
    res = []
    str = str.strip()
    for char in str:
        if(char == ' '):
            res += '%20'
        else:
            res += char
    res = ''.join(res)
    return res
    
print urlifyString("Wikipedia The Free Encyclopedia")
