import datetime

today = datetime.datetime.now()
dateDay, dateMonth, dateYear = input().split()

date = datetime.datetime(int(dateYear), int(dateMonth), int(dateDay))

print(date.strftime("%a"))
print((today - date).days)