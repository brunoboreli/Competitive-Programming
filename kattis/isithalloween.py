m, d= input().split()

if (m == "OCT" and int(d) == 31) or (m == "DEC" and int(d) == 25):
    print("yup")
else:
    print("nope")