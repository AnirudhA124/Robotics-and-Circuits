lst=[100,22,55,44,66,10]

smallest=lst[2]

for i in lst:
    if i<smallest:
        smallest=i
    else:
        continue

print(smallest)