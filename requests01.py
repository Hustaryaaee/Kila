import requests

q=input("输入查找内容：")

url=f'https://cn.bing.com/search?q={q}'


dic={
    "User-Agent":"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/121.0.0.0 Safari/537.36"
}

resp=requests.get(url,headers=dic)


print(resp.text)