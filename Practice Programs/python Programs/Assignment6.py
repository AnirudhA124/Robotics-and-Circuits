import json
import urllib.request,urllib.error,urllib.parse
count = 0

url = "http://py4e-data.dr-chuck.net/comments_1690577.json"
print ("retrieving URL. Stand by.")
uh = urllib.request.urlopen(url)
data= uh.read()

info = json.loads(data)
for item in info["comments"]:
	#print item["count"]
	number = int(item["count"])
	count = count + number
print (count)