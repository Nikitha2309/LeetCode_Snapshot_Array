# LeetCode_Snapshot_Array 
# Question - https://leetcode.com/problems/snapshot-array/
# Answer - https://git.io/JLbym
# Explanation - 

#A easy way to solve this problem is to store all values of Snapshot Array with respect to snap_id and index .
#i.e we create a 2D map(snapshot_array) whose rows indicate index of Snapshot array and columns indicate snap_id when this value is stored .

#For this we create a global variable snap_id and set it to 0 initially and increase it by 1 , whenever snap function is called.
#Whenever we set a value , inside set function , we update element corresponding to modified map to 1 (which says that value at that index is update when snap_id is as given )
#and store the value in the 2D map(snapshot_array) at the given index corresponding to existing snap_id.

#Whenever we need to get a value corresponding to a index a snap_id , we check if that value is modified or not (it is modified if modified[index][snap_id]=1 else not)
#If it is modified , then we simply return snapshot_array[index][snap_id]
#else it will be same as the value at index corresponding to snap_id=snap_id-1 
#Hence we call get function with snap_id decremented by 1.

# Space Complexity
#Here we are using 2 2D maps and global variable 

# Time Complexity
#Set Function - O(1)
#Snap Function - O(1)
#Get Function 
#- Worst Case - O(n)
#- Best Case - O(1)


