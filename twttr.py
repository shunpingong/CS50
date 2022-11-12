text = input("Enter string of text:")

for letter in text:
    if letter.upper() in ["A","E","I","O","U"]:
        print("",end='')
    else:
        print(letter,end='')
print()