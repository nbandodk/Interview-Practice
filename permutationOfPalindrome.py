import string

def isPermutationOfPalindrome(str):
    d = dict.fromkeys(string.ascii_lowercase, False)
    count = 0
    for char in str:
        if(ord(char) > 96 and ord(char) < 123):
            d[char] = not d[char]
            
    for key in d:
        if d[key] == True:
            count += 1
            if count > 1:
                return False
                
    return True
    
print isPermutationOfPalindrome("aabbcceee")
