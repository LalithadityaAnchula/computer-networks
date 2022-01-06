def transmit(message) :
    flag = input("Enter the start and end flag : ")
    while len(flag) != 8 :
        flag = input("Enter a valid 8 bit flag : ")
    esc = input("Enter the escape byte sequence : ")
    while len(esc)!= 8:
        esc = input("Enter a valid 8 bit escape : ")
    i = 0 
    while i < len(message) :
        if message[i] == flag or message[i] == esc : 
            message.insert(i,esc)
            i += 1
        i += 1
    
    print("The Transmitted frame is : ")
    print(flag,end="   ")
    for i in range(len(message)) :
        print(message[i],end=" ")
    print(" ",flag)


if __name__ == "__main__" :
    n = int(input("Enter the Number of bytes to be transmitted : "))
    message = []
    i = 0 
    while i < n : 
        m = input(f"Enter the bit {i+1} :")
        if len(m) != 8 : 
            print("Size mismatch, Enter the byte agian,")
            continue
        message.append(m)
        i += 1
    transmit(message)
