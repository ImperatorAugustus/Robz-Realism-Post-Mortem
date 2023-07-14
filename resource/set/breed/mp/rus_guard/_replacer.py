import os
import shutil
import re

for root, dirs, files in os.walk("./"):
    for name in files:
        with open(os.path.join(root, name)) as f:
            if name == "_replacer.py":
                continue
            cont = f.read()
            skin = ""
            if "elite_guard" in name:
                skin = "rus_t4"
            if "frontovik" in name:
                skin = "rus_t2"
            if "guard_elite" in name:
                skin = "rus_t4"
            if "guard_" in name:
                skin = "rus_t2"
            if "guards_shock" in name:
                skin = "rus_t3"
            if "nkvd" in name:
                skin = "rus_t3"
            if "penal" in name:
                skin = "rus_t1"
            if "recon_" in name:
                skin = "rus_t2"
            if "sapper_" in name:
                skin = "rus_t2"
                
            if skin != "":
                # do the repl
                cont = re.sub(
               r"{skin .*}", 
               rf'{{skin "{skin}"}}',
               cont
                )
                #print(cont)
            print(name)
        with open(os.path.join(root, name), 'w') as f:
            f.write(cont)