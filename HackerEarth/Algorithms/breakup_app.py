n = int(input())

have_date = 0
no_date = 0

for i in range(n):
  dates = []
  msg = input().split(' ')
  for word in msg:
    if word.isdigit():
      dates.append(int(word))

  speaker = msg[0][0]
  for date in dates:
    if date in [19, 20]:
      have_date += 2 if speaker == 'G' else 1 
    else:
      no_date += 2 if speaker == 'M' else 1
  

if have_date > no_date:
  print('Date')
else:
  print('No Date')      
