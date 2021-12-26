def clear(str):
    for i in range(1, len(str)):
        if not str[i - 1].isalpha() and not str[i].isalpha():
            str.erase(i, 1)
            i -= 1
    return str


def makeSentence(str):
    str.lstrip()
    str.rstrip()
    for i in range(len(str)):
            if not str[i].isalpha():
                str.replace(str[i], " ", 1)
    return str


def output(str):
    for i in range(len(str)):
        if len(str) == k:
            print(str[i])


str1 = input("Your string: ")
k = int(input("Amount of letters in words: "))
clear(str)
makeSentence(str)
res = str.split(" ")
output(str)
