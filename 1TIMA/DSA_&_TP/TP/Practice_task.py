for i in range(1, 21):
  if i % 3 == 0 and i % 5 == 0:
    print("FuzzBizz")
  elif i % 3 == 0:
    print("Fuzz")
  elif i % 5 == 0:
    print("Bizz")
  else:
    print(i)