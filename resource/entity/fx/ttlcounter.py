import os

for root, dirs, files in os.walk("./"):
    for name in files:
        f = open(os.path.join(root, name))
        if not 'timetolive' in f.read():
            print(f"{os.path.join(root, name)} doesnt have ttl, fix or add to fxmanager for removal")