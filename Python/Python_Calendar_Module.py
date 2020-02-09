import calendar

date = list(map(int,input().split()))

day = calendar.weekday(date[2], date[0], date[1])

weekdays = ["MONDAY","TUESDAY","WEDNESDAY","THURSDAY","FRIDAY","SATURDAY","SUNDAY"]

print(weekdays[day])
