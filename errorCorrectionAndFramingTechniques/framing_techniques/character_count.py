if __name__ == "__main__" :
    n = int(input("Enter Number of frames  :"))
    message = []
    for i in range(n) :
        m = input(f"Enter the message {i+1} : ")
        message.append(str(len(m))+m)
    print("The message transmitted is : ")
    for i in range(n) :
        print(message[i],end="  ")