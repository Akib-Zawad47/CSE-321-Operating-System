# Create 4 files named yourID_1.txt, yourID_2.txt, yourID_3, yourID_4.txt and 2 directories named YourName1, YourName2. 
touch 1234_1.txt 1234_2.txt 1234_3.txt 1234_4.txt
mkdir AkibZawad1 AkibZawad2

# Move yourID_1.txt, yourID_2.txt, yourID_3.txt in YourName1 directory. 
mv -v 1234_1.txt 1234_2.txt 1234_3.txt AkibZawad1

# Copy yourID_1.txt, yourID_2.txt YourName2 directory. 
cp -v AkibZawad1/1234_1.txt AkibZawad1/1234_2.txt AkibZawad2

# Create another directory YourName3. 
mkdir AkibZawad3

# Now, copy the YourName1 directory along with its contents to the YourName3 directory. 
cp -r AkibZawad1 AkibZawad3

# Now go into the YourName3 directory and check the permissions of the files/directory and change the permissions for both groups and others to 
# only read-execute for all the files. 
cd AkibZawad3
ls -l
chmod go=rx*

# Now go back to one directory and print all the directories and files in the current working directory. Finally, move the YourName3 folder to 
#the root directory and delete the rest of the files and folders in the current working directory. 
cd ../
ls -a
mv AkibZawad3 /
rm -r *


