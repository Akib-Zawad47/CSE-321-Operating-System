# Create a file containing your running semester’s course information (course IDs, Course names, Sections, etc.) Count the lines containing 
# the word “CSE” in that file named course.txt 	

touch course.txt
cat >> course.txt << EOF
course IDs : CSE321
course names : Perating System
section : 09
EOF

grep -c "CSE" course.txt