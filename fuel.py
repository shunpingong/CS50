while True:
        fuel= input("Enter fraction:")
        try:
            x , y = fuel.split("/")
            x = int(x)
            y = int(y)
            percentage = x / y
            if percentage <=1:
                break
        except (ValueError,ZeroDivisionError):
            pass
p = percentage*100
if p<=1:
    print("E")
elif p>=99:
    print("F")
else:
    print(f"{p}%")
