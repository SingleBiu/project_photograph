###
 # @Author: SingleBiu
 # @Date: 2021-07-15 15:51:58
 # @LastEditors: SingleBiu
 # @LastEditTime: 2021-07-15 15:53:39
 # @Description: file content
### 
#!/bin/bash

find ./ -regex ".*\.c" >> 1.txt

line=0
while read var
do 
	echo $var
	while read var1
	do
		line=`expr $line + 1`
	done < $var
done < 1.txt

echo $line
