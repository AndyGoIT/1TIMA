import random
def generate_password(lenght):
  string="abcdefghijklmnopqrstuvwxyz1234567890"
  password=""
  for i in range(lenght):
    password += string[random.randint(0,len(string)-1)]
  return password