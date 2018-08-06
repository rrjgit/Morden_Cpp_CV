# 1. Count how many lines are there in "data.dat"
echo Counting how many lines are there in "data.dat"...
cd ../data
wc -l data.dat

# 2. Count how many lines of those contain "dolor" or "dalor" 
# are in "data.dat"
echo Counting how many lines of those contain "dolor" or "dalor"... 
cd ../data
(grep "Lorem" data.dat && grep "dalor" data.dat) | wc -l 

# command1 | command2 
# Pipe stdout of command1 to stdin to command2

# 3. Count how many words(char) are there in "data.dat"
echo Counting how many words are there in "data.dat"...
cd ../data
wc -m data.dat

# 4. Count how many of those starts with "mol"
echo Counting how many of those starts with "mol"...
cd ../data
grep -o "mol" data.dat | wc -m

# 5. Count how many files in "test_folder" are ".txt" files
echo Count how many files in "test_folder" are ".txt" files...
find ../data/test_folder -name *.txt | wc -l

