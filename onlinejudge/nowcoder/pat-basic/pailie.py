choices = ['1', '2', '3']
pailie = [(x, y) for x in choices for y in choices]

print(pailie)
# print(len(pailie))

zuhe_process = []
for choice in pailie:
    tmp = tuple(sorted(choice))
    zuhe_process.append(tmp)
zuhe = list(set(zuhe_process))
#print(zuhe_process)
print(zuhe)
