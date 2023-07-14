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
            if "dasreich_pzgren" in name:
                skin = "ger_t4"
            if "fallschirm" in name:
                skin = "ger_t4"
            if "fusilier" in name:
                skin = "ger_t3"
            if "gd_pzgren" in name:
                skin = "ger_t4"
            if "gebirgs" in name:
                skin = "ger_t3"
            if "jager" in name and "gebirgs" not in name:
                skin = "ger_t4"
            if "grenadier" in name:
                skin = "ger_t2"
            if "hitlerjugend" in name:
                skin = "ger_t2"
            if "landes" in name:
                skin = "ger_t1"
            if "lssah_pzgren" in name:
                skin = "ger_t4"
            if "pzgren" in name:
                skin = "ger_t3"
            if "ssvt" in name:
                skin = "ger_t1"
            if "recon" in name:
                skin = "ger_t3"
            if "sturmovik" in name:
                skin = "ger_t3"
            if "sturmpio" in name:
                skin = "ger_t2"
            if "sturmgren" in name:
                skin = "ger_t2"
            if "volks" in name:
                skin = "ger_t1"
            if "tk_pzgren" in name:
                skin = "ger_t3"
                
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