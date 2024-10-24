 height = (float(input("enter the height in meters"  :)))
 weight = (float("enter the value in kg  :"))

 BMI = weight/(height**2)

 if bmi< 18:
 category ="underweight"


elif bmi< 25:
category ="normalweight"

elif bmi< 30:
category ="overweight"

else:
category ="obese"


print("BMI :",bmi)
print("category  :",category)