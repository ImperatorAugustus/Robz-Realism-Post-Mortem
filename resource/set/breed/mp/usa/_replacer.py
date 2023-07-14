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
            if "devil" in name:
                skin = "us_t4"
            if "82nd" in name:
                skin = "us_t3"
            if "101st" in name:
                skin = "us_t3"
            if "engineer" in name:
                skin = "us_t2"
            if "paramarine" in name:
                skin = "us_t3"
            if "recon" in name:
                skin = "us_t3"
            if "sturmovik" in name:
                skin = "us_t4"
                
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