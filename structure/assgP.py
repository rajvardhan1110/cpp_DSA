name=input("enter Your Name: ")
print("Welcome, "+name)



a=int(input("Enter first number: "))
b=int(input("Enter Second number: "))
c=a+b
print("sum of above two numbers is ",c)



c=int(input("Enter temperature in celsius"))
d=(9/5) + 32
print("Temperature in Fahrenheit is", d)



second=int(input("Enter Seconds"))
hours=int(second/3600)
min=int((second-hours*3600)/60)
sec=int(second-((hours*3600)+(min*60)))
print("hours: ",hours)
print("minutes: ",min)
print("seconds: ",sec)




a=int(input("Enter bigger number: "))
b=int(input("Enter smaller number: "))

a=a-b
b=a+b
a=b-a

print("swapping numbers: ")
print("a: ",a)
print("b: ",b)
