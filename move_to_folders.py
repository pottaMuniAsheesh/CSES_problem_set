import os
import shutil
import requests
import re
import sys

def get_html():
    url = "https://cses.fi/problemset/"
    content = requests.get(url)
    return content.text

file_list = os.listdir()
file_list = ' '.join(file_list)
cwd = os.getcwd()

if not re.search("page.html", file_list) or (len(sys.argv) > 1 and sys.argv[1] == '--download'):
    with open("page.html", 'w') as fh:
        text = get_html()
        fh.write(text)

fh = open("page.html", 'r')
content = fh.read()
fh.close()

topicwise = re.findall(r'<h2>([\w\s]+?)</h2><ul class="task-list">(.*?)</ul>', content)
topicwise_tasklist = dict()

for k,v in topicwise:
    topicwise_tasklist[k] = re.findall(r'<a href="/problemset/task/([0-9]*?)">(.+?)</a>', v)
    # print(k, topicwise_tasklist[k])

for k,v in topicwise_tasklist.items():
    dir_name = ''.join(k.split())
    dir_exists = re.search(dir_name, file_list)
    for num, name in v:
        if re.search(num+".cpp", file_list):
            if not dir_exists:
                os.mkdir(cwd+"/"+dir_name)
                dir_exists = True
            taskname = ''.join(name.split())
            shutil.move(f"{cwd}/{num}.cpp", f"{cwd}/{dir_name}/{taskname}.cpp")
            