import requests

url="https://fanyi.baidu.com/sug"

s=input("输入：")
dat={
    "k":s
}

resp=requests.post(url,data=dat)

print(resp.json)