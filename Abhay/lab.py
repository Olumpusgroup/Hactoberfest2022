def add(a,b):
    return a+b

def sub(a,b):
    return a-b

def mul(a,b):
    return a*b

def div(a,b):
    return a/b

def main():
    a=int(input("Enter the first number: "))
    b=int(input("Enter the second number: "))
    print("Addition of two numbers is: ",add(a,b))
    print("Subtraction of two numbers is: ",sub(a,b))
    print("Multiplication of two numbers is: ",mul(a,b))
    print("Division of two numbers is: ",div(a,b))
