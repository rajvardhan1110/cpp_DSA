import numpy as np 

l = np.array([10,8,20,6,40,23,12])
print(l)

mat=np.array([[1,2,3],[4,5,6]])  #matrix 2 * 3
print(mat)

mat2=np.array([[5,6,7],[9,8,3],[5,6,1]])  #matrix 3 * 3
print(mat2)

# mat3=mat+mat2
# print(mat3)   #it gives error due to matrix shape

mat4=np.dot(mat,mat2) #matrix multiplication
print(mat4)
print(mat@mat2)   #matrix multiplication

print(mat.ndim)  #matrix dimension

print(np.sort(l))  #sort l
print(np.max(l))    #maximum value in l
print(np.min(l))    #minimum value in l
print(np.mean(l))   #mean of l
print(np.sqrt(l))   #square root of all elements of l
print(np.shape(l))

test_eye=np.eye(2,2) #identity matrix 2*2
print(test_eye)





