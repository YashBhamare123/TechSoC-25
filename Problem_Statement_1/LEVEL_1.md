def caesar_cipher(text, shift):
    result = ""
    for char in text:
        if char.isalpha(): 
           
            if char.isupper():
                result += chr((ord(char) - 65 + shift) % 26 + 65)
           
            else:
                result += chr((ord(char) - 97 + shift) % 26 + 97)
        else:
           
            result += char
    return result



statement = input("Enter your statement: ")
shift = int(input("Enter shift value: "))


encoded = caesar_cipher(statement, shift)
print("Encoded Statement:", encoded)
