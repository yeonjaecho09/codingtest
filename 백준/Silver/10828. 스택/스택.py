import sys
input = sys.stdin.readline
stack = []
top = -1
topValue = 0
isEmpty = 0

n = int(input())

for i in range(n):

  parts = input().split()
  text = parts[0]
  out = []

  if(text == "push"):
    value = int(parts[1])
    stack.append(value)
    topValue = value
  elif(text == "pop"):
    if(len(stack) == 0):
      print(-1)
    else:
      top = stack.pop()
      print(top)
  elif(text == "top"):
    if len(stack) == 0:
      print(-1)
    else:
      top = stack[-1]
      print(top)
  elif(text == "empty"):
    if len(stack) == 0:
      print(1)
    else:
      print(0)
  elif(text == "size"):
    print(len(stack))