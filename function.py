def percent(marks):
    p=((marks[0]+marks[1]+marks[2]+marks[3])/400)*100
    return p
marks1=[10,11,12,13]
percentage1=percent(marks1)

marks2=[14,15,16,17]
percentage2=percent(marks2)

print(percentage1,percentage2)
