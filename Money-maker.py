def fizzbuzz(n):
    num = []
    for i in range(1, n+1):   
        if i % 15 == 0:
            num.append("FizzBuzz")
        elif i % 5 == 0:
            num.append("Buzz")
        elif i % 3 == 0:
            num.append("Fizz")
        else:
            num.append(str(i))  
    return num

print (fizzbuzz(15))