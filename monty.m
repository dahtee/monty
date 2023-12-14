import sys

if len(sys.argv) != 2:
    print("USAGE: monty file")
    sys.exit(1)

try: 
    with open(sys.argv[1]) as f:
        lines = f.readlines()
except:
    print(f"Error: Can't open file {sys.argv[1]}")
    sys.exit(1)

line_num = 1
while line_num <= len(lines):
    try: 
        opcode, arg = lines[line_num-1].split()
        execute(opcode, arg)
    except:
        print(f"L{line_num}: unknown instruction {opcode}") 
        sys.exit(1)
    
    line_num += 1

print("Monty program executed successfully!")
