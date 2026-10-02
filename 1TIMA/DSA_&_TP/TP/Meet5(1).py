def calculate_sum(x):
    sum_data = []
    for i in x:
        sum_data.append(sum(i))
    print(sum_data)
x=[[1,2,3,4,5],[6,7,8,9,10]]
calculate_sum(x)
y=[[125,300,1000000,525625373]]
calculate_sum(y)