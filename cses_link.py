import os
import re

dir = './CSES_problem_set'

files = os.listdir(dir)

link_added_files = None

with open(dir+'/'+'linked_files.txt', 'r') as fh:
    link_added_files = fh.read()
    link_added_files = set(link_added_files.split())

for file in files:
    match = re.fullmatch(r'[\d]+.cpp', file)
    if match and not file in link_added_files:
        link_added_files.add(file)
        with open(dir+'/'+file, 'r+') as fh:
            code = fh.read()
            link = '// To see the problem statement, visit, https://cses.fi/problemset/task/{} \n\n'.format(file[:-4])
            fh.seek(0)
            fh.write(link+code)

with open(dir+'/'+'linked_files.txt', 'w') as fh:
    fh.write('\n'.join(list(link_added_files)))