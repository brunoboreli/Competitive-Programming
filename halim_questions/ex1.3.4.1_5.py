import datetime
n = int(input())
dates = []
for i in range(n):
    dateDay, dateMonth, dateYear = input().split()
    dates.append(datetime.datetime(int(dateYear), int(dateMonth), int(dateDay)))

print(sorted(dates, key= lambda x: x.day))

print(sorted(dates, key= lambda x: x.month))

print(sorted(dates, key= lambda x: x.year))

